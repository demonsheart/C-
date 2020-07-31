#include<stdio.h>
#include<string.h>
int substr(char str1[],char str2[],int index);
int main(){
    int n,a;
    char str1[1000], str2[1000];
    scanf("%d",&n);
    getchar();
    while (n--)
    {
        gets(str1);
        scanf("%d",&a);
        if(substr(str1, str2, a))
            printf("%s\n",str2);       
        else
         printf("IndexError\n");
        getchar();
    }
    
}
int substr(char str1[],char str2[],int index){
    int len = strlen(str1);
    if(index >= len||index < 0)
    return 0;
    else
    {
        int i,j;
        for(i=index,j=0; i<len; ++i,++j){
            str2[j] = str1[i];
        }
        str2[j] = '\0';
        return 1;
    }
}