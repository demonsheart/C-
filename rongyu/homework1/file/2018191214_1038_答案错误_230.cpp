#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main()
{
	int t,i,num1,num2,z,x,c,k,num,t2,i2,h,p;
	char word1[1000],word2[1000],word3[1000],*word;
	scanf("%d",&t);
	for(i=0;i<=t;i++)
	{
		num=0;
		scanf("%s",word1);
        scanf("%s",word2);
        scanf("%s",word3);
		z=strlen(word1);
		x=strlen(word2);
		c=strlen(word3);
		word=(char*)malloc((z+x+c+1)*sizeof(int));
		h=0;
		for(k=1;k<=3;k++)
		{
			scanf("%d %d",&num1,&num2);
			if(k==1)
			{
				num=num+num1-num2+1;
			    for(i2=num1-1;i2<=num2-1;i2++,h++)
				word[h]=word1[i2];
			}
			if(k==2)
			{
                num=num+num1-num2+1;
			    for(i2=num1-1;i2<=num2-1;i2++,h++)
				word[h]=word2[i2];
			}
			if(k==3)
			{
                num=num+num1-num2+1;
			    for(i2=num1-1;i2<=num2-1;i2++,h++)
				word[h]=word3[i2];
			}
		}
		word[h]='\0';
	    printf("%s\n",word);
	}
	return 0;
}

