#include <stdio.h>
int main()
{
    int a, b;
    printf("请输入学生的基础题分数：");
    scanf("%d", &a);
    printf("请输入学生的附加题分数：");
    scanf("%d", &b);
    switch ((a + 5) / 10)
    {
    case 10:
        printf("该同学的等级成绩为：A+");
        break;
    case 9:
        switch (b / 10)
        {
        case 2:
        case 3:
            printf("该同学的等级成绩为：A+");
            break;
        case 1:
        case 0:
            printf("该同学的等级成绩为：A");
            break;
        default:
            printf("分数输入错误，请重新输入！");
        }
        break;
    case 8:
        printf("该同学的等级成绩为：B");
        break;
    case 7:
        printf("该同学的等级成绩为: C");
        break;
    case 6:
        switch (a / 10)
        {
        case 6:
            printf("该同学的等级成绩为：D");
            break;
        case 5:
            printf("该同学的等级成绩为：F");
            break;
        default:
            printf("分数输入错误，请重新输入！");
        }
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("该同学的等级成绩为：F");
        break;
    default:
        printf("分数输入错误，请重新输入！");
    }
}