/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#ifndef MSTRING_H
#define MSTRING_H

#include "api.h"

namespace mapi
{

class String
{
public:
  // Default Constructor
  String();

  // Constructor
  explicit String(const char *str);

  // Copy Constructor
  String(const String &str);

  // Destructor
  ~String();

  // Assignment Operator
  String &operator=(const char *other);
  String &operator=(const String &other);

  // Other Operators
  String &operator+=(const char *str);
  String &operator+=(const String &other);

  // Member Functions
  const char *name() const;
  void setName(const char *name);
  int size() const;
  void append(const char *str);

  // non-member friend functions
  friend String operator+(const String &lhs, const char *rhs);
  friend String operator+(const char *lhs, const String &rhs);
  friend String operator+(const String &lhs, const String &rhs);
  friend std::ostream &operator<<(std::ostream &stream, const String &other);
  friend String combine(const char *str1, const char *str2);

private:
  const char *mStr;
};

} // namespace mapi

#endif // MSTRING_H
