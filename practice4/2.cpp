#include<iostream>
using namespace std;
void find(int *num,int n,int &minIndex,int &maxIndex);
int main()
{
int t,n,max,min;
    cin>>t;
    while (t--)
    {
        cin>>n;
    int *p = new int[n];
        for(int i=0; i<n; ++i)
         cin>>*(p+i);
        find(p,n,min,max);
        cout<<"min="<<p[min]<<" minindex="<<min<<endl;
        cout<<"max="<<p[max]<<" maxindex="<<max<<endl;
        cout<<endl;
        delete [] p;
    }
    
}
void find(int *num,int n,int &minIndex,int &maxIndex)
{
int i;
    minIndex = maxIndex = 0;
    for(i=0; i<n; ++i)
    {
        if(num[i]>num[maxIndex])
         maxIndex = i;
        if(num[i]<num[minIndex])
         minIndex = i;
    }
}
/*
��Ŀ������
��д����void find(int *num,int n,int &minIndex,int &maxIndex)��������num(Ԫ��Ϊnum[0]��num[1]��...��num[n-1]����ȡ��Сֵ�����ֵ��Ԫ���±�minIndex,maxIndex��������ͬ��ֵ��ȡ��һ�����ֵ��±ꡣ��

����n����̬����n�������ռ䣬����n�����������øú������������Сֵ�����ֵ�±ꡣ���������ʽ��������

�ı亯��find���ܲ��Ʒ֡�


���룺
���Դ���

ÿ���������һ�У����ݸ���n�����n������


�����
ÿ���������������У��ֱ�����Сֵ�����ֵ�����±ꡣ�����ʽ�������������������֮���Կ��зָ���


�������룺
2
5 10 20 40 -100 0
10 23 12 -32 4 6 230 100 90 -120 15


���������
min=-100 minindex=3
max=40 maxindex=2

min=-120 minindex=8
max=230 maxindex=5


*/