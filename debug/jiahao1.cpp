#include <stdio.h>
void inverse(int *p, int n)
{
    int temp, i = n / 2; //ѭ������
    int *h = p;
    int *t = p + (n - 1);
    while (i--)
    {
        temp = *h;
        *h = *t;
        *t = temp;
        h++;
        t--;
    }
}
int main()

{

    int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};

    printf("����ԭ˳��:\n");

    for (i = 0; i < 10; i++)

        printf("%d ", a[i]);

    printf("\n");

    inverse(a, 10);

    printf("��������:\n");

    for (i = 0; i < 10; i++)

        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
