#include <iostream>
using namespace std;
template <class T>
T max(T t[], int len)
{
    T ma = t[0];
    for (int i = 0; i < len; ++i)
    {
        if (t[i] > ma)
            ma = t[i];
    }
    return ma;
}
template <class T>
class Cryption
{
    T ptxt[100]; //明文
    T ctxt[100]; //密文
    T key;       //密钥
    int len;     //长度
public:
    Cryption(T tk, T tt[], int tl) : key(tk), len(tl) //参数依次对应密钥、明文、长度
    {
        for (int i = 0; i < len; ++i)
            ptxt[i] = tt[i];
    }
    void Encrypt()
    {
        T ma = max(ptxt, len);
        for (int i = 0; i < len; ++i)
        {
            ctxt[i] = ma - ptxt[i] + key;
        }
    }
    void Print() //打印，无需改造
    {
        int i;
        for (i = 0; i < len - 1; i++)
            cout << ctxt[i] << " ";
        cout << ctxt[i] << endl;
    }
};
//支持三种类型的主函数
int main()
{
    int i;
    int length; //长度
    int ik, itxt[100];
    double dk, dtxt[100];
    char ck, ctxt[100];
    //整数加密
    cin >> ik >> length;
    for (i = 0; i < length; i++)
        cin >> itxt[i];
    Cryption<int> ic(ik, itxt, length);
    ic.Encrypt();
    ic.Print();
    //浮点数加密
    cin >> dk >> length;
    for (i = 0; i < length; i++)
        cin >> dtxt[i];
    Cryption<double> dc(dk, dtxt, length);
    dc.Encrypt();
    dc.Print();
    //字符加密
    cin >> ck >> length;
    for (i = 0; i < length; i++)
        cin >> ctxt[i];
    Cryption<char> cc(ck, ctxt, length);
    cc.Encrypt();
    cc.Print();

    return 0;
}
