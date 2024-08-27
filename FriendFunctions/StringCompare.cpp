#include "../Header/ObjString.h"

/*
strcmp() returns an integer indicating the result of the comparison, as follows:
    - 0, if the s1 and s2 are equal;
    - A negative value if s1 is less than s2;
    - A positive value if s1 is greater than s2.
*/

int strcmp(const ObjString& str1, const ObjString& str2)
{
	int min_len = str1.length < str2.length ? str1.length : str2.length;
	for (int i = 0; i < min_len; ++i)
	{
		if (str1.str[i] != str2.str[i]) return str1.str[i] - str2.str[i];
	}
	
	return str1.length - str2.length;
}
/*

strncmp() return an integer indicating the result of comparison 
at most size_t n characters. as follows:
	- 0, if the s1 and s2 are equal, or if n is zero;
	- A negative value if s1 is less than s2;
    - A positive value if s1 is greater than s2;
	- Characters following the null character are not compared.
*/

int strncmp(const ObjString& str1, const ObjString& str2, size_t n)
{

	for (size_t i = 0; i < n && i < str1.length && i < str2.length; ++i)
	{
		if (str1.str[i] != str2.str[i]) return str1.str[i] - str2.str[i];
	}
	if (n <= str1.length && n <= str2.length) return 0;

	return str1.length - str2.length;
}
