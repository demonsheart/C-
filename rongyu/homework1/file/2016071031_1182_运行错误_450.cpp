#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
using namespace std;

char *strAdd(char *s1, char *s2){
	char *ret;
	strcpy(ret, s1);
	strcat(ret, s2);
	return ret;
}

int main(int argc, char** argv) {
	int t;
	char *s1 = new char[30], *s2 = new char[30];
	scanf("%d", &t);	
	while(t--){		
		scanf("%s", s1);
		scanf("%s", s2);
		printf("%s %s %s\n", s1, s2, strAdd(s1, s2));			
	}
	
	delete []s1;
	delete []s2;
	return 0;
}

