#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
	int num;
	char name[20];
	int score;
}Stu;
void input(Stu* p)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("�������%dλͬѧ�ĺ���,����,������\n", i + 1);
		scanf("%d%s%d", &p[i].num, p[i].name, &p[i].score);
	}
}
void output(Stu* p)
{
	int i;
	printf("��λͬѧ����Ϊ��\n");
	for (i = 0; i < 5; i++)
	{
		printf("%8d%8s%8d\n", p[i].num, p[i].name, p[i].score);
	}
}
int main()
{
	Stu p[5];
	input(p);
	output(p);
	return 0;
}
