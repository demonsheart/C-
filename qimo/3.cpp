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
    T ptxt[100]; //����
    T ctxt[100]; //����
    T key;       //��Կ
    int len;     //����
public:
    Cryption(T tk, T tt[], int tl) : key(tk), len(tl) //�������ζ�Ӧ��Կ�����ġ�����
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
    void Print() //��ӡ���������
    {
        int i;
        for (i = 0; i < len - 1; i++)
            cout << ctxt[i] << " ";
        cout << ctxt[i] << endl;
    }
};
//֧���������͵�������
int main()
{
    int i;
    int length; //����
    int ik, itxt[100];
    double dk, dtxt[100];
    char ck, ctxt[100];
    //��������
    cin >> ik >> length;
    for (i = 0; i < length; i++)
        cin >> itxt[i];
    Cryption<int> ic(ik, itxt, length);
    ic.Encrypt();
    ic.Print();
    //����������
    cin >> dk >> length;
    for (i = 0; i < length; i++)
        cin >> dtxt[i];
    Cryption<double> dc(dk, dtxt, length);
    dc.Encrypt();
    dc.Print();
    //�ַ�����
    cin >> ck >> length;
    for (i = 0; i < length; i++)
        cin >> ctxt[i];
    Cryption<char> cc(ck, ctxt, length);
    cc.Encrypt();
    cc.Print();

    return 0;
}
/*
��Ŀ����
���ܻ��ư������ġ����ġ���Կ������Կ�����Ľ��м��ܺ�͵õ����ġ�
�ڹŵ���ܻ����У�ƫ��ֵ��һ�ֳ����ķ��������ܹ���Ϊ
1������֪�������ҳ����ֵ
2�������ֵ��ȥ������ֵ���õ���Ӧ��ƫ��ֵ
3��ƫ��ֵ������Կ�͵õ�����
��������Ϊ1 2 3 4 5����Կ��10�����ܹ���Ϊ��
1���ҳ����ĵ����ֵ��5
2����5��ȥ���ĵĸ�����ֵ���õ�ƫ��ֵ4 3 2 1 0
3����ƫ��ֵ������Կ���õ�����14 13 12 11 10
����һ������ģ�壬��Ϊmax������������������鳤�ȣ�����ֵ�������е����ֵ��Ҫ��֧�����������������ַ��������͡�

����ģ�嶨��һ�������࣬�����ĸ����ԣ����ġ����ġ���Կ�����ȣ�ǰ�������Զ���ͬһ�����ͣ�������������������ָ���ĵĳ��ȡ�
��ģ������������졢���ܡ���ӡ��˵�����£�
1�������ǵ��ú���ģ��max�õ��������ֵ������ǰ��ķ���ʹ�����ֵ����Կ���м��ܣ��õ�����
2����ӡ���������
Ҫ����ģ��֧�����������������ַ��������͡�
�ο���������˼�������棨ֻ֧���������ͣ�����������֧�������������ͣ�������Ҫ��
1������Ҫ���д����ģ��max
2��ʹ����ģ�巽�������������棬���������κ����ԺͲ���������������ʵ�ֹ��캯���ͼ��ܷ���
3���������������κ��޸�
�������������Զ�����public�����������˼���C++����ʵ������Ҫ��
----�ο�����----

//ֻ֧���������͵ļ��������
class Cryption { 
	int ptxt[100];	//����
	int ctxt[100];	//����
	int key;	//��Կ
	int len;	//����
public:
	Cryption(int tk, int tt[], int tl); //�������ζ�Ӧ��Կ�����ġ�����
	void Encrypt(); //����
	void Print() //��ӡ���������
	{	int i;
		for (i=0; i<len-1; i++)
			cout<<ctxt[i]<<" ";
		cout<<ctxt[i]<<endl;
	}
};
//֧���������͵�������
int main()
{	int i;
	int length; //����
	int ik, itxt[100];
	double dk, dtxt[100];
	char ck, ctxt[100];
	//��������
	cin>>ik>>length;
	for (i=0; i<length; i++)
		cin>>itxt[i];
	Cryption<int> ic(ik, itxt, length);
	ic.Encrypt();
	ic.Print();
	//����������
	cin>>dk>>length;
	for (i=0; i<length; i++)
		cin>>dtxt[i];
	Cryption<double> dc(dk, dtxt, length);
	dc.Encrypt();
	dc.Print();
	//�ַ�����
	cin>>ck>>length;
	for (i=0; i<length; i++)
		cin>>ctxt[i];
	Cryption<char> cc(ck, ctxt, length);
	cc.Encrypt();
	cc.Print();
	
	return 0;
}
����
��һ�������������͵���Ϣ��������Կ�����ȡ�����
�ڶ������븡�������͵���Ϣ��������Կ�����ȡ�����
�����������ַ����͵���Ϣ��������Կ�����ȡ�����
���
���зֱ�����������͵�����

��������
10 5 1 2 3 4 5
11.11 4 1.1 2.2 3.3 4.4
O 3 a b c
�������
14 13 12 11 10
14.41 13.31 12.21 11.11
Q P O
*/
