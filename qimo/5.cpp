#include <iostream>
#include <string>
using namespace std;
class CN; //提前声明
class EN; //提前声明
class Weight
{ //抽象类
protected:
    string kind; //计重类型
    int gram;    //克
public:
    Weight(string tk = "no name", int tg = 0)
    {
        kind = tk;
        gram = tg;
    }
    virtual void Print(ostream &out) = 0; //输出不同类型的计重信息
};
class CN : public Weight
{
private:
    int j, l, q;

public:
    CN() {}
    CN(int xj, int xl, int xq, int xg, string k) : j(xj), l(xl), q(xq), Weight(k, xg) {}
    void Convert(int a)
    {
        j = a / 500;
        a -= j * 500;
        l = a / 50;
        a -= l * 50;
        q = a / 5;
        a -= q * 5;
        gram = a;
    }
    void Print(ostream &out)
    {
        out << "中国计重:" << j << "斤" << l << "两" << q << "钱" << gram << "克" << endl;
    }
    friend ostream &operator<<(ostream &out, const Weight &a);
};
class EN : public Weight
{
private:
    int ba, an, da;

public:
    EN(int xb, int xa, int xd, int xg, string k) : ba(xb), an(xa), da(xd), Weight(k, xg) {}
    void Convert(int a)
    {
        ba = a / 512;
        a -= ba * 512;
        an = a / 32;
        a -= an * 32;
        da = a / 2;
        a -= da * 2;
        gram = a;
    }
    operator CN()
    {
        CN res;
        res.Convert(ba * 512 + an * 32 + da * 2 + gram);
        return res;
    }
    void Print(ostream &out)
    {
        out << "英国计重:" << ba << "磅" << an << "盎司" << da << "打兰" << gram << "克" << endl;
    }
    friend ostream &operator<<(ostream &out, const Weight &a);
};
//以全局函数方式重载输出运算符，代码3-5行....自行编写
//重载函数包含两个参数：ostream流对象、Weight类对象，参数可以是对象或对象引用
//重载函数必须调用参数Weight对象的Print方法
ostream &operator<<(ostream &out, Weight &a)
{
    a.Print(out);
    return out;
}
int main() //主函数
{
    int tw;
    //创建一个中国计重类对象cn
    //构造参数对应斤、两、钱、克、类型，其中克和类型是对应基类属性gram和kind
    CN cn(0, 0, 0, 0, "中国计重");
    cin >> tw;
    cn.Convert(tw); //把输入的克数转成中国计重
    cout << cn;

    //创建英国计重类对象en
    //构造参数对应磅、盎司、打兰、克、类型，其中克和类型是对应基类属性gram和kind
    EN en(0, 0, 0, 0, "英国计重");
    cin >> tw;
    en.Convert(tw); //把输入的克数转成英国计重
    cout << en;
    cn = en; //把英国计重转成中国计重
    cout << cn;
    return 0;
}