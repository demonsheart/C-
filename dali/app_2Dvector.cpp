#include <iostream>
#include <vector>
using namespace std;
 
void classify(vector<int>& v,int mode, vector<vector<int> >& vv)
{
	for (vector<int>::const_iterator iter = v.begin(); iter != v.end(); iter++)
	{
		int index = (*iter) % mode;//ȡ����
		vv[index].push_back(*iter);//����Ԫ��
	}
}
 
int main()
{
	int mode;//ģ
	cin>>mode;
	vector<vector<int> >vv(mode);//������һ����mode�еĶ�ά����
	int n;//n������
	cin>>n;
	vector<int>v(n);//һά����,����n������
	for (int i = 0;i < n; i++)
		cin>>v[i];
 
	//��ʼ����
	classify(v,mode,vv);
 
	for (int i = 0; i < mode; i++)
	{
		cout<<"������ "<<i<<":";
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
}//Ӧ�����ӣ�����һ��n�������������Ƿֱ����ѡ����һ������(��Ϊģ)������������Щ�������顣