#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[10] = {5, 9, 11, 16, 24, 34, 37, 49, 51, 61};
    int n, m, i, j, t = 2;
    char ch;
    while (t--)
    {
        printf("��������Ҫ���еĲ���(����'I',ɾ��'D'):");
        fflush(stdin);
        ch = getchar();
        if (ch == 'D')
        {
            printf("��������Ҫɾ����������");
            scanf("%d", &n);
            for (i = 0; i < 10; i++)
            {
                if (n == a[i])
                    break;
            }
            for (j = i; j < 9; j++)
                a[j] = a[j + 1];
            printf("ɾ���������Ϊ��");
            for (i = 0; i < 9; i++)
                printf("%d ", a[i]);
            printf("\n\n");
        }
        else if (ch == 'I')
        {
            printf("��������Ҫ�����������");
            scanf("%d", &m);
            for (i = 0; i < 10; i++)
            {
                if (m < a[i])
                    break;
            }
            for (j = 9; j >= i; j--)
                a[j + 1] = a[j];
            a[i] = m;
            printf("����������Ϊ��");
            for (i = 0; i < 10; i++)
                printf("%d ", a[i]);
            printf("\n");
        }
    }
}