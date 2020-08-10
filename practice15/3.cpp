#include <iostream>
#include <string.h>
using namespace std;
class Str
{
private:
    int length;
    char *p;

public:
    Str()
    {
        length = 0;
        p = NULL;
    }
    Str(char *s)
    {
        length = strlen(s);
        p = new char[length + 1];
        strcpy(p, s);
    }
    Str(const Str &obj)
    {
        length = obj.length;
        p = new char[length + 1];
        strcpy(p, obj.p);
    }
    ~Str() { delete[] p; }
    friend Str operator+(const Str &s1, const Str &s2)
    {
        int l = s1.length + s2.length + 1;
        char *p = new char[l];
        strcpy(p, s1.p);
        strcat(p, s2.p);
        Str tmp(p);
        delete[] p;
        return tmp;
    }
    friend Str operator-(const Str &s1, const Str &s2)
    {
        int l = s1.length - s2.length + 1, i = 0;
        char *p = new char[l];
        char *it = strstr(s1.p, s2.p);
        if (it != NULL)
        {
            it -= l - 1;
            strncpy(p, it, l);
            // for (i = 0; i < l - 1; ++i, ++it)
            //     p[i] = *it;
            // p[i + 1] = '\0';
        }
        else
            strcpy(p, s1.p);
        Str tmp(p);
        delete[] p;
        return tmp;
    }
    Str operator=(const Str &obj)
    {
        if (this == &obj)
            return *this;
        if (p != NULL)
            delete[] p;
        length = obj.length;
        p = new char[length + 1];
        strcpy(p, obj.p);
        return *this;
    }
    void show()
    {
        cout << "length=" << length << " " << p << endl;
    }
};

int main()
{
    char *p, *q;
    p = new char[1000];
    q = new char[1000];
    cin.getline(p, 1000);
    cin.getline(q, 1000);

    Str s1(p);
    Str s2(q);
    Str s3;
    s3 = s1 + s2;
    s3.show();
    s3 = s1 - s2;
    s3.show();

    delete[] p;
    delete[] q;
}
/*
题目描述
定义一个字符串类str，该类中包含2个属性，字符串长度和一个char型指针保存字符串内容。增加以下运算符的重载：+、- 。+运算符表示把2个字符串拼接成一个字符串。-运算符表示例如a2-a1，则删除a2中出现的a1字符串。



要求如下：
1.实现str类；
2.编写main函数，初始化2个str对象A、B，输出这2个对象相加后的对象C的结果信息。输出C与B之间相减后的结果信息。
(提示:strstr(char *a,char*b)可以从a字符串中查找出b首次出现的地址)
输入
第1行：输入一个字符串，初始化第一个str对象。
(提示:通过cin. getline(char *,int strCount)可以输入一个字符串到char数组中)
第2行：输入一个字符串，初始化第二个str对象。
输出
第1行：输出两个字符串相加后的长度和字符串。

第2行：输出两个字符串相减后的长度和字符串。

样例输入
i am a 
student!
样例输出
length=15 i am a student!
length=7 i am a 
*/