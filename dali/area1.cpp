#include<iostream>
#include<stdlib.h>
using namespace std;
void sphere();
int main(){
    sphere();
    system("pause");
}
void sphere(){
    double radius;
    cout<<"please intput radius: ";
    cin >>radius;
    if(radius<0)
    return;
    cout<<"The result is "<<radius*radius*3.14*4<<"\n";
}