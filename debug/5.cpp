#include <stdio.h>
int main()
{
    int a, b;
    printf("������ѧ���Ļ����������");
    scanf("%d", &a);
    printf("������ѧ���ĸ����������");
    scanf("%d", &b);
    switch ((a + 5) / 10)
    {
    case 10:
        printf("��ͬѧ�ĵȼ��ɼ�Ϊ��A+");
        break;
    case 9:
        switch (b / 10)
        {
        case 2:
        case 3:
            printf("��ͬѧ�ĵȼ��ɼ�Ϊ��A+");
            break;
        case 1:
        case 0:
            printf("��ͬѧ�ĵȼ��ɼ�Ϊ��A");
            break;
        default:
            printf("��������������������룡");
        }
        break;
    case 8:
        printf("��ͬѧ�ĵȼ��ɼ�Ϊ��B");
        break;
    case 7:
        printf("��ͬѧ�ĵȼ��ɼ�Ϊ: C");
        break;
    case 6:
        switch (a / 10)
        {
        case 6:
            printf("��ͬѧ�ĵȼ��ɼ�Ϊ��D");
            break;
        case 5:
            printf("��ͬѧ�ĵȼ��ɼ�Ϊ��F");
            break;
        default:
            printf("��������������������룡");
        }
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("��ͬѧ�ĵȼ��ɼ�Ϊ��F");
        break;
    default:
        printf("��������������������룡");
    }
}