#pragma once
#include"Scanner.h"
#include"SymbolTable.h"
enum Status
{
	stOK,
	stQuit,
	stError
};

class Parser
{
public:
	Parser(Scanner& scanner, SymbolTable& symTab);
	~Parser();
	Status Eval();
private:
	Scanner& _scanner;
	SymbolTable& _symTab;
};

