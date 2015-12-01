//Spam filter
//Team default string

#include <iostream>
#include <string>
#include <classifier.h>

using namespace std;

//three inputs, 1 and 2 are ham and spam(in that order), which are passed to the Classifier constructor. 3 is the input file, which is the email we are trying to classify
int main(int argc, char* argv[])
{
	if(argc != 4)
	{
		cerr << "Invalid number of inputs\n";
		return 1;
	}

	Classifier classify;
	std::string ham = argv[1];
	std:string spam = argv[2];
	classify.classifier(ham, spam);

	for(int i=48; i<58; i++)
	{
		for(int j = 48; j<58; j++)
		{
			std::string input = "tests/" + argv[3] + (char) i + (char) j + ".txt";
			fstream ifile(in, ios::in);
			if(!ifile)
			{
				cerr << "Couldn't open file: " << input << endl;
				continue;
			}

			int totalH = classify.return_total_ham();
			int totalS = classify.return_total_spam();
			int total = classify.return_total();
			std::string target;
			while(ifile >> target)
			{
				int h = classify.lookup_ham(target);
				int s = classify.lookup_spam(target);
			}
		}
	}
	return 0;
}
