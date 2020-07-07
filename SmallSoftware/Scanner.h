#pragma once
#include <cassert>
enum EToken
{
	tEnd,
	tError,
	tNumber,
	tPlus,
	tMult
};
class Scanner
{
public:
	Scanner(char const* buf);
	EToken Token() const { return _token; }
	EToken Accept();
	double Number()
	{
		assert(_token == tNumber);
		return _number;
	}
private:
	void EatWhite();

	char const* const _buf;
	int	_iLook;
	EToken	_token;
	double	_number;
};

