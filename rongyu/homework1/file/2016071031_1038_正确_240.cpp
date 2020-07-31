#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;



int main(int argc, char** argv) {
	int t;
	int a1, a2, a3, b1, b2, b3;
	scanf("%d", &t);
	char s1[11], s2[11], s3[11];
	char rs[31];	
	while(t--){		
		scanf("%s", s1);
		scanf("%s", s2);
		scanf("%s", s3);
		scanf("%d%d", &a1, &b1);
		scanf("%d%d", &a2, &b2);
		scanf("%d%d", &a3, &b3);
		*(s1+b1) = '\0';
		*(s2+b2) = '\0';
		*(s3+b3) = '\0';
		strcat(s1+a1-1, s2+a2-1);
		strcat(s1+a1-1, s3+a3-1);
		printf("%s\n", s1+a1-1);
	}
	return 0;
}
