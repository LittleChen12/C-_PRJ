#include <iostream>

int a = 0;
int& test(void)
{
	a = 100;
	return a;
}

int main()
{
	int& ref = test();
	test() = 10;
	std::cout << ref << std::endl;
	system("pause");
	return 0;
}