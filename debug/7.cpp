#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("ʵ�����ƣ�����������         ʵ���ˣ�����\n");
    printf("������3��3��������\n");
    int a[9],i,j,k,temp;
    for(i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        k=i;
        for(j=i+1;j<9;j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp=a[k];
            a[k]=a[i];
            a[i]=temp;
        }
    }
    printf("���Ϊ��\n");
    for(i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=3;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=6;i<9;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("�ļ�����5.5homework03     ������ڣ� 2020.5.5        �������ۣ�������\n");
    return 0;
}