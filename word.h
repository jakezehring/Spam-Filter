//Spam Filter
//Team default string
#ifndef WORD_H
#define WORD_H

#include <iostream>
#include <string>

class Word
{
	private:
	    std::string m_name;
	    int number_in_ham;
	    int number_in_spam;
	public:
		Word(std::string name);
		void increment_ham();
		void increment_spam();
		int return_ham();
		int return_spam();
		std::string return_name();
};

#endif
