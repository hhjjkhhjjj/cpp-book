#include "Change.h"
#include "iostream"

void Change(std::vector<Person>& person)
{
	std::string n, p;
	std::cout << "========================" << std::endl;
	std::cout << "请输入你要修改的用户名字" << std::endl;
	std::cin >> n;
	for (int i = 0;i < person.size();i++)
	{
		if (n == person[i].name)
		{
			std::cout << "查询成功,请输入你要修改电话结果" << std::endl;
			std::cin >> p;
			person[i].phoneNum = p;
			std::cout << "修改成功" << std::endl;
			break;
		}
	}
}