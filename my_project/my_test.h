#pragma once

#include <iostream>
#include <string>

class my_test
{
public:
	my_test() = default;
	my_test(const my_test &it);
	~my_test() = default;
	void setName(std::string &name);
	void setAge(int age);
	std::string getName() const;
	int getAge() const;

private:
	std::string name;
	int age;
};

