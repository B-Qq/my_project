#include "my_test.h"

my_test::my_test(const my_test &it)
{
	
}

void my_test::setName(std::string & name)
{
	this->name = name;
}

void my_test::setAge(int age)
{
	this->age = age;
}

std::string my_test::getName() const
{
	return name;
}

int my_test::getAge() const
{
	return age;
}

