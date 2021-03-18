#include "cout.h"


void menu()
{
	printf("*******************************************\n");
	printf("**********2017应用化学学生管理系统***********\n");
	printf("******1.增加                    2.删除******\n");
	printf("******3.查找                    4.修改******\n");
	printf("******5.打印                    6.排序******\n");
	printf("                   0.退出                   \n");
	printf("********************************************\n");



}


int main()
{
	int input = 0;
	struct Conter con;//建造一个通讯录
	CouterInit(&con);//初始化通讯录
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			printf("退出系统\n");
			break;
		default:
			break;
		}
	} while (input);


}