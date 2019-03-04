#include "my_test.h"

my_test::my_test()
{
	std::cout << "构造函数" << std::endl;
}

my_test::my_test(const my_test &it)
{
	
}

my_test::~my_test()
{
	std::cout << "析构函数" << std::endl;
}
