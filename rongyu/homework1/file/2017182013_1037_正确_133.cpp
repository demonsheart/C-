#include <iostream>
using namespace std;
void I(int n)
{
    int *num = new int [n];
    for(int i=0; i<n; i++)
        cin>>num[i];
    int sum = 0;
    int *p = num;
    for(; p<&num[0]+n; p++){
        sum += *p;
    }
    cout<<(int)sum/n<<endl;

}
void C(int n)
{
    char *num = new char [n];
    for(int i=0; i<n; i++)
        cin>>num[i];
    char *p = num;
    char max_c = *p;
    for(; p<&num[0]+n; p++)
        if(max_c<*p)
        max_c =*p;
    cout<<max_c<<endl;

}
void F(int n)
{
    float *num = new float[n];
    for(int i=0; i<n; i++)
        cin>>num[i];
    float *p = num;
    float min_f = *p;
    for(; p<&num[0]+n; p++)
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
            case 73:I(n);
            break;
            case 67: C(n);
            break;
            case 70: F(n);
            break;
        }
    }
    return 0;
}

