/*
Aids Text Generator
Changes regular text being input: ie. "Hello There World" and converts it to "hElLo tHeRe wOrLd"

Date: 2/21/2019
@Author: Sean Chen
*/
#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <cctype>
#include <string.h>
using namespace std;

int main()
{
	char charArray[500];
	int textLen;

	cout << "Please enter the text you would like to convert to AiDzzz..." << endl;

	try
	{
		cin.getline(charArray, 500);
		textLen = strlen(charArray);
		if (textLen >= 500)
		{
			throw runtime_error("Too Many Character Values Exception");
		}
	}
	catch (const exception& ex)
	{
		cerr << ex.what() << "\n Fatal Error" << endl;
		exit(0);
	}

	for (int i = 0; i < textLen; i++)
	{
		char temp = charArray[i];

		if ((i % 2) == 0)
		{
			charArray[i] = toupper(temp);
		}
	}

	cout << "\nText after Fuckup" << endl;
	cout << charArray << endl;

	//system("PAUSE");

	return EXIT_SUCCESS;
}
