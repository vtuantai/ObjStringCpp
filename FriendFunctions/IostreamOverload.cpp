#include "../Header/ObjString.h"

ostream& operator<<(ostream& os, const ObjString& obj_str)
{
    return os << obj_str.str;
}

istream &operator>>(istream &is, ObjString &obj_str)
{
    char buffer[1024]; // 1MB
    is >> buffer;
    obj_str.length = obj_str.size(buffer);
    delete[] obj_str.str;
    obj_str.str = new char[obj_str.length + 1];
    for (int i = 0; i < obj_str.length; i++) {
        obj_str.str[i] = buffer[i];
    }
    obj_str.str[obj_str.length] = '\0';
    return is;
}