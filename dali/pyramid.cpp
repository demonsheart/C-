#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,j,a,m;
	char ch;
	
	scanf("%d ",&t); 
	for(int i=1;i<=t;i++)
	{
		scanf("%d %c",&n,&ch);
		
		for(j=1;j<=n;j++)
		{
			m=2*j-1;
			a=2*n-1-m;
			
			for(int k=1;k<=a;k++)
				printf(" ");
			for(int l=1;l<=m;l++)
				printf("%c",ch);
			

			printf("\n");
		}
		    printf("\n");
	}
	system("pause");
}
/*ceshishuju
3
1 5
6 *
3 A
è¾“å‡º
5

          *
        ***
      *****
    *******
  *********
***********

    A
  AAA
AAAAA
*/
 
 
