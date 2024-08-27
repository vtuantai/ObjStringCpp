#include "../Header/ObjString.h"

/*
The  strcat() function appends the src string to the dest string, overwriting 
the terminating null byte ('\0') at the end of dest, and then adds a terminating 
null byte.
*/

ObjString strcat(ObjString& str_dest, const ObjString& str_src)
{
	char* temp = new char[str_dest.length + str_src.length + 1];
	// Add present object to temp first
    for (int i = 0; i < str_dest.length; ++i)
        temp[i] = str_dest.str[i];
	// Add source object to temp
    for (int i = 0; i < str_src.length; ++i)
        temp[str_dest.length + i] = str_src.str[i];
    temp[str_dest.length + str_src.length] = '\0';

    delete[] str_dest.str;
    str_dest.str = temp; //str_dest.str -> the temp's head area

	return str_dest;
}

/*
	As with strcat(), the resulting string in dest is always null-terminated.

    If src contains n or more bytes, strncat() writes n+1 bytes to dest (n from src
	plus the terminating null byte). Therefore, the size of dest must be at least
    strlen(str_dest)+n+1.
*/

ObjString strncat(ObjString& str_dest, const ObjString& str_src, size_t n)
{
	char *temp = new char[str_dest.length + n + 1];
	// Add present object to temp first
	for (int i = 0; i < str_dest.length; ++i)
		temp[i] = str_dest.str[i];
	
	// Add source object to temp from 0 to size_t n position
	for (size_t i = 0; i < n; ++i)
		temp[str_dest.length + i] = str_src.str[i];
	temp[str_dest.length + n] = '\0';

	delete[] str_dest.str;
	str_dest.str = temp; //str_dest.str -> the temp's heap area
	str_dest.length += n;

	return str_dest;
}
