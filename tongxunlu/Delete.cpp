#include "Delete.h"


void Delete(std::vector<Person>& person)
{
	std::string n;
	std::cout << "请输入你要删除人的姓名" << std::endl;
	std::cin >> n;
	for (int i = 0;i < person.size();i++)
	{
		if (n == person[i].name)
		{
			person[i].name.erase();
			person[i].phoneNum.erase();
			break;
		}
	}
}