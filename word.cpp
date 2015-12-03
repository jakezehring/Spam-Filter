//Spam Filter
//Team default string

#include "word.h"
using namespace std;

Word::Word(string name)
{
	m_name = name;
	number_in_ham = number_in_spam = 0;
}

void Word::increment_ham()
{
	number_in_ham++;
}

void Word::increment_spam()
{
	number_in_spam++;
}

int Word::return_ham()
{
	return number_in_ham;
}

int Word::return_spam()
{
	return number_in_spam;
}

string Word::return_name()
{
	return m_name;
}
