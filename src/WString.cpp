/* madoodia@gmail.com
(C) 2019
------------------ */


#include "WString.h"


WString::WString() : mStr("")
{
	//printf("Default Constructor\n");
}

WString::WString(const char *str) : mStr(str)
{
	//printf("Second Constructor\n");
}

WString::WString(const WString& str)
{
	//printf("Copy Constructor\n");
	mStr = str.cstr();
}

WString::~WString()
{
}

const char* WString::cstr() const
{
	return mStr;
}

const char* WString::name() const
{
	return mStr;
}

void WString::setName(const char* name)
{
	mStr = name;
}

WString& WString::operator=(const char* other)
{
	mStr = other;
	return *this;
}

WString& WString::operator=(const WString& other)
{
	mStr = other.cstr();
	return *this;
}

//WString& WString::operator+=(const char* str)
//{
//	WString result;
//	result = mStr + WString(str);
//	return result;
//}

//WString& WString::operator+=(const WString& str)
//{
//	WString result;
//	result = mStr + str;
//	return result;
//}

//WString operator+(const WString& lhs, const char* rhs)
//{
//	WString str;
//	str = lhs + rhs;
//	return str;
//}

//WString operator+(const char* lhs, const WString& rhs)
//{
//	WString str;
//	str = lhs + rhs;
//	return str;
//}

//WString operator+(const WString& lhs, const WString& rhs)
//{
//	WString str;
//	str = lhs + rhs;
//	return str;
//}


std::ostream& operator<<(std::ostream& stream, const WString& other)
{
	stream << other.mStr;
	return stream;
}
