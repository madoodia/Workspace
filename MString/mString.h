/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#ifndef MSTRING_H
#define MSTRING_H

#include <string.h>

#include "api.h"

namespace mapi
{

class MString
{
public:
  // Default Constructor
  MString();

  // Constructor
  explicit MString(const char *str);
  explicit MString(const std::string &str);

  // Copy Constructor
  MString(const MString &str);

  // Destructor
  ~MString();

  // Assignment Operator
  MString &operator=(const char *other);
  MString &operator=(const MString &other);

  // Other Operators
  MString &operator+=(const char *str);
  MString &operator+=(const MString &other);

  // Member Functions
  const char *name() const;
  void setName(const char *name);
  int size() const;
  void append(const char *str);

  // non-member friend functions
  friend MString operator+(const MString &lhs, const char *rhs);
  friend MString operator+(const char *lhs, const MString &rhs);
  friend MString operator+(const MString &lhs, const MString &rhs);
  friend std::ostream &operator<<(std::ostream &stream, const MString &other);
  friend MString combine(const char *str1, const char *str2);

private:
  const char *mStr;
};

} // namespace mapi

#endif // MSTRING_H
