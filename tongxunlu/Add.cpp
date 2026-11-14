#include "iostream"
#include "Add.h"

void Add(std::vector<Person>& person)
{
	{
		Person p;

		std::cout << "请输入你要添加的姓名" << std::endl;
		std::cin >> p.name;

		std::cout << "请输入你要添加的电话" << std::endl;
		std::cin >> p.phoneNum;

		person.push_back(p);//存储
		std::cout << "保存成功" << std::endl;

	}
}

