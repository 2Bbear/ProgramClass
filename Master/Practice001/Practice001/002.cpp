#include <iostream>
#include <string>

std::string gName = "gName";

//이름이 붙여진 지역
namespace MySpace
{
	void A()
	{
		std::string nameA = "A";
		std::cout << gName << std::endl;//고정
	}

	void B()
	{
		std::string nameB = "B";
		std::cout << gName << std::endl;//고정
	}
}

int main2()
{
	MySpace::A();
	MySpace::B();
	return 0;
}