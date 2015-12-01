//Spam Filter
//Team default string

#include <vector>
#include <string>
#include <fstream>


class Classifier
{
	private
		vector <word> dictionary;
	    ifstream spam;
		ifstream ham;
		int total_spam;                                    //total number of words in spam
		int total_ham;                                     //total nubmer of words in ham
		void count_each_word();
	public
		classifier(string ham, string spam)
		int lookup_ham(string target)
		int lookup_spam(string target)
		int return_total();
		int return_total_spam();
		int return_total_ham();
};
