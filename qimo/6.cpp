#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
struct hashf
{
    int operator()(const string &name) const
    {
        return name[0] - 'A';
    }
};
class PhoneBook
{
private:
    unordered_map<string, int, hashf> pBook;

public:
    PhoneBook() { pBook.reserve(26); }
    void input()
    {
        string name;
        int n, phone;

        cin >> n;
        while (n--)
        {
            cin >> name >> phone;
            pBook.insert(make_pair(name, phone));
        }
    }
    void print()
    {
        for (auto i = 0; i < (int)pBook.bucket_count(); ++i)
        {
            if (!pBook.bucket_size(i))
                continue;
            cout << char('A' + i) << "--";
            for (auto it = pBook.begin(i); it != pBook.end(i); ++it)
                cout << it->first << "." << it->second << "--";
            cout << endl;
        }
    }
    int _find(string name)
    {
        auto it = pBook.find(name);
        if (it == pBook.end())
            return -1;
        else
            return it->second;
    }
    PhoneBook operator+=(const pair<string, int> &p)
    {
        auto it = pBook.find(p.first);
        if (it == pBook.end())
            pBook.insert(p);
        else
            it->second = p.second;
        return *this;
    }
    PhoneBook operator+(const PhoneBook &p)
    {
        PhoneBook tmp(*this);
        for (auto it = p.pBook.begin(); it != p.pBook.end(); ++it)
        {
            tmp += *it;
        }
        return tmp;
    }
};
int main()
{
    string name;
    int no;

    PhoneBook pb;
    pb.input();
    for (int i = 0; i < 2; ++i)
    {
        cin >> name;
        no = pb._find(name);
        if (no == -1)
            cout << "����ʧ��" << endl;
        else
            cout << name << "--" << no << endl;
    }
    cin >> name >> no;
    pb += make_pair(name, no);

    PhoneBook pc;
    pc.input();
    pb = pb + pc;

    pb.print();
    return 0;
}
/*
��Ŀ����
��������һ�ֳ��õ����ݽṹ�����������������ɣ�����������Ϣ�����С�

ÿ��������n����������ɣ�ÿ��������ͷ��㣬ͷ��㲻���ʵ�����ݣ�������Ϊһ��������
���������ͷ������һ�����飬�������ÿ��Ԫ�ض���һ������ͷ��㣬���ĺ���������һ������
����һ��ͨѶ¼���������ϵ�ˣ�ÿ����ϵ�˶��������͵绰��ÿ����ϵ�˶���Ӧһ�������㡣
Tom 8111
Any 1222
Ken 2333
Kim 2444
Tim 8222
�����ȴ���һ���������26������ͷ��㣬��Ӧ26����д��ĸ����Ϊ�������ϵ�ˣ���˴������������
��Ϊ������ϵ�˵�����������ĸΪA\K\T����˰����������ֱ���뵽����ͷ���֮���γ���������
������ĸ��ͷ�����Ϊ����ϵ�ˣ������ǿ���������������������ʾ
A--Any.1222
K--Kim.2444--Ken.2333
T--Tim.8222--Tom.8444
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
����Ҫ��
1����ϵ���ඨ���ͨѶ¼���ඨ������ο��������ж���
2�����������벻���޸�
3������ʹ����������ʵ��ͨѶ¼
4��ͨѶ¼��Ĳ��롢���ҡ��ϲ����������������������������
----�ο�����----

const int hmax=26; 
class Info { //��ϵ�ˣ���һ���������ʾ
	string name; //����
	int phoneNo; //�绰
public:
	Info* next;  //ָ����һ�����
	Info(string tn= "no name", int pno=0)
	{	name = tn;
		phoneNo = pno;
		next = NULL; 
	}
	void Print()
	{	cout<<name<<"--"<<phoneNo<<endl;	}
	//���Ե�get��set����....���ж���
};
class PhoneBook {//������ʽʵ��ͨѶ¼
	//....��������һЩ����
	//��ʾ���Ѳ���Ͳ�����д���ڲ��������ٱ���������ص��ã��������
public:
	Info Table[hmax];	//����ͷ������飬��Ӧ26����д��ĸ
	//���¶����������������Input����ӡPrint�����롢�ϲ�������
	//���������ǰ��˵��
};
//...PhoneBook���Ա����������ʵ�֣����б�д
//----������----
int main()
{	string tname;
	int i, tno;
	Info *p;
	PhoneBook pb;
	pb.Input(); //�����������ݣ���ʼ����һ��ͨѶ¼
	//������������
	for (i=0; i<2; i++)
	{	cin>>tname;
		p = pb(tname); //����()�������ʵ�ֲ���
		if (p)	p->Print(); //���ҳɹ��������ϵ����Ϣ
		else cout<<"����ʧ��"<<endl; //����ʧ�ܣ������ʾ��Ϣ
	}
	//һ�β���
	cin>>tname>>tno;
	Info temp(tname, tno);
	pb += temp; //����+=�������ʵ�ֲ�������ϵ��
	//ͨѶ¼�ϲ�
	PhoneBook pc;
	pc.Input(); //��ʼ���ڶ���ͨѶ¼
	pb = pb+pc; //����+�������ʵ�ֺϲ�
	
	pb.Print(); //������в������ͨѶ¼
	return 0;
}
����
��һ������n����ʾ��һ��ͨѶ¼��n����ϵ��

����n�У�ÿ������һ����ϵ�˵���Ϣ���������绰

�������У�ÿ������һ����ϵ�����������Ҹ���ϵ���Ƿ���ͨѶ¼�У��������Ӧ���

����һ�У�����һ����ϵ�˵���Ϣ���������绰��ִ�в������

����һ�У�����m����ʾ�ڶ���ͨѶ¼��m����ϵ��

����m�У�ÿ������һ����ϵ�˵���Ϣ���������绰

������Ϻ󣬰ѵ�һ��ͨѶ¼�͵ڶ���ͨѶ¼�ϲ�

�ٶ���ϵ����������Ӣ����ĸ��������ĸ��д��

���
����������ִ�й������
��������
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
