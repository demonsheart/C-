#include "student.h"
#include <iostream>
#include <string>
using namespace std;

student::student(string nameval, int idval) :name(nameval), id(idval)
{
    //ctor
}

student::student()
{

}
student::~student()
{
    //dtor
}




void student::display()
{
    cout << name << " " << id << endl;
}
