#include "cout.h"


void CouterInit(struct Conter* ps)
{
	memset(ps->Student, 0, sizeof(ps->Student));
	ps->size = 0;

}
void CouterAdd(struct Conter* ps)
{
	if (ps->size == STUDENT_NUMBER)
		printf("ͨѶ¼����\n");
	else
	{
		printf("����������\n");
		scanf("%s", ps->Student->name);
		printf("����������\n");
		scanf("%d", &(ps->Student->age));
		printf("�������ַ\n");
		scanf("%s", ps->Student->addr);
		printf("������绰\n");
		scanf("%s", ps->Student->tel);
		printf("�������Ա�\n");
		scanf("%s", ps->Student->sex);

		printf("��ӳɹ�\n");
		ps->size++;
	}

}