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
            strncpy(p,it,l);
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