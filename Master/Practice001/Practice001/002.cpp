#include <iostream>
#include <string>

std::string gName = "gName";

//�̸��� �ٿ��� ����
namespace MySpace
{
	void A()
	{
		std::string nameA = "A";
		std::cout << gName << std::endl;//����
	}

	void B()
	{
		std::string nameB = "B";
		std::cout << gName << std::endl;//����
	}
}

int main2()
{
	MySpace::A();
	MySpace::B();
	return 0;
}