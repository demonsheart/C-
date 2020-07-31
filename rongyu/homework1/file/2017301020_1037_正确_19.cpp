#include <stdio.h>

int main(){
    int n,i,j,t,sum;
    char type,max;
    float min;
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++){
        scanf("%c",&type);
        scanf("%d",&n);
        int *array1=new int[n];
        float *array3=new float[n];
        char *array2=new char[n];
        if((type-'I')==0){
            sum=0;
            for(j=0;j<n;j++){
                scanf("%d",&array1[j]);
                sum=sum+array1[j];
            }
            printf("%d\n",sum/n);
            getchar();
        }
        else if((type-'C')==0){
            max='A';
            for(j=0;j<n;j++){
           	    getchar();
                scanf("%c",&array2[j]);
                if((array2[j]-max)>0){
                    max=array2[j];
                }
            }
            printf("%c\n",max);
            getchar();
        }
        else{
            for(j=0;j<n;j++){
                scanf("%f",&array3[j]);
            }
            min=array3[0];
            for(j=0;j<n;j++){
                if(min>array3[j]){
                    min=array3[j];
                }
            }
            printf("%.1f\n",min);
            getchar(); 
        }
        
    }
    return 0;
}

