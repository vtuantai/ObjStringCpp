#include "../Header/ObjString.h"

/*
Convert to string to lowercase to uppercase.
*/

ObjString strupper(ObjString& obj_str)
{
	for (int i = 0; i < obj_str.length; i++)
	{
		// 97 - 32 = 65 = 'A' in ASCII
		obj_str.str[i] = (obj_str.str[i] >= 'a' && obj_str.str[i] <= 'z')
			? obj_str.str[i] - 32 : obj_str.str[i];
	}
	
	return obj_str;
}

/*
Convert to string to uppercase to lowercase.
*/

ObjString strlower(ObjString& obj_str)
{
	for (int i = 0; i < obj_str.length; i++)
	{
		// 65 + 32 = 97 = 'A' in ASCII
		obj_str.str[i] = (obj_str.str[i] >= 'A' && obj_str.str[i] <= 'Z')
			? obj_str.str[i] + 32 : obj_str.str[i];
	}
	
	return obj_str;
}
