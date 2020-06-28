#include "Parser.h"
#include<iostream>
Parser::Parser(Scanner& scanner, SymbolTable& symTab)
	: _scanner(scanner), _symTab(symTab)
{
	std::cout << "Parser created \n";
}

Parser::~Parser()
{
	std::cout << "Destroying parser \n";
}

Status Parser::Eval()
{
	std::cout << "Parser eval \n";
	return stQuit;
}