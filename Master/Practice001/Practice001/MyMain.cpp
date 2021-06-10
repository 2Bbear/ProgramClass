#include <iostream>





int main( )
{
	char chArr[10] = "123456789";
	int* sum = (int*)chArr;
	std::cout << sum << std::endl;
	std::cout<< *((char*)(sum + 1)) << std::endl;

	return 0;
}