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
题目描述：
编写函数void find(int *num,int n,int &minIndex,int &maxIndex)，求数组num(元素为num[0]，num[1]，...，num[n-1]）中取最小值、最大值的元素下标minIndex,maxIndex（若有相同最值，取第一个出现的下标。）

输入n，动态分配n个整数空间，输入n个整数，调用该函数求数组的最小值、最大值下标。最后按样例格式输出结果。

改变函数find功能不计分。


输入：
测试次数

每组测试数据一行：数据个数n，后跟n个整数


输出：
每组测试数据输出两行，分别是最小值、最大值及其下标。具体格式见样例。多组测试数据之间以空行分隔。


样例输入：
2
5 10 20 40 -100 0
10 23 12 -32 4 6 230 100 90 -120 15


样例输出：
min=-100 minindex=3
max=40 maxindex=2

min=-120 minindex=8
max=230 maxindex=5


*/