#include "../Header/ObjString.h"

/*
The strstr() function finds the first occurrence of the substring needle in the
string haystack.The terminating null bytes ('\0') are not compared.

Result value: Pointer to the first character of the found substring in str, or 
a null pointer if such substring is not found. If substr points to an empty 
string, str is returned

Reference: https://en.cppreference.com/w/c/string/byte/strstr
*/

char* strstr(const ObjString& obj_str, const char* sub_str)
{
	int substr_len = obj_str.size(sub_str);
	if (substr_len == 0) return obj_str.str;

	for (int i = 0; i <= obj_str.length - substr_len; ++i)
	{
		int j = 0;
		while (j < substr_len && obj_str.str[i + j] == sub_str[j])
			++j;

		if (j == substr_len) return &obj_str.str[i];
	}

	return nullptr;
}