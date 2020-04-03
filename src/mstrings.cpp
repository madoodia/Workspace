/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#include "mstrings.h"

namespace wksp
{

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

// Friend Functions -------
String combine(const char *str1, const char *str2)
{
  String result;

  char buffer[strlen(str1) + strlen(str2)];
  strncpy(buffer, str1, sizeof(buffer));
  strncat(buffer, str2, sizeof(buffer));

  result.setName(buffer);
  return result;
}

String operator+(const String &lhs, const char *rhs)
{
  return combine(lhs.cstr(), rhs);
}

String operator+(const char *lhs, const String &rhs)
{
  return combine(lhs, rhs.cstr());
}

String operator+(const String &lhs, const String &rhs)
{
  return combine(lhs.cstr(), rhs.cstr());
}

std::ostream &operator<<(std::ostream &stream, const String &other)
{
  stream << other.cstr();
  return stream;
}

// Class Member Functions -------
int String::size() const
{
  return strlen(mStr);
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

void String::append(const char *str)
{
  mStr = combine(mStr, str).cstr();
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

String &String::operator+=(const char *str)
{
  *this = combine(mStr, str);
  return *this;
}

String &String::operator+=(const String &other)
{
  *this = combine(mStr, other.cstr());
  return *this;
}

} // namespace wksp