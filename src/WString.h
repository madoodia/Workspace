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
	WString(const char* str);
	~WString();
	
	const char* cstr();

	friend std::ostream& operator<<(std::ostream& stream, const WString& other);

private:
	const char* mStr;
};

#endif // WSTRING_H
