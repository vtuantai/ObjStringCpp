#include "../Header/ObjString.h"

ObjString& ObjString::operator=(const ObjString& src_str)
{
	if (this == &src_str) return *this;

	/* 
	Make empty present object befor set new value
	by source object 
	*/
	delete[] str;
	length = src_str.length;
	str = new char[length + 1];
	for (int i = 0; i < length; ++i)
		str[i] = src_str.str[i];
	str[length] = '\0';

	return *this;
}

ObjString ObjString::operator+(const ObjString& src_str)
{
	ObjString temp;
	temp.length = length + src_str.length;
	temp.str = new char[temp.length + 1];
	// Add present object to temp first
	for (int i = 0; i < length; ++i)
		temp.str[i] = str[i];
	// Add source object to temp
	for (int i = 0; i < src_str.length; ++i)
		temp.str[length + i] = src_str.str[i];
	temp.str[temp.length] = '\0';

	return temp;
}

char& ObjString::operator[](int index)
{
	return str[index];
}

// The comparison is done using unsigned characters.
bool ObjString::operator>(const ObjString& oth_str)
{
	for (int i = 0; i < length && i < oth_str.length; ++i)
	{
		if (str[i] > oth_str.str[i]) return true;
		if (str[i] < oth_str.str[i]) return false;
	}

	return length > oth_str.length;
}

bool ObjString::operator>=(const ObjString& oth_str)
{
	return !(*this < oth_str);
}

bool ObjString::operator<(const ObjString& oth_str)
{
	return *this > oth_str;
}

bool ObjString::operator<=(const ObjString& oth_str)
{
	return !(*this > oth_str);
}

bool ObjString::operator!=(const ObjString& oth_str)
{
	return !(*this == oth_str);
}

bool ObjString::operator==(const ObjString& oth_str)
{
	if (length != oth_str.length) return false;
	for (int i = 0; i < length; ++i)
		if (str[i] != oth_str.str[i]) return false;
		
	return true;
}
