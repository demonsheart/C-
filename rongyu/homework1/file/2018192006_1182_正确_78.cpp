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
char* strAdd(char *str1,char* str2){
	int length1=strlen(str1);
	int length2=strlen(str2);
	char* strCrafted=new char[2000];
	char *Begin,*End,*iter;
	Begin=str1;End=str1+length1;
	int i=0;
	for(iter=Begin;iter<End;++iter){
		*(strCrafted+i)=*iter;
		++i;
	}
	Begin=str2;End=str2+length2;
	for(iter=Begin;iter<End;++iter){
		*(strCrafted+i)=*iter;
		++i;
	}
	*(strCrafted+i)=0;
	return strCrafted;
}
/*Main Function starts here.*/
int main(){
	
	int round,rounds;
	cin >> rounds;
	/*Preprocessing Here*/
	cin.get();
	for(round=1;round<=rounds;++round){
	/*Solve Problems Here if number of test cases are known.*/
		char* strOne=new char[1000];
		char* strTwo=new char[1000];
		char* strCrafted=new char[2000];
		cin >> strOne >> strTwo;
		cout << strOne << " " <<strTwo << " " << strAdd(strOne,strTwo) << endl;
		
	}
	/*Final process here.*/


/*Debugger after Solution,close output file.*/
#ifdef DEBUG
	input.close();
	output.close();
#endif
	return 0;
}     
