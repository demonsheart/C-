#include<fstream>
using namespace std;
int main(){
    ifstream in("a.txt");
    ofstream out("a1.txt");
    for(string str; getline(in,str);)
     out<<str<<endl;
}