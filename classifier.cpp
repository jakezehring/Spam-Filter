//Spam Filter
//Team default string

#include "classifier.h"

using namespace std;

//Constructor, needs to open both files, needs to init dicitionary with each unique word, needs to count the number of words in the spam/ham files
Classifier::classifier(string ham, string spam)
{
	total_spam = total_ham = 0;
	count_each_word();
	count_totals();
}

//iterate trough dictionary, counting the number of times each word appears in spam/ham
void Classifier::count_each_word();
{

}

//finds the number of times target appears in ham
int Classifier::lookup_ham(string target)
{

}

//finds the number of times target appears in spam
int Classifier::lookup_spam(string target)
{

}

int return_total()
{
	return dictionary.size()
}

int return_total_ham()
{
	return total_ham;
}

int return_total_spam()
{
	return total_spam;
}
