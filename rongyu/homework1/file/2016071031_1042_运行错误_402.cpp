#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
using namespace std;

int cmp(char *s1, char *s2){
//	判断长度 
	if(strlen(s1) > strlen(s2))
		return 1;
	else if(strlen(s1) < strlen(s2))
		return -1;

//逐个比较 flag保存比较结果	
	int flag = 0;
	for(int i = 0; *(s1+i) != '\0'; i++){
		if(*(s1+i) > *(s2+i))
			flag++;
		else if(*(s1+i) < *(s2+i))
			flag--;
	}
	
	if(flag == 0)
		return 0;
	else if(flag >0)
		return 1;
	else
		return -1;	
	
}

int main(int argc, char** argv) {
	int t;
	char *s1, *s2;
	scanf("%d", &t);	
	while(t--){		
		scanf("%s", s1);
		scanf("%s", s2);
		printf("%d\n", cmp(s1, s2));		
	}
	return 0;
}
