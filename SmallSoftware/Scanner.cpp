#include "Scanner.h"
#include<iostream>

Scanner::Scanner(char const* buf)
	: _buf(buf), _iLook(0)
{
	std::cout << "Scanner with \"" << buf << "\"" << std::endl;
	Accept();
}

void Scanner::EatWhite()
{
	while (isspace(_buf[_iLook]))
		++_iLook;
}

EToken Scanner::Accept()
{
	EatWhite();
	switch (_buf[_iLook])
	{
	case '+':
		_token = tPlus;
		++_iLook;
		break;
	case '*':
		_token = tMult;
		++_iLook;
		break;
	case '0' : case '1' : case '2' : case '3' : case '4' :
	case '5' : case '6' : case '7' : case '8' : case '9' :
		_token = tNumber;
		_number = atoi(&_buf[_iLook]);
		while(isdigit(_buf[_iLook]))
			++_iLook;
		break;
	case '\0':
		_token = tEnd;
		break;
	default:
		_token = tError;
		break;
	}
	return Token();
}