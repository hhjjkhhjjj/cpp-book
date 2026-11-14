#include "Search.h"
#include "iostream"

void Search(const std::vector<Person>& person)
{
	
	std::string n;
	bool found = false;
	std::cout << "请输入你要查找人的名字" << std::endl;
	std::cin >> n;
	for (int i = 0;i < person.size();i++)
	{
		if (n == person[i].name)
		{
			found = true;
			std::cout << "姓名是：" << person[i].name << std::endl;
			std::cout << "电话是：" << person[i].phoneNum << std::endl;
			break;
		}
	}
	if (found==false)
	{
		std::cout << "没有找到" << std::endl;
	}
}