#pragma once
#include <string>
using namespace std;

class student
{
public:
    student(string nameval, int idval);
    student();
    void display();
    virtual ~student();
protected:

private:
    string name;
    int id;

};
