//Spam filter
//Team default string

#include <iostream>
#include <string>
#include "classifier.h"

using namespace std;

double k = 1;

//three inputs, 1 and 2 are ham and spam(in that order), which are passed to the Classifier constructor. 3 is the input file, which is the email we are trying to classify
int main(int argc, char* argv[])
{
	if(argc != 4)
	{
		cerr << "Invalid number of inputs\n";
		return 1;
	}	
	std::string hamFile=argv[1];
	std::string spamFile=argv[2];
	Classifier *classify=new Classifier(hamFile, spamFile);
	for(int i=48; i<50; i++)
	{
		for(int j = 48; j<58; j++)
		{
			std::string input = argv[3];
			input = "tests/" + input;
			input = input + (char) i + (char) j + ".txt";
			fstream ifile(input.c_str(), ios::in);
			if(!ifile)
			{
				cerr << "Couldn't open file: " << input << endl;
				continue;
			}

			int totalH = classify->return_total_ham();
			int totalS = classify->return_total_spam();
			int total = classify->return_total();
			if(total==0)
			{
				cout << "Dictionary empty.\n";
				break;
			}
			double hamProb = 1;
			double spamProb = 1;
			double ham = ((double)totalH+k)/((double)total+k*2);
			double spam = ((double)totalS+k)/((double)total+k*2);
			std::string target;
			std::string message = "\0";
			while(ifile >> target)
			{
				if(message=="\0")
					message=target;
				else
					message=message+" "+target;
				int h=classify->lookup_ham(target);
				int s=classify->lookup_spam(target);
				hamProb*=((double)h+k)/((double)totalH+k*(double)total);
				spamProb*=((double)s+k)/((double)totalS+k*(double)total);
			}
			double mProb=hamProb*ham+spamProb*spam;
			double hamGivenM=hamProb*ham/mProb;
			double spamGivenM=spamProb*spam/mProb;
			cout << "\nProbability of ham = " << hamGivenM << endl;
			cout << "\nProbability of spam = " << spamGivenM << endl;
			if(hamGivenM>spamGivenM)
				cout << message << " is probably OK\n";
			else if(spamGivenM>hamGivenM)
				cout << message << " is probably spam\n";
			else
				cout << "Who knows...\n";
		}
	}
	return 0;
}
