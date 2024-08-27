#include "../Header/ObjString.h"

// Private function
int ObjString::size(const char* str) const
{
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    return len;
}


ObjString::ObjString() : str(nullptr), length(0)
{
}


// Parameters constructor
ObjString::ObjString(const char* str)
{
	length = size(str);
    this->str = new char[length + 1];
    for (int i = 0; i < length; ++i) this->str[i] = str[i];
    this->str[length] = '\0';
}

// Copy constructor
ObjString::ObjString(const ObjString& src_str)
{
    length = src_str.length;
    str = new char[length + 1];
    for (int i = 0; i < length; ++i) 
        str[i] = src_str.str[i];
    str[length] = '\0';
}

// Display
void ObjString::display()
{
    cout << "str -> " << str << " | "
        << " length -> " << length << endl;
}

ObjString::~ObjString()
{
    delete[] str;
}
