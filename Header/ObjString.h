#pragma once
#include <iostream>

using namespace std;

class ObjString
{
private:
	char* str;
	int length;
	int size(const char* str) const;
public:
	// Defined in ObjString.cpp
	ObjString();
	// Parameters constructor
	ObjString(const char* str);
	// Copy constructor
	ObjString(const ObjString& src_str);
	// Defined by CustomOperator.cpp
	ObjString& operator=(const ObjString& src_str);
	ObjString operator+(const ObjString& src_str);
	char& operator[](int index);
	bool operator>(const ObjString& oth_str);
	bool operator>=(const ObjString& oth_str);
	bool operator<(const ObjString& oth_str);
	bool operator<=(const ObjString& oth_str);
	bool operator!=(const ObjString& oth_str);
	bool operator==(const ObjString& oth_str);
	void display();
	~ObjString();

	// Defined by StringCopy.cpp
	friend ObjString strcpy(ObjString& str_dest, const ObjString& str_src);
	friend ObjString strncpy(ObjString& str_dest, const ObjString& str_src, size_t n);

	// Defined by StringCompare.cpp
	friend int strcmp(const ObjString& str1, const ObjString& str2);
	friend int strncmp(const ObjString& str1, const ObjString& str2, size_t n);

	// Defined by StringConcatenate.cpp
	friend ObjString strcat(ObjString& str_dest, const ObjString& str_src);
	friend ObjString strncat(ObjString& str_dest, const ObjString& str_src, size_t n);

	// Defined by StringRevert.cpp
	friend ObjString strrev(ObjString& obj_str);

	// Defined by StringConvert.cpp
	friend ObjString strupper(ObjString& obj_str);
	friend ObjString strlower(ObjString& obj_str);

	// Defined by StringLocate.cpp
	friend char* strchr(const ObjString& obj_str, int c);
	friend char* strrchr(const ObjString& obj_str, int c);

	// Defined by StringSubstring.cpp
	friend char* strstr(const ObjString& obj_str, const char* str);

	// Defined by StringCount.cpp
	friend int strlen(const ObjString& obj_str);

	// Overload << and >> operators (friend functions)
	friend ostream& operator<<(ostream& os, const ObjString& obj_str);
	friend istream& operator>>(istream& is, ObjString& obj_str);
};
