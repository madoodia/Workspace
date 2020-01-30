/* madoodia@gmail.com
(C) 2019
------------------ */

#ifndef WSTRING_H
#define WSTRING_H

#include <cstdlib>
#include <ostream>


class WString
{
public:
	// Default Constructor
	WString();

	// Constructor
	explicit WString(const char* str);
	
	// Copy Constructor
	WString(const WString& str);
	
	// Destructor
	~WString();
	
	// Assignment Operator
	WString& operator=(const char* other);
	WString& operator=(const WString& other);

	// Other Operators
	WString& operator+=(const char* str);
	WString& operator+=(const WString& str);

	// non-member friend functions
	//friend WString operator+(const WString& lhs, const char* rhs);
	//friend WString operator+(const char* lhs, const WString& rhs);
	//friend WString operator+(const WString& lhs, const WString& rhs);
	friend std::ostream& operator<<(std::ostream& stream, const WString& other);

	// Member Functions
	const char* cstr() const;
	const char* name() const;
	void setName(const char* name);

private:
	const char* mStr;
};

#endif // WSTRING_H
