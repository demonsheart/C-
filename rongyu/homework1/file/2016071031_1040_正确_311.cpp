#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
using namespace std;

int isNumber(char *s){
	for(int i = 0; *(s+i) != '\0'; i++){
		if(!isdigit(*(s+i)))
			return -1;
	}
	
	char *b = s;
	char *e = s;
	
	while(*b == '0'){
		b++;
	}
	
	while(*e != '\0'){
		e++;
	}
	
	int ret = 0;
	int i = 0;
	
	while(*e != *b){
		e--;
		ret += (*e - '0')*pow(10, i);
		i++;
	}
		
	return ret;
}

int main(int argc, char** argv) {
	int t;
	char s[15];
	scanf("%d", &t);	
	while(t--){		
		scanf("%s", s);
		printf("%d\n", isNumber(s));
		
	}
	return 0;
}
