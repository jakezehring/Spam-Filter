//Spam Filter
//Team default string
#ifndef CLASSIFIER_H
#define CLASSIFIER_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "word.h"

class Classifier
{
	private:
		std::vector <Word*> dictionary;
	    	std::ifstream sin;
		std::ifstream hin;
		int total_spam;                                    //total number of words in spam
		int total_ham;                                     //total nubmer of words in ham
		void count_each_word();
	public:
		Classifier(std::string ham, std::string spam);
		int lookup_ham(std::string target);
		int lookup_spam(std::string target);
		int return_total();
		int return_total_spam();
		int return_total_ham();
};

#endif
