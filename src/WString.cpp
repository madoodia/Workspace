/* madoodia@gmail.com
(C) 2019
------------------ */


#include "WString.h"


WString::WString() : mStr("Hello")
{
}

WString::WString(const char *str) : mStr(str)
{
}

WString::~WString()
{
}

const char* WString::cstr()
{
	return mStr;
}

std::ostream& operator<<(std::ostream& stream, const WString& other)
{
	stream << other.mStr;
	return stream;
}
