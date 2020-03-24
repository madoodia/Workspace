/* madoodia@gmail.com
(C) 2019
------------------ */

#ifndef WSTRING_H
#define WSTRING_H

#include <cstdlib>
#include <ostream>
#include "core.h"

namespace wksp
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
	String &operator+=(const String &str);

	// non-member friend functions
	//friend String operator+(const String& lhs, const char* rhs);
	//friend String operator+(const char* lhs, const String& rhs);
	//friend String operator+(const String& lhs, const String& rhs);
	friend std::ostream &operator<<(std::ostream &stream, const String &other);

	// Member Functions
	const char *cstr() const;
	const char *name() const;
	void setName(const char *name);

private:
	const char *mStr;
};

} // namespace wksp

#endif // WSTRING_H
