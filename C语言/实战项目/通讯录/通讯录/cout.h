#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STUDENT_NUMBER 1000
#define NAME_NUMBER 20
#define ADDR_NUMBER 20
#define TEL_NUMBER 11
#define SEX_NUMBER 5

struct StudentInfo
{
	char name[NAME_NUMBER];
	int age;
	char addr[ADDR_NUMBER];
	char tel[TEL_NUMBER];
	char sex[SEX_NUMBER];

};
struct Conter
{
	struct StudentInfo Student[STUDENT_NUMBER];
	int size;//Ԫ�صĸ���
};

void CouterInit(struct Conter* ps);//��ʼ��ͨѶ¼
void CouterAdd(struct Conter* ps);//����ѧ��