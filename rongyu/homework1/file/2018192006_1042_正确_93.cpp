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
int strCompare(char *str1,char* str2){
	int length1=strlen(str1);
	int length2=strlen(str2);
	if(length1>length2){
		return 1;
	}
	else if(length1<length2){
		return -1;
	}
	else{
		int i=0,comp=0;
		for(i=0;i<length1;++i){
			if(*(str1+i)>*(str2+i))
				++comp;
			else if(*(str1+i)<*(str2+i))
				--comp;
		}
		if(comp>0)
			return 1;
		else if(comp<0)
			return -1;
		return 0;
	}

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
		cin >> strOne >> strTwo;
		cout << strCompare(strOne,strTwo) << endl;
		
	}
	/*Final process here.*/


/*Debugger after Solution,close output file.*/
#ifdef DEBUG
	input.close();
	output.close();
#endif
	return 0;
}     

