#include<stdio.h>
#include<string.h>
int main()
{
	int time;
	
	scanf("%d",&time);
	while(time--)
	{
		char str1[100],str2[100],str3[100];
		int start1,start2,start3,end1,end2,end3;
		int len,a,b=0;
		scanf("%s",str1);
		scanf("%s",str2);
		scanf("%s",str3);
		scanf("%d %d %d %d %d %d",&start1,&end1,&start2,&end2,&start3,&end3);
		len=end1-start1+end2-start2+end3-start3+3;
		char *str=new char[len];
		for(a=0;a<end1-start1+1;a++)
		{
			*(str+b)=*(str1+start1+a-1);
			b++;
		}
		for(a=0;a<end2-start2+1;a++)
		{
			*(str+b)=*(str2+start2+a-1);;
			b++;
		}
		for(a=0;a<end3-start3+1;a++)
		{
			*(str+b)=*(str3+start3+a-1);
			b++;
		}
		*(str+len)='\0';
		puts(str);
	}
	return 0;
}


		


