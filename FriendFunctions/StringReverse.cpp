#include "../Header/ObjString.h"

/*
Reversing a string means the last character should be the first character 
the second last should be the second and so on.
*/

ObjString strrev(ObjString& obj_str)
{
	for (int i = 0; i < obj_str.length / 2; ++i)
		swap(obj_str.str[i], obj_str.str[obj_str.length - i - 1]);

	return obj_str;
}