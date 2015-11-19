//Spam Filter
//Team default string

#include <iostream>
#include <string>

class Word
{
	private
	    string m_name;
	    int number_in_ham();
	    int number_in_spam();
	public
		void increment_ham();
	    void increment_spam();
		int return_ham();
		int return_spam();
		string return_name();
};