#include"Parser.h"
#include"Scanner.h"
#include"SymbolTable.h"
#include<iostream>

const int maxBuf = 100;
int main()
{
	char buf[maxBuf];
	Status status;
	SymbolTable symTab;
	do
	{
		std::cout << ">";
		std::cin.getline(buf, maxBuf);
		Scanner scanner(buf);
		Parser parser(scanner, symTab);
		status = parser.Eval();
	} while (status != stQuit);
}