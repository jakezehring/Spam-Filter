//Spam Filter
//Team default string

#include <iostream>
#include <string>

class Word
{
	private
	    std::string m_name;
	    int number_in_ham();
	    int number_in_spam();
	public
		void increment_ham();
	    void increment_spam();
		int return_ham();
		int return_spam();
		std::string return_name();
};
