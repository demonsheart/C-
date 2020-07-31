#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("实验名称：数组程序设计         实验人：胡蓝\n");
    printf("请输入3×3个整数：\n");
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
    printf("输出为：\n");
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
    printf("文件名：5.5homework03     完成日期： 2020.5.5        自我评价：还可以\n");
    return 0;
}