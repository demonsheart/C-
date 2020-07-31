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
	for(round=1;round<=rounds;++round){
	/*Solve Problems Here if number of test cases are known.*/
		char **ptr;
		ptr=(char**)malloc(12*sizeof(char*));
		ptr[0]="January";
		ptr[1]="February";
		ptr[2]="March";
		ptr[3]="April";
		ptr[4]="May";
		ptr[5]="June";
		ptr[6]="July";
		ptr[7]="August";
		ptr[8]="September";
		ptr[9]="October";
		ptr[10]="November";
		ptr[11]="December";
		int n;
		cin >> n;
		if(n<=12 && n>=1)
			cout << ptr[n-1]<< endl;
		else
			cout << "error" << endl;
	}
	/*Final process here.*/


/*Debugger after Solution,close output file.*/
#ifdef DEBUG
	input.close();
	output.close();
#endif
	return 0;
}     
