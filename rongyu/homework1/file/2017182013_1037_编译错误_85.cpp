#include <iostream>
using namespace std;
void I(int n)
{
    int *p = new int [n];
    int sum = 0;
    for(; p<&p[0]+n; p++){
        sum += *p;
    }
    cout<<(int)sum/n<endl;

}
void C(int n)
{
    char *p = new char [n];
    char max_c = p[0];
    for(; p<&p[0]+n; p++)
        if(max_c<*p)
        max_c =*p;
    cout<<max_c<<endl;

}
void F(int n)
{
    float *p = new float[n];
    float min_f = p[0];
    for(; p<&p[0]+n; p++)
        if(min_f>*p)
        min_f =*p;
    cout<<min_f<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        char Name;
        cin>>Name;
        int n;
        cin>>n;
        switch(Name){
            case 'I':I(n);
            break;
            case 'C': C(n);
            break;
            case 'F': F(n);
            break;
        }
    }
    return 0;
}

