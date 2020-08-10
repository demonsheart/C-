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
/*
题目描述
目前国际计重最基本的单位是克。在古代各个国家的计重单位是不同的。
中国使用斤、两、钱来表示重量，其中1斤=10两，1两=10钱
中国计重单位与克的关系为：1斤=500克，1两=50克，1钱=5克
英国使用磅、盎司、打兰来表示重量，其中1磅=16盎司，1盎司=16打兰
英国计重单位与克的关系为：1磅=512克，1盎司=32克，1打兰=2克
以下参考代码包含了抽象类Weight，中国计重和英国计重都继承了抽象类。
中国计重类新增了斤、两、钱三个属性，并新增了一个操作：计重转换Convert。
Convert能够把输入的克数转成中国计重，例如1234克转成2斤4两6钱4克，并且把数值放入斤、两、钱、克四个属性中
英国计重类新增了磅、盎司、打兰三个属性，并新增了两个操作：
1、计重转换Convert，功能与上述类似，例如2345克转成4磅9盎司4打兰1克，并且把数值放入对应的四个属性中
2、计重等价，重载类型转换运算符，实现将英国计重类的对象转换成中国计重类的对象，例如英国计重类对象en（2磅2盎司11打兰1克）等价于（转换成）中国计重类对象cn（2斤2两2钱1克）。
程序要求如下
1、参考代码框架不能做任何修改，在要求的地方添加代码
2、主函数不能有任何修改
以上数据纯粹为题目设计，方便计算，实际换算数据是不同的。
上述所有类属性都不是public，用面向对象思想和C++语言实现上述要求
----参考代码----

class CN; //提前声明
class EN; //提前声明
class Weight{ //抽象类
protected:
	char kind[20]; //计重类型
	int gram; //克
public:
	Weight (char tk[]="no name", int tg=0)
	{ strcpy(kind, tk);	
	  gram = tg;
	}
	virtual void Print(ostream & out) = 0; //输出不同类型的计重信息
};
class CN: public Weight { //中国计重
//....类定义自行编写
};
class EN: public Weight { //英国计重
//....类定义自行编写
}
//以全局函数方式重载输出运算符，代码3-5行....自行编写
//重载函数包含两个参数：ostream流对象、Weight类对象，参数可以是对象或对象引用
//重载函数必须调用参数Weight对象的Print方法
int main()//主函数
{	int tw;
//创建一个中国计重类对象cn
//构造参数对应斤、两、钱、克、类型，其中克和类型是对应基类属性gram和kind
	CN cn(0,0,0,0, "中国计重");
	cin>>tw;
	cn.Convert(tw); //把输入的克数转成中国计重
	cout<<cn;
	
//创建英国计重类对象en
//构造参数对应磅、盎司、打兰、克、类型，其中克和类型是对应基类属性gram和kind
	EN en(0,0,0,0,"英国计重");
	cin>>tw;
	en.Convert(tw); //把输入的克数转成英国计重
	cout<<en;
	cn=en; //把英国计重转成中国计重
	cout<<cn;
return 0;
}
输入
第一行输入一个克数，调用中国计重转换，把克数转成中国计重
第二行输入一个克数，调用英国计重转换，把克数转成英国计重，并调用计重等价把英国计重转成中国计重
输出
根据主函数运行输出

样例输入
1234
2345
样例输出
中国计重:2斤4两6钱4克
英国计重:4磅9盎司4打兰1克
中国计重:4斤6两9钱0克
*/