#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
 
int main(){
     
    int round,rounds;
    cin >> rounds;
    for(round=1;round<=rounds;++round){
        string Type;
        int n;
        cin >> Type >> n;
         
        int i;
        switch(Type[0]){
            case 'C':{
                string *p=new string[n];
                string s="A";
                for(i=0;i<n;++i){
                    cin >> *p;
                    if(i==n-1)
                        break;
                    ++p;
                }
                for(i=0;i<n;++i){
                    if(i==0){
                        if(*p>s){
                            s=*p;
                        }
                        continue;
                    }
                    --p;
                    if(*p>s){
                        s=*p;
                    }
                }
                cout << s << endl;
                break;
            }
             
             
            case 'I':{
                double avg,sum=0,temp;
                double *p=new double[n];
                for(i=0;i<n;++i){
                    cin >> *p;
                    if(i==n-1)
                        break;
                    ++p;
                }
                for(i=0;i<n;++i){
                    if(i==0){
                        sum+=*p;
                        continue;
                    }
                    --p;
                    sum+=*p;
                }
                avg=sum/n;
                printf("%g",avg);
                cout << endl;
                break;
            }
             
             
            case 'F':{
                double res;
                double *p=new double[n];
                for(i=0;i<n;++i){
                    cin >> *p;
                    res=*p;
                    if(i==n-1)
                        break;
                    ++p;
                }
                for(i=0;i<n;++i){
                    if(i==0){
                        if(*p<res)
                            res=*p;
                        continue;
                    }
                    --p;
                    if(*p<res)
                        res=*p;
                }
                printf("%g",res);
                cout << endl;
                break;
            }
        }
         
    }
    return 0;
}
