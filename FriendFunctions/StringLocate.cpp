#include "../Header/ObjString.h"

/*
The strchr() function returns a pointer to the first occurrence of the character
c in the string s.
*/

char* strchr(const ObjString& obj_str, int c)
{	
	for (int i = 0; i < obj_str.length; ++i)
		if (obj_str.str[i] == (char)c) return &obj_str.str[i];
		
	return nullptr;
}

/*
The strrchr() function returns a pointer to the last occurrence of the character 
c in the string s.
*/

char* strrchr(const ObjString& obj_str, int c)
{
	for (int i = obj_str.length - 1; i >= 0; --i)
		if (obj_str.str[i] == (char)c) return &obj_str.str[i];
	
	return nullptr;
}
