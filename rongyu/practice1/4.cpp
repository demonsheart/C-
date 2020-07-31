#include <iostream>
#include<sstream>
#include <string>
using namespace std;
string *p; //指向string数组的首地址，设为全局便于使用
string add();
string copy();
string getS()
{
    string cmd;
    cin >> cmd;

    if (cmd == "copy")   
        return copy();
    else if (cmd == "add")
        return add();
    else
        return cmd;
}
bool isNum(string str) //判断是否为数字 
{  
    stringstream sin(str);  
    double d;  
    char c;  
    if(!(sin >> d))  
        return false;  
    if (sin >> c)  
        return false;  
    return true;  
}  
int getNumber()
{
    string st;
    int flag = 1;
    cin >> st;
    flag = isNum(st);
    if(flag == 0)
    {
        return stoi(st);
    }    
    if (flag == 1)
    {
        int N;
        string S;
        S = getS();
        N = getNumber();
        if(st=="find")
        {
            int n = (*(p + N)).find(S,N);
            if(n == -1)
             n = (*(p + N)).length();
            return n;
        }
        else if(st=="rfind")
        {
            int n = (*(p + N)).rfind(S,N);
            if(n == -1)
             n = (*(p + N)).length();
            return n;
        }
    }
    return 0;
}
string copy()
{
    string s;
    int N, X, L;
    N = getNumber();
    X = getNumber();
    L = getNumber();
    s = (*(p + N)).substr(X, L);
    return s;
}
string add()
{
    string s1, s2;
    int flag = 1;
    s1 = getS();
    s2 = getS();
    for (auto x : s1)
        if (x > '9' || x < '0')
        {
            flag = 0;
            break;
        }
    for (auto x : s2)
        if (x > '9' || x < '0')
        {
            flag = 0;
            break;
        }
    if (flag)
    {
        int num, num1, num2;
        num1 = stoi(s1);
        num2 = stoi(s2);
        if(num1>99999||num1<0||num2>99999||num2<0)
        return s1.operator+=(s2);
        else
         num = num1 + num2;
    }
    else
        return s1.operator+=(s2);
    return s1;
}
int main()
{
    int n, N, L, X;
    cin >> n;

    string s[n + 1], com, S;
    for (int i = 1; i < n + 1; i++)
        cin >> s[i];
    p = s;
    while (getline(cin, com))
    {
        if (com == "over")
            break;
        else if (com == "insert")
        {
            S = getS();
            N = getNumber();
            X = getNumber();
            s[N].insert(X, S);
        }
        else if (com == "print")
        {
            N = getNumber();
            cout<<s[N]<<endl;
        }
        else if(com == "printall")
        {
            for (int i = 1; i < n + 1; i++)
            cout << s[i]<<endl;
        }
        else if(com == "reset")
        {
            S = getS();
            N = getNumber();
            s[N].replace(0,s[n].length(),S);
        }
    }
}