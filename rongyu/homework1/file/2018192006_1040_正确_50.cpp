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
int isNumber(char *str){
	int length=strlen(str);
	int result=0,i=length-1;
	
	char *Begin,*End,*iter;
	Begin=str;
	End=str+length;
	for(iter=Begin;iter<End;++iter){
		switch(*iter){
			case '1':result+=1*pow(10,i);break;
			case '2':result+=2*pow(10,i);break;
			case '3':result+=3*pow(10,i);break;
			case '4':result+=4*pow(10,i);break;
			case '5':result+=5*pow(10,i);break;
			case '6':result+=6*pow(10,i);break;
			case '7':result+=7*pow(10,i);break;
			case '8':result+=8*pow(10,i);break;
			case '9':result+=9*pow(10,i);break;
			case '0':result+=0*pow(10,i);break;
			default :return -1;
		}
		--i;
	}
	return result;
}
/*Main Function starts here.*/
int main(){
	
	int round,rounds;
	cin >> rounds;
	/*Preprocessing Here*/
	cin.get();
	for(round=1;round<=rounds;++round){
	/*Solve Problems Here if number of test cases are known.*/
		char* testStr=new char[1000];
		cin >> testStr;
		cout << isNumber(testStr) << endl;
		
	}
	/*Final process here.*/


/*Debugger after Solution,close output file.*/
#ifdef DEBUG
	input.close();
	output.close();
#endif
	return 0;
}     

