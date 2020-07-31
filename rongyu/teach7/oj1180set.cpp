/*OJ1180����������ͨѶ¼
����ʹ����������ʵ��ͨѶ¼��ͨѶ¼�Ƕ����ϵ�˵���Ϣ���ϣ�ÿ����ϵ�˶����������͵绰���ԡ�
ÿ����ϵ�˶�Ӧһ�������㣬��������ĸ��ͬ����ϵ�˷���ͬһ�������С���ϵ�˵��ඨ�����д�ã����²ο�����
ͨѶ¼����������´��룬����������
1������û�й��캯����ʹ�����뺯��Inputʵ�����ݵ������ͨѶ¼�ĳ�ʼ��
2����ӡ����Print���������ͨѶ¼�������ʽ�ο�����
3�������µ���ϵ�ˣ����������+=��ʵ�֣������ϵ�������Ѿ����ڣ������µĵ绰���Ǿɵ绰
ע�⣺�������ͷ�巨�����½��ֱ�Ӳ���ͷ���֮��
4��������ϵ�����������������()��ʵ�֣����ҳɹ�����������ָ�룬ʧ�ܷ���NULL
5���ϲ�����ͨѶ¼�����������+��ʵ�֣��ϲ�������ڵ�һ��ͨѶ¼�У������������
ͨѶ¼�ĺϲ�ʵ������������ͬ����ĸ������ϲ���������ͬ����ĸ����������i��j�ϲ��������£�
1���ڶ�������j��ͷ��ʼ��ȡ����ϵ����Ϣ���ڵ�һ������i�в��ҡ�
2�������ϵ���Ѵ��ڣ����õڶ���ͨѶ¼�ĵ绰���ǵ�һ��ͨѶ¼�ĵ绰
3�������ϵ�˲����ڣ������ϵ�˲��뵽��һ������i��
*/

/*
0(A),1(B),2(C),3(D),4(E),5(F),6(G)
7(H),8(I),9(J),10(K),11(L),12(M),13(N),
14(O),15(P),16(Q),17(R),18(S),19(T),
20(U),21(V),22(W),23(X),24(Y),25(Z)
*/
/*  Ͱ����5
4
Tom 8111
Any 1222
Ken 2333
Kim 2444
*/
/*  Ͱ����11
6
Tom 8111
Any 1222
Ken 2333
Kim 2444
Bob 2223
Peter 7899
*/
/*   Ͱ����23
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

/*��������
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
�������
Any--1222
����ʧ��
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
    cout<<"Ͱ����: "<<pBook.bucket_count()<<endl;
    cout<<"��������: "<<pBook.load_factor()<<endl;
    cout<<"���������: "<<pBook.max_load_factor()<<endl;
    for(auto i=0; i<(int)pBook.bucket_count(); i++)
    {

        //��i��Ͱ��Ԫ������Ԫ��
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
    pb.Input(); //�����������ݣ���ʼ����һ��ͨѶ¼
    pb.Print();
    //������������
    for (i=0; i<2; i++)
    {
        cin>>tname;
        tno = pb(tname); //����()�������ʵ�ֲ���
        if (tno!=-1)
            cout<<tname<<"--"<<tno<<endl;
        else
            cout<<"����ʧ��"<<endl; //����ʧ�ܣ������ʾ��Ϣ
    }
    //һ�β���
    cin>>tname>>tno;
    pb += cperson(tname,tno); //����+=�������ʵ�ֲ�������ϵ��
    pb.Print();

    //ͨѶ¼�ϲ�
    PhoneBook pc;
    pc.Input(); //��ʼ���ڶ���ͨѶ¼
    pc.Print();
    pb = pb+pc; //����+�������ʵ�ֺϲ�

    pb.Print(); //������в������ͨѶ¼
}
