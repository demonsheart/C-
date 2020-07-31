#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include <windows.h>
#include <mmsystem.h>//��������ͷ�ļ�
#pragma comment(lib,"Winmm.lib")
#define   MAX_LEN  10                	   /* �ַ�����󳤶� */
#define   STU_NUM 30                       /* ����ѧ������ */
#define   COURSE_NUM 6                     /* ���Ŀ��Կ�Ŀ�� */
typedef struct student
{
	long num;						/* ÿ��ѧ����ѧ�� */
	char name[MAX_LEN];            	/* ÿ��ѧ�������� */
	float score[COURSE_NUM];		/* ÿ��ѧ��COURSE_NUM�Ź��εĳɼ� */
	float sum;                   	/* ÿ��ѧ�����ܳɼ� */
	float aver;               		/* ÿ��ѧ����ƽ���ɼ� */
}STU;
int   Menu(void);
void  ReadScore(STU stu[], int n, int m);
void  AverSumofEveryStudent(STU stu[], int n, int m);
void  AverSumofEveryCourse(STU stu[], int n, int m);
void  SortbyScore(STU stu[],int n,int m,int (*compare)(float a,float b));
int   Ascending(float a, float b);
void  SwapFloat(float *x, float *y);
void  SwapLong(long *x, long *y);
void  SwapChar(char x[], char y[]);
void  AsSortbyNum(STU stu[], int n, int m);
void  SortbyName(STU stu[], int n, int m);
void  SearchbyNum(STU stu[], int n, int m);
void  SearchbyName(STU stu[], int n, int m);
void  PrintScore(STU stu[], int n, int m);
int main()
{
	int  ch;
	int   n = 0, m = 0;  /* ѧ������Ϊn���γ�����Ϊm */
	PlaySound("sounds\\��������.wav",NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
    system("pause");
	STU   stu[STU_NUM];
	printf("����ѧ������(n<=30):\n", STU_NUM);
    scanf("%d", &n);
	while (1)
	{
		ch = Menu();      /* ��ʾ�˵�������ȡ�û����� */
		switch (ch)
		{
			case 1:
				printf("Input course number(m<=%d):\n",COURSE_NUM);
	            scanf("%d", &m);
				printf("Input student's ID, name and score:\n");
                ReadScore(stu, n, m);
				break;
			case 2: 
                AverSumofEveryCourse(stu, n, m);
				break;
            case 3: 
                AverSumofEveryStudent(stu, n, m);
				break;
			case 4: 
                SortbyScore(stu, n, m, Ascending);
				printf("Sort in ascending order by score:\n");
				PrintScore(stu, n, m);
				break;
			case 5: 
                AsSortbyNum(stu, n, m);
				printf("Sort in ascending order by number:\n");
				PrintScore(stu, n, m);
				break;
			
			case 6: 
                SortbyName(stu, n, m);
				printf("Sort in dictionary order by name:\n");
				PrintScore(stu, n, m);
				break;
			case 7: 
                 SearchbyNum(stu, n, m);
				break;
			case 8: 
               SearchbyName(stu, n, m);
				break;
			case 9: 
                PrintScore(stu, n, m);
				break;
			case 0:
                printf("End of program!");
			    exit(0);
			default: printf("Input error!\n");
		}

	}

	return 0;

}



/*  �������ܣ���ʾ�˵�������û����������ѡ�� */

int Menu(void)
{
	int ret;
	printf("ѧ���ɼ�����ϵͳ\n"
		"1.����\n"
		"2.����ÿ�ſγ̵��ֺܷ�ƽ����\n"
		"3.����ÿ��ѧ�����ֺܷ�ƽ����\n"
		"4.��ÿ��ѧ�����ܷ��ɵ͵����ų����α�\n"
		"5.��ѧ����С�����ų��ɼ���\n"
		"6.���������ֵ�˳���ų��ɼ���\n"
		"7.��ѧ�Ų�ѯѧ���������俼�Գɼ�\n"
		"8.��������ѯѧ���������俼�Գɼ�\n"
		"9.���ÿ��ѧ����ѧ�š����������ƿ��Գɼ����Լ�ÿ�ſγ̵��ֺܷ�ƽ����\n"
		"0.Exit\n"
		"���������ѡ��:\n");
	scanf("%d", &ret);
	return ret;
}



/* �������ܣ�����n��ѧ����m�ſγɼ� */

void ReadScore(STU stu[], int n, int m)

{
	int i, r;
	for(i=0;i<n;i++)
	{
		scanf("%ld%s", &stu[i].num, stu[i].name);
		for(r=0;r<m;r++)
		{
			scanf("%f", &stu[i].score[r]);
		}
	}
	return ;
}



/* �������ܣ�����ÿ��ѧ�����ſγ̵��ֺܷ�ƽ���� */

void AverSumofEveryStudent(STU stu[], int n, int m)

{
	int i, r;
	for(i=0;i<n;i++)
	{
		stu[i].sum = 0;
		for(r=0;r<m;r++)
		{
			stu[i].sum = stu[i].sum + stu[i].score[r];
		}
		stu[i].aver = stu[i].sum / m;
		printf("ѧ�� %d: �ܷ�=%.0f,ƽ����=%.0f\n", i+1, stu[i].sum, stu[i].aver);
	}
	return ;
}



/* �������ܣ�����ÿ�ſγ̵��ֺܷ�ƽ���� */

void AverSumofEveryCourse(STU stu[], int n, int m)

{
	int i, r;
	float sum;
	for(i=0;i<m;i++)
	{
		sum = 0;
		for(r=0;r<n;r++)
		{
			sum = sum + stu[r].score[i];
		}
		printf("�γ� %d:s�ܷ�=%.0f,ƽ����=%.0f\n", i+1, sum, sum/n);
	}
	return ;
}

/* �������ܣ���ѡ�񷨽�����sum��Ԫ��ֵ���� */

void SortbyScore(STU stu[], int n, int m, int (*compare)(float a, float b))

{
	int i, r, t;
	for(i=0;i<n;i++)
	{
		for(r=0;r<n-1;r++)
		{
			if((*compare)(stu[r].sum, stu[r+1].sum))
			{
				SwapLong(&stu[r].num, &stu[r+1].num);
				SwapChar(stu[r].name, stu[r+1].name);
				for(t=0;t<m;t++)
				{
					SwapFloat(&stu[r].score[t], &stu[r+1].score[t]);
				}
				SwapFloat(&stu[r].sum, &stu[r+1].sum);
				SwapFloat(&stu[r].aver, &stu[r+1].aver);
			}
		}
	}
	return ;
}



/* ʹ���ݰ��������� */

int Ascending(float a, float b)

{
	if(a > b)
		return 1;
	return 0;
}



/* �������������ȸ��������� */

void  SwapFloat(float *x, float *y)

{
	float term;
	term = *x;
	*x = *y;
	*y = term;
	return ;
}



/* ������������������ */

void  SwapLong(long *x, long *y)

{
	long term;
	term = *x;
	*x = *y;
	*y = term;
	return ;
}



/* ���������ַ��� */

void  SwapChar(char x[], char y[])

{
	char term[MAX_LEN];
	strcpy(term, x);
	strcpy(x, y);
	strcpy(y, term);
	return ;
}



/* �������ܣ���ѡ�񷨽�����num��Ԫ��ֵ���ӵ͵������� */

void AsSortbyNum(STU stu[], int n, int m)

{
	int i, r, t;
	for(i=0;i<n;i++)
	{
		for(r=0;r<n-1;r++)
		{
			if(stu[r].num > stu[r+1].num)
			{
				SwapLong(&stu[r].num, &stu[r+1].num);
				SwapChar(stu[r].name, stu[r+1].name);
				for(t=0;t<m;t++)
				{
					SwapFloat(&stu[r].score[t], &stu[r+1].score[t]);
				}
				SwapFloat(&stu[r].sum, &stu[r+1].sum);
				SwapFloat(&stu[r].aver, &stu[r+1].aver);
			}
		}
	}
	return ;
}



/* �������ܣ�������ʵ���ַ������ֵ�˳������ */

void SortbyName(STU stu[], int n, int m)

{
	int i, r, t;
	for(i=0;i<n;i++)
	{
		for(r=0;r<n-1;r++)
		{
			if(strcmp(stu[r].name, stu[r+1].name) > 0)
			{
				SwapLong(&stu[r].num, &stu[r+1].num);
				SwapChar(stu[r].name, stu[r+1].name);
				for(t=0;t<m;t++)
				{
					SwapFloat(&stu[r].score[t], &stu[r+1].score[t]);
				}
				SwapFloat(&stu[r].sum, &stu[r+1].sum);
				SwapFloat(&stu[r].aver, &stu[r+1].aver);
			}
		}
	}
	return ;
}



/* �������ܣ���ѧ�Ų���ѧ���ɼ�����ʾ���ҽ�� */

void SearchbyNum(STU stu[], int n, int m)

{
	long term;
	int i, r;
	printf("����������Ҫ��ѯ��ѧ��:\n");
	scanf("%ld", &term);
	for(i=0;i<n;i++)
	{
		if(term%1000 == stu[i].num%1000)
		{
			printf("%ld\t%s\t", stu[i].num, stu[i].name);
			for(r=0;r<m;r++)
			{
				printf("%.0f\t", stu[i].score[r]);
			}
			printf("\n");
			return ;
		}
	}
	printf("���޴���!\n");
	return ;
}



/* �������ܣ�����������ѧ���ɼ�����ʾ���ҽ�� */

void SearchbyName(STU stu[], int n, int m)

{
	int i, r;
	char ch[MAX_LEN];
	printf("����������Ҫ��ѯ������:\n");
	scanf("%s", ch);
	for(i=0;i<n;i++)
	{
		if(strcmp(ch, stu[i].name) == 0)
		{
			printf("%ld\t%s\t", stu[i].num, stu[i].name);
			for(r=0;r<m;r++)
			{
				printf("%.0f\t", stu[i].score[r]);
			}
			printf("\n");
			return ;
		}
	}
	printf("���޴���!\n");
	return ;
}



/* �������ܣ� ��ӡѧ���ɼ� */

void PrintScore(STU stu[], int n, int m)

{
	int i, r;
	for(i=0;i<n;i++)
	{
		printf("%ld\t%s\t", stu[i].num, stu[i].name);
		for(r=0;r<m;r++)
		{
			printf("%.0f\t", stu[i].score[r]);
		}
		printf("%.0f\t%.0f\n", stu[i].sum, stu[i].aver);
	}
	return ;
}

