#include<iostream>
using namespace std;
class lottery
{
private:
    int group1[6];
    int num;
    int** groupn;
public:
    lottery(int *p, int n);
    lottery(lottery &p);
    void print();
    ~lottery();
};

lottery::lottery(int *p, int n)
{
    num  = n;
    for (int i = 0; i < 6; i++)
    {
        group1[i] = p[i];
    }
    groupn = new int*[num];
    for (int i = 0; i < num; i++)
    {
        groupn[i] = new int[6];
    }
}
lottery::lottery(lottery &p)
{
    num = p.num;
    for (int i = 0; i < 6; i++)
    {
        group1[i] = p.group1[i];
    }
    groupn = new int*[num];
    for (int i = 0; i < num; i++)
    {
        groupn[i] = new int[6];
    }
    groupn[0][0] = group1[5] + 1;
    for (int i = 1; i < 6; i++)
    {
        groupn[0][i] = group1[i-1] + 1;
    }
    
    for(int i = 1;i < num;i++)
    {
        groupn[i][0] = groupn[i-1][5] + 1;
        for(int j = 1;j < 6;j++)
        {
            groupn[i][j] = groupn[i-1][j-1] + 1;
        }
    }
}
void lottery::print()
{
    int i,j;
    for (int i = 0; i < 5; i++)
     cout<<group1[i]<<" ";
    cout<<group1[5]<<endl;
    for ( i = 0; i < num; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            cout<<groupn[i][j]<<" ";
        }
        cout<<groupn[i][5]<<endl;
    }
}
lottery::~lottery()
{
    for (int i = 0; i < num; i++)
    {
        delete [] groupn[i];
    }
    delete [] groupn;
}

int main()
{
    int t,p[6],num;
    cin>>t;
    while (t--)
    {
        for (int i = 0; i < 6; i++)
        {
            cin>>p[i];
        }
        cin>>num;
        lottery l1(p,num);
        lottery l2(l1);
        l2.print();
    }
    return 0;
}