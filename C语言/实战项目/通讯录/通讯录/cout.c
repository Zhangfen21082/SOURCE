#include "cout.h"


void CouterInit(struct Conter* ps)
{
	memset(ps->Student, 0, sizeof(ps->Student));
	ps->size = 0;

}
void CouterAdd(struct Conter* ps)
{
	if (ps->size == STUDENT_NUMBER)
		printf("通讯录已满\n");
	else
	{
		printf("请输入姓名\n");
		scanf("%s", ps->Student->name);
		printf("请输入年龄\n");
		scanf("%d", &(ps->Student->age));
		printf("请输入地址\n");
		scanf("%s", ps->Student->addr);
		printf("请输入电话\n");
		scanf("%s", ps->Student->tel);
		printf("请输入性别\n");
		scanf("%s", ps->Student->sex);

		printf("添加成功\n");
		ps->size++;
	}

}