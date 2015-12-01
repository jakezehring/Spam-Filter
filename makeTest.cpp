#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	std::string pre = "tests/test";
	std::string post = ".txt";
	for(int i = 48; i < 58; i++)
	{
		for(int j = 48; j < 58; j++)
		{
			std::string input = pre + (char)i + (char)j + post;
			std::ofstream out(input.c_str());
			out << endl;
			out.close();
		}
	}
	return 0;
}
