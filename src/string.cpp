/* madoodia@gmail.com
(C) 2019
------------------ */

#include "string.h"

using namespace workspace;

String::String() : mStr("")
{
	//printf("Default Constructor\n");
}

String::String(const char *str) : mStr(str)
{
	//printf("Second Constructor\n");
}

String::String(const String &str)
{
	//printf("Copy Constructor\n");
	mStr = str.cstr();
}

String::~String()
{
}

const char *String::cstr() const
{
	return mStr;
}

const char *String::name() const
{
	return mStr;
}

void String::setName(const char *name)
{
	mStr = name;
}

String &String::operator=(const char *other)
{
	mStr = other;
	return *this;
}

String &String::operator=(const String &other)
{
	mStr = other.cstr();
	return *this;
}

//String& String::operator+=(const char* str)
//{
//	String result;
//	result = mStr + String(str);
//	return result;
//}

//String& String::operator+=(const String& str)
//{
//	String result;
//	result = mStr + str;
//	return result;
//}

//String operator+(const String& lhs, const char* rhs)
//{
//	String str;
//	str = lhs + rhs;
//	return str;
//}

//String operator+(const char* lhs, const String& rhs)
//{
//	String str;
//	str = lhs + rhs;
//	return str;
//}

//String operator+(const String& lhs, const String& rhs)
//{
//	String str;
//	str = lhs + rhs;
//	return str;
//}

std::ostream &operator<<(std::ostream &stream, const String &other)
{
	stream << other.mStr;
	return stream;
}
