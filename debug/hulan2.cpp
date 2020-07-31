#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 80
int main()
{
    char str1[n],str2[n];
    int len,i=0,j;
    printf("please input a str1:");
    gets(str1);
    len=strlen(str1);
    j=len-1;
    do{
        str2[j]=str1[i];
        j--;
        i++;
    }while(i<len);
    str2[len] = '\0';
    printf("%s\n",str2);
    return 0;
}
