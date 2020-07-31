#include<iostream>
using namespace std;
struct SDate
{
    int year;
    int month;
    int day;
};
void sortt(SDate stu[], int n);
int main()
{
int t;
    cin>>t;
    SDate stu[50];
    for(int i=0; i<t; ++i)
    {
        cin>>stu[i].year>>stu[i].month>>stu[i].day;
    }
    sortt(stu, t);
    cout<<stu[1].year<<"-"<<stu[1].month<<"-"<<stu[1].day<<endl;
}
void sortt(SDate stu[], int n)
{
    SDate s;
    for(int i =0; i<n-1; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(stu[i].year > stu[j].year || 
              stu[i].year == stu[j].year && stu[i].month > stu[j].month ||
              stu[i].year == stu[j].year && stu[i].month == stu[j].month && stu[i].day > stu[j].day )
            {
                s = stu[i];
                stu[i] = stu[j];
                stu[j] = s;
            }
        }
    }
}