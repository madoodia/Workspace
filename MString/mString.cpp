/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#include "mString.h"

namespace mapi
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
  mStr = str.name();
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
  return combine(lhs.name(), rhs);
}

String operator+(const char *lhs, const String &rhs)
{
  return combine(lhs, rhs.name());
}

String operator+(const String &lhs, const String &rhs)
{
  return combine(lhs.name(), rhs.name());
}

std::ostream &operator<<(std::ostream &stream, const String &other)
{
  stream << other.name();
  return stream;
}

// Class Member Functions -------
int String::size() const
{
  return strlen(mStr);
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
  mStr = combine(mStr, str).name();
}

String &String::operator=(const char *other)
{
  mStr = other;
  return *this;
}

String &String::operator=(const String &other)
{
  mStr = other.name();
  return *this;
}

String &String::operator+=(const char *str)
{
  *this = combine(mStr, str);
  return *this;
}

String &String::operator+=(const String &other)
{
  *this = combine(mStr, other.name());
  return *this;
}

} // namespace mapi