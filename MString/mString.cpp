/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#include "mString.h"

namespace mapi
{

MString::MString() : mStr("")
{
  //printf("Default Constructor\n");
}

MString::MString(const char *str) : mStr(str)
{
  //printf("Second Constructor\n");
}

MString::MString(const std::string &str) : mStr(str.c_str())
{
}

MString::MString(const MString &str)
{
  //printf("Copy Constructor\n");
  mStr = str.name();
}

MString::~MString()
{
}

// Friend Functions -------
MString combine(const char *str1, const char *str2)
{
  MString result;

  char buffer[strlen(str1) + strlen(str2)];
  strncpy(buffer, str1, sizeof(buffer));
  strncat(buffer, str2, sizeof(buffer));

  result.setName(buffer);
  return result;
}

MString operator+(const MString &lhs, const char *rhs)
{
  return combine(lhs.name(), rhs);
}

MString operator+(const char *lhs, const MString &rhs)
{
  return combine(lhs, rhs.name());
}

MString operator+(const MString &lhs, const MString &rhs)
{
  return combine(lhs.name(), rhs.name());
}

std::ostream &operator<<(std::ostream &stream, const MString &other)
{
  stream << other.name();
  return stream;
}

// Class Member Functions -------
int MString::size() const
{
  return strlen(mStr);
}

const char *MString::name() const
{
  return mStr;
}

void MString::setName(const char *name)
{
  mStr = name;
}

void MString::append(const char *str)
{
  mStr = combine(mStr, str).name();
}

MString &MString::operator=(const char *other)
{
  mStr = other;
  return *this;
}

MString &MString::operator=(const MString &other)
{
  mStr = other.name();
  return *this;
}

MString &MString::operator+=(const char *str)
{
  *this = combine(mStr, str);
  return *this;
}

MString &MString::operator+=(const MString &other)
{
  *this = combine(mStr, other.name());
  return *this;
}

} // namespace mapi