/* Structure for OpenJudge
 * Version 1.1 
 * Created by Sparky. 2019.3.10
 */ 
#include <iostream>
using std::cin;using std::cout;
using std::cerr;using std::endl;

using std::istream;using std::ostream; 
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <algorithm>
using std::sort;

#include <cstdio>
#include <cstdlib>
#include <cmath>
/*Add other "#include"s and namespace usings here if needed.*/ 
#include <cstring>

/*Debugger before Solution*/
//	#define DEBUG
//undefine DEBUG if stop debugging.

#include <fstream>
using std::ifstream;using std::ofstream;
#ifdef DEBUG
	ifstream input("C:\\Users\\StarSparky\\Desktop\\Codes\\OpenJudge Structure(Cpp)\\InputTest.txt",ifstream::in);
	ofstream output("C:\\Users\\StarSparky\\Desktop\\Codes\\OpenJudge Structure(Cpp)\\OutputTest.txt",ifstream::out);
	#define cin input
	#define cout output
#endif
/*Add Data Structures Here*/

/*Add Functions Here*/

/*Main Function starts here.*/
int main(){
	
	int round,rounds;
	cin >> rounds;
	/*Preprocessing Here*/
	cin.get();
	for(round=1;round<=rounds;++round){
	/*Solve Problems Here if number of test cases are known.*/
		char* str1=new char[10];
		char* str2=new char[10];
		char* str3=new char[10];
		cin >> str1 >> str2 >> str3;
		char *Begin,*End,*iter;
		int x,y;
		int i;
		for(i=1;i<=3;++i){
			cin >> x >> y;
			if(i==1){
				Begin=str1+x-1;
				End=str1+y-1;
			}
			if(i==2){
				Begin=str2+x-1;
				End=str2+y-1;
			}
			if(i==3){
				Begin=str3+x-1;
				End=str3+y-1;
			}
			for(iter=Begin;iter<=End;++iter){
				cout << *iter;
			}	
		}
		cout << endl;		
	}
	/*Final process here.*/


/*Debugger after Solution,close output file.*/
#ifdef DEBUG
	input.close();
	output.close();
#endif
	return 0;
}     


