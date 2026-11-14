#include "iostream"
#include "Show.h"

void Show(const std::vector<Person>& person)
{
	if (person.empty())
	{
		std::cout << "没有数据" << std::endl;
		return;
	}
	for (int i = 0;i < person.size();i++)
	{
		std::cout << "姓名:" << person[i].name << std::endl;
		std::cout << "电话:" << person[i].phoneNum << std::endl;
		std::cout << "====================" << std::endl;
	}
}