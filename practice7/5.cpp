#include<iostream>
using namespace std;
class CChickProblem
{
private:
    int money,num,x,y,z,result;
    int *px,*py,*pz;
public:
    CChickProblem(int a, int b);
    ~CChickProblem()
    {
        delete [] px;
        delete [] py;
        delete [] pz;
    }
    void findSolution();
    void printSolution();
};

CChickProblem::CChickProblem(int a, int b)
{
    num = a;
    money = b;
    px = new int[num];
    py = new int[num];
    pz = new int[num];
    for(int i=0; i<num; ++i)
     *(px+i)=*(py+i)=*(pz+i) = 0;
}
void CChickProblem::findSolution()
{
    int x,y,z,i=0;
    for(x = 1; x <= money/5; x++)
    {     
        for(y = 0; y <= money/3; y++)
        {
            z = num-x-y;
            if(z%3 == 0 && 5*x + 3*y + z/3 == money)
            {    
                *(px+i) = x;
                *(py+i) = y;
                *(pz+i) = z;
                i++;
            }
        }
    }
    result = i;
}
void CChickProblem::printSolution()
{
    cout<<result<<endl;
    for (int i = 0;*(pz+i) != 0; i++)
    {
        cout<<*(px+i)<<" "<<*(py+i)<<" "<<*(pz+i)<<endl;
    }
    
}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        CChickProblem s(a,b);
        s.findSolution();
        s.printSolution();
    }
    return 0;
}