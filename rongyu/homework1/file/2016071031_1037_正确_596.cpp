#include<stdio.h>
#include<iostream>
 
void intway(int n){
    int *pint = new int[n];
    int sum = 0, ave;
    for(int i = 0; i < n; i++){
        scanf("%d", pint + i);
        sum += *(pint+i);
    }
 
    ave = sum / n;
 
    printf("%d\n", ave);
 
    delete []pint;
 
}
 
void charway(int n){
    char *pchr = new char[n];
    getchar();
    for(int i = 0; i < n; i++){
        scanf("%c", pchr+i);
        if(i != n-1)
            getchar();
    }
 
    int max = *pchr;
 
    for(int i = 0; i < n; i++){
        if(*(pchr+i) > max)
            max = *(pchr+i);
    }
 
    printf("%c\n", max);
 
    delete []pchr;
 
}
 
void floatway(int n){
    float *pflt = new float[n];
    for(int i = 0; i < n; i++){
        scanf("%f", pflt+i);
    }
 
    float min = *pflt;
    for(int i = 0; i < n; i++){
        if(*(pflt+i) < min)
            min = *(pflt+i);
    }
 
    printf("%.1f\n", min);
 
    delete []pflt;
 
}
 
int main()
{
    int t, n;
    char type;
    scanf("%d", &t);
 
    while(t--){
        getchar();
        scanf("%c%d", &type, &n);
        switch(type){
            case 'I':
                intway(n);
                break;
            case 'C':
                charway(n);
                break;
            case 'F':
                floatway(n);
                break;
        }
    }
 
    return 0;
}
