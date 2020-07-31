/*OJ1180，组链表与通讯录
现在使用组链表来实现通讯录，通讯录是多个联系人的信息集合，每个联系人都包含姓名和电话属性。
每个联系人对应一个链表结点，姓名首字母相同的联系人放在同一个链表中。联系人的类定义基本写好，如下参考代码
通讯录的类界面如下代码，操作包括：
1、该类没有构造函数，使用输入函数Input实现数据的输入和通讯录的初始化
2、打印函数Print，输出整个通讯录，输出格式参考样本
3、插入新的联系人，重载运算符+=来实现，如果联系人姓名已经存在，则用新的电话覆盖旧电话
注意：插入采用头插法，即新结点直接插入头结点之后
4、查找联系人姓名，重载运算符()来实现，查找成功返回链表结点指针，失败返回NULL
5、合并两个通讯录，重载运算符+来实现，合并结果放在第一个通讯录中，即左操作数。
通讯录的合并实际上是两个相同首字母的链表合并。对于相同首字母的两个链表i和j合并过程如下：
1）第二个链表j从头开始，取出联系人信息，在第一个链表i中查找。
2）如果联系人已存在，则用第二个通讯录的电话覆盖第一个通讯录的电话
3）如果联系人不存在，则把联系人插入到第一个链表i中
*/

/*
0(A),1(B),2(C),3(D),4(E),5(F),6(G)
7(H),8(I),9(J),10(K),11(L),12(M),13(N),
14(O),15(P),16(Q),17(R),18(S),19(T),
20(U),21(V),22(W),23(X),24(Y),25(Z)
*/
/*  桶子数5
4
Tom 8111
Any 1222
Ken 2333
Kim 2444
*/
/*  桶子数11
6
Tom 8111
Any 1222
Ken 2333
Kim 2444
Bob 2223
Peter 7899
*/
/*   桶子数23
12
Tom 8111
Any 1222
Ken 2333
Kim 2444
Bob 2223
Peter 7899
Zone 3456
Lee 7890
Clion 1234
David 2345
Xin 1230
Hai 7312
*/

/*样例输入
4
Tom 8111
Any 1222
Ken 2333
Kim 2444
Any
Ben
Tim 8222
2
Tom 8444
Ann 1333
样例输出
Any--1222
查找失败
A--Ann.1333--Any.1222--
K--Kim.2444--Ken.2333--
T--Tim.8222--Tom.8444--
*/
#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

class cperson
{
    string name;
    int phone;
public:
    cperson(string nval,int pval);
    string getname() const;
    int getphone() const;
    void setphone(const int p);
    void print() const;
    bool operator==(const cperson &rhs) const;
};

struct hashfun
{
    int operator()(const cperson &p) const
    {
        return p.getname()[0]-'A';
    }
};

class PhoneBook
{
    unordered_set<cperson,hashfun> pBook;
public:
    using PhoneBookit = unordered_set<cperson,hashfun>::const_iterator;
    PhoneBook();
    void Input();
    void Print();
    int operator()(const string &name);
    PhoneBook operator+(const PhoneBook &rhsBook);
    PhoneBook &operator+=(const cperson &p);
};

cperson::cperson(string nval,int pval):name(nval),phone(pval)
{
}

string cperson::getname()  const
{
    return name;
}

int cperson::getphone() const
{
    return phone;
}

void cperson::setphone(const int p)
{
    phone = p;
}
void cperson::print() const
{
    cout<<name<<"."<<phone<<"--";
}

bool cperson::operator==(const cperson &rhs) const
{
    return name==rhs.name;
}
PhoneBook::PhoneBook()
{
    pBook.reserve(26);
}
void PhoneBook::Input()
{
    string name;
    int phone,n;

    cin>>n;
    while(n--)
    {
        cin>>name>>phone;
        pBook.insert(cperson(name,phone));
    }
}

void PhoneBook::Print()
{
    cout<<"----------------"<<endl;
    cout<<"桶子数: "<<pBook.bucket_count()<<endl;
    cout<<"负载因子: "<<pBook.load_factor()<<endl;
    cout<<"最大负载因子: "<<pBook.max_load_factor()<<endl;
    for(auto i=0; i<(int)pBook.bucket_count(); i++)
    {

        //第i个桶子元素数及元素
        if(!pBook.bucket_size(i))
            continue;
        cout<<char('A'+i)<<"--";
        for(auto it=pBook.begin(i); it!=pBook.end(i); it++)
            it->print();
        cout<<endl;
    }
}

//finded, return phone; else ,return -1
int PhoneBook::operator()(const string &name)
{
    cperson p(name,0);
    //PhoneBookit it = pBook.find(p);
    PhoneBookit it = find_if(begin(pBook),end(pBook),
                          [name](cperson p)->bool{return p.getname()==name;});

    if(it!=pBook.end())
        return it->getphone();
    else
        return -1;
}

PhoneBook PhoneBook::operator+(const PhoneBook &rhsBook)
{
    PhoneBook result(*this);
    for(auto it = rhsBook.pBook.begin(); it!=rhsBook.pBook.end(); it++)
    {
        string name = it->getname();

        PhoneBookit reit = find_if(begin(result.pBook),end(result.pBook),
                          [name](cperson p)->bool{return p.getname()==name;});
        //auto reit = result.pBook.find(*it);
        if(reit!=result.pBook.end())
        {
            result.pBook.erase(reit);
            result.pBook.insert(*it);
        }
        else
            result.pBook.insert(*it);
    }
    return result;

}
PhoneBook &PhoneBook::operator+=(const cperson &rhs)
{
    PhoneBookit it;

    it = find_if(begin(pBook),end(pBook),
                          [=](const cperson &p)->bool{return p.getname()==rhs.getname();});
    //it = pBook.find(rhs);
    if(it!=pBook.end())
    {
        pBook.erase(it);
        pBook.insert(rhs);
    }
    else
        pBook.insert(rhs);

    return *this;
}

int main()
{
    string tname;
    int i, tno;

    PhoneBook pb;
    pb.Input(); //接收输入数据，初始化第一个通讯录
    pb.Print();
    //两次姓名查找
    for (i=0; i<2; i++)
    {
        cin>>tname;
        tno = pb(tname); //调用()运算符，实现查找
        if (tno!=-1)
            cout<<tname<<"--"<<tno<<endl;
        else
            cout<<"查找失败"<<endl; //查找失败，输出提示信息
    }
    //一次插入
    cin>>tname>>tno;
    pb += cperson(tname,tno); //调用+=运算符，实现插入新联系人
    pb.Print();

    //通讯录合并
    PhoneBook pc;
    pc.Input(); //初始化第二个通讯录
    pc.Print();
    pb = pb+pc; //调用+运算符，实现合并

    pb.Print(); //输出所有操作后的通讯录
}
