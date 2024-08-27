#include "../Header/ObjString.h"

// Copy an object string.
ObjString strcpy(ObjString& str_dest, const ObjString& str_src)
{
	delete[] str_dest.str;
	str_dest.length = str_src.length;
	str_dest.str = new char[str_dest.length + 1];
	for (int i = 0; i < str_dest.length; ++i)
		str_dest.str[i] = str_src.str[i];
	str_dest.str[str_dest.length] = '\0';
	
	return str_dest;
}
// Copy an object string from str_src with size_t n elements.
ObjString strncpy(ObjString& str_dest, const ObjString& str_src, size_t n)
{
	delete[] str_dest.str;
	str_dest.length = n;
	str_dest.str = new char[n + 1];
	size_t i;
	for (i = 0; i < n && str_src.str[i] != 0 ; ++i)
		str_dest.str[i] = str_src.str[i];
	for ( ; i < n; ++i) str_dest.str[i] = '\0';

	return str_dest;
}
