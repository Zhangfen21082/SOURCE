#include "cout.h"


void menu()
{
	printf("*******************************************\n");
	printf("**********2017Ӧ�û�ѧѧ������ϵͳ***********\n");
	printf("******1.����                    2.ɾ��******\n");
	printf("******3.����                    4.�޸�******\n");
	printf("******5.��ӡ                    6.����******\n");
	printf("                   0.�˳�                   \n");
	printf("********************************************\n");



}


int main()
{
	int input = 0;
	struct Conter con;//����һ��ͨѶ¼
	CouterInit(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��:\n");
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
			printf("�˳�ϵͳ\n");
			break;
		default:
			break;
		}
	} while (input);


}