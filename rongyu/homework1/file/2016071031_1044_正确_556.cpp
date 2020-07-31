#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
using namespace std;


int main(int argc, char** argv) {
	int t, n, m, max, min;
	int **num;
	
	scanf("%d", &t);
	
	while(t--){
		scanf("%d%d", &n, &m);
	
		num = new int*[n];
		
		for(int i = 0; i < n; i++)
			num[i] = new int[m];
			
		max = INT_MIN;
		min = INT_MAX;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){				
				scanf("%d", &num[i][j]);
				if(num[i][j] > max)
					max = num[i][j];
				if(num[i][j] < min)
					min = num[i][j];				
			}
		}
		
		printf("%d %d\n", min, max);
		
		delete []num;
	}
	
	
	
	
	
	return 0;
}

