#include "Scanner.h"
#include<iostream>

Scanner::Scanner(char const* buf)
	: _buf(buf), _iLook(0)
{
	std::cout << "Scanner with \"" << buf << "\"" << endl;
	Accept();
}

void Scanner::EatWhite()
{
	while (isspace(_buf[_iLook]))
	{
		++_iLook;
	}
}

