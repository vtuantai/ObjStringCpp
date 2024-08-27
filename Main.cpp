#include "./Header/ObjString.h"

int main(int argc, char const* argv[])
{
	ObjString str1("Hello Sir and madam"); 
	ObjString str2("/home/user/hello.c");
	#if 0
	std::cout << (str1 == str2) << std::endl;
	std::cout << str2[2] << std::endl;
	std::cout << strlen(str2) << std::endl;
	
	ObjString str = strncpy(str1, str2, 10);

	cout << strcat(str1, str2) << endl;
	strncat(str1, str2, 4);

	char* res = strrchr(str2, '/');
	cout << "res " << res << endl;
	cout << str1 << endl;
	cin >> str1;
	#endif
	str1.display();
	// str2.display();
	//str.display();
	return 0;
}