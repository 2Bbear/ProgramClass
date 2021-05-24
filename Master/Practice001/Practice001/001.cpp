//#include <iostream>
//
///*
//[v]변수
//[v]함수
//[v]타입설명
//[v] class
//*/
//
//class Student
//{
//public:
//	int age = 0;
//	char name[10] = "Jhon";
//
//	void AddAge(int _age)
//	{
//		age = age + _age;
//	}
//
//	Student()
//	{
//		printf("student의 생성자\n");
//	}
//	~Student()
//	{
//		printf("student의 소멸자\n");
//	}
//private:
//	int bodykg = 88;
//};
//
//int main()
//{
//	/*
//	[0]		[7]
//	[1]		[8]
//	[0]		[9]
//	[0]		[10]
//	*/
//	int myAge = 10;
//	/*
//	[[7]]	[77]
//	[0]		[78]
//	[0]		[79]
//	[0]		[80]
//	*/
//	int* myAge2 = &myAge;
//	int* pValue;
//
//	printf("%d", *myAge2);
//	return 0;
//}