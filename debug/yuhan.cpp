#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include <windows.h>
#include <mmsystem.h>//导入声音头文件
#pragma comment(lib,"Winmm.lib")
#define   MAX_LEN  10                	   /* 字符串最大长度 */
#define   STU_NUM 30                       /* 最多的学生人数 */
#define   COURSE_NUM 6                     /* 最多的考试科目数 */
typedef struct student
{
	long num;						/* 每个学生的学号 */
	char name[MAX_LEN];            	/* 每个学生的姓名 */
	float score[COURSE_NUM];		/* 每个学生COURSE_NUM门功课的成绩 */
	float sum;                   	/* 每个学生的总成绩 */
	float aver;               		/* 每个学生的平均成绩 */
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
	int   n = 0, m = 0;  /* 学生人数为n，课程门数为m */
	PlaySound("sounds\\背景音乐.wav",NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
    system("pause");
	STU   stu[STU_NUM];
	printf("输入学生人数(n<=30):\n", STU_NUM);
    scanf("%d", &n);
	while (1)
	{
		ch = Menu();      /* 显示菜单，并读取用户输入 */
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



/*  函数功能：显示菜单并获得用户键盘输入的选项 */

int Menu(void)
{
	int ret;
	printf("学生成绩管理系统\n"
		"1.输入\n"
		"2.计算每门课程的总分和平均分\n"
		"3.计算每个学生的总分和平均分\n"
		"4.按每个学生的总分由低到高排出名次表\n"
		"5.按学号由小到大排出成绩表\n"
		"6.按姓名的字典顺序排出成绩表\n"
		"7.按学号查询学生排名及其考试成绩\n"
		"8.按姓名查询学生排名及其考试成绩\n"
		"9.输出每个学生的学号、姓名、各科考试成绩，以及每门课程的总分和平均分\n"
		"0.Exit\n"
		"请输入你的选择:\n");
	scanf("%d", &ret);
	return ret;
}



/* 函数功能：输入n个学生的m门课成绩 */

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



/* 函数功能：计算每个学生各门课程的总分和平均分 */

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
		printf("学生 %d: 总分=%.0f,平均分=%.0f\n", i+1, stu[i].sum, stu[i].aver);
	}
	return ;
}



/* 函数功能：计算每门课程的总分和平均分 */

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
		printf("课程 %d:s总分=%.0f,平均分=%.0f\n", i+1, sum, sum/n);
	}
	return ;
}

/* 函数功能：按选择法将数组sum的元素值排序 */

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



/* 使数据按升序排序 */

int Ascending(float a, float b)

{
	if(a > b)
		return 1;
	return 0;
}



/* 交换两个单精度浮点型数据 */

void  SwapFloat(float *x, float *y)

{
	float term;
	term = *x;
	*x = *y;
	*y = term;
	return ;
}



/* 交换两个长整型数据 */

void  SwapLong(long *x, long *y)

{
	long term;
	term = *x;
	*x = *y;
	*y = term;
	return ;
}



/* 交换两个字符串 */

void  SwapChar(char x[], char y[])

{
	char term[MAX_LEN];
	strcpy(term, x);
	strcpy(x, y);
	strcpy(y, term);
	return ;
}



/* 函数功能：按选择法将数组num的元素值按从低到高排序 */

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



/* 函数功能：交换法实现字符串按字典顺序排序 */

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



/* 函数功能：按学号查找学生成绩并显示查找结果 */

void SearchbyNum(STU stu[], int n, int m)

{
	long term;
	int i, r;
	printf("请输入你想要查询的学号:\n");
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
	printf("查无此人!\n");
	return ;
}



/* 函数功能：按姓名查找学生成绩并显示查找结果 */

void SearchbyName(STU stu[], int n, int m)

{
	int i, r;
	char ch[MAX_LEN];
	printf("请输入你想要查询的姓名:\n");
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
	printf("查无此人!\n");
	return ;
}



/* 函数功能： 打印学生成绩 */

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

