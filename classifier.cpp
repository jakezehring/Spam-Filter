//Spam Filter
//Team default string

#include "classifier.h"
#include "word.h"

using namespace std;

//Constructor, needs to open both files, needs to init dicitionary with each unique word, needs to count the number of words in the spam/ham files
Classifier::Classifier(string ham, string spam)
{
	sin.open(spam.c_str(), ios::in);
	hin.open(ham.c_str(), ios::in);
	total_spam = total_ham = 0;
	count_each_word();
}

//iterate trough dictionary, counting the number of times each word appears in spam/ham
void Classifier::count_each_word()
{
	string input;
	Word *pusher;
	while(sin >> input){
		pusher=*(dictionary.begin());
		while(pusher!=*(dictionary.end())){
			if(pusher->return_name()==input){
				pusher->increment_spam();
				break;
			}
		}
		if(pusher==*(dictionary.end())) continue;	
		pusher = new Word(input);
		dictionary.push_back(pusher);
		pusher->increment_spam();
		total_spam++;	
	}
	while(hin >> input){
		pusher=*(dictionary.begin());
		while(pusher!=*(dictionary.end())){
			if(pusher->return_name()==input){
				pusher->increment_ham();
				break;
			}
		}
		if(pusher==*(dictionary.end())) continue;
		pusher = new Word(input);
		dictionary.push_back(pusher);
		pusher->increment_ham();
	}
}

//finds the number of times target appears in ham
int Classifier::lookup_ham(string target)
{
	for(unsigned int i=0; i<dictionary.size(); i++)
		if(dictionary[i]->return_name()==target)
			return dictionary[i]->return_ham();
	return 0;
}

//finds the number of times target appears in spam
int Classifier::lookup_spam(string target)
{
	for(unsigned int i=0; i<dictionary.size(); i++)
		if(dictionary[i]->return_name()==target)
			return dictionary[i]->return_spam();
	return 0;
}

int Classifier::return_total()
{
	return dictionary.size();
}

int Classifier::return_total_ham()
{
	return total_ham;
}

int Classifier::return_total_spam()
{
	return total_spam;
}
