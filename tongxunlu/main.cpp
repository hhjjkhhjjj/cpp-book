#include "iostream"
#include "Add.h"
#include "Show.h"
#include "Search.h"
#include "Change.h"
#include "Delete.h"
#include "vector"

int main()
{
	std::vector<Person> person;

	int num = NULL;//记录功能的数字
	std::cout << "请选择你想要的功能" << std::endl;
	std::cout << "==================" << std::endl;
	std::cout << "1.添加" << std::endl;
	std::cout << "2.显示全部已保存信息" << std::endl;
	std::cout << "3.按姓名搜索" << std::endl;
	std::cout << "4.修改" << std::endl;
	std::cout << "5.删除" << std::endl;
	std::cout << "0.退出" << std::endl;
	std::cin >> num;
	while (num!=0)
	{
		switch (num)
		{
		case 1:
			std::cout << "添加" << std::endl;
			Add(person);
			break;
		case 2:
			std::cout << "数据" << std::endl;
			Show(person);
			break;
		case 3:
			std::cout << "搜索" << std::endl;
			Search(person);
			break;
		case 4:
			std::cout << "修改" << std::endl;
			Change(person);
			break;
		case 5:
			std::cout << "删除" << std::endl;
			Delete(person);
			break;
		case 0:
			return 0;
		default:
			std::cout << "没有此选项" << std::endl;
			break;
		}
		std::cout << std::endl;
		std::cout << "请选择你想要的功能" << std::endl;
		std::cout << "==================" << std::endl;
		std::cout << "1.添加" << std::endl;
		std::cout << "2.显示全部已保存信息" << std::endl;
		std::cout << "3.按姓名搜索" << std::endl;
		std::cout << "4.修改" << std::endl;
		std::cout << "5.删除" << std::endl;
		std::cout << "0.退出" << std::endl;
		std::cin >> num;
	}
	std::cin.get();
}
