#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    fstream file;
    string num;

    file.open("E:\\C\\.vscode\\rongyu\\test\\data.txt",ios::out|ios::in);

    if(!file.is_open())
    {
        cout<<"fault to open!"<<endl;
        return 0;
    }
    else
    {
        while (file>>num)
        {
            cout<<num<<endl;
        }
    }
    return 0;
}