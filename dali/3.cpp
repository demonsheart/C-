#include<stdio.h>
int main(){
    float a, b, x;
    scanf("%f %f",&a,&b);
    if(a==0){
        printf("error!\n");
    }
    else{
        x = -b/a;
        printf("�����ĸ��ǣ�%f\n",x);
    }
    return 0;
}