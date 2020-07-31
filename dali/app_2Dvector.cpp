#include <iostream>
#include <vector>
using namespace std;
 
void classify(vector<int>& v,int mode, vector<vector<int> >& vv)
{
	for (vector<int>::const_iterator iter = v.begin(); iter != v.end(); iter++)
	{
		int index = (*iter) % mode;//取余数
		vv[index].push_back(*iter);//插入元素
	}
}
 
int main()
{
	int mode;//模
	cin>>mode;
	vector<vector<int> >vv(mode);//定义了一个有mode行的二维向量
	int n;//n个整数
	cin>>n;
	vector<int>v(n);//一维向量,保存n个整数
	for (int i = 0;i < n; i++)
		cin>>v[i];
 
	//开始分类
	classify(v,mode,vv);
 
	for (int i = 0; i < mode; i++)
	{
		cout<<"余数是 "<<i<<":";
		if(vv[i].empty())
			cout<<endl;
		else
		{
			for (vector<int>::const_iterator p = vv[i].begin(); p != vv[i].end(); p++)
				cout<<*p<<" ";
			cout<<endl;
		}
	}
	return 0;
}//应用例子：输入一个n个整数，将他们分别除以选定的一个整数(称为模)，按余数将这些整数分组。