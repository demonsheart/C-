#include<iostream>
using namespace std;
void sort(int A[3]);
int main(){
    int T,A[3],B[3];
    cin>>T;
    for(int i=1; i<=T; ++i){
        cin>>A[0]>>A[1]>>A[2]>>B[0]>>B[1]>>B[2];
        sort(A);
        sort(B);
        if(A[0]>=B[0]&&A[1]>=B[1]&&A[2]>=B[2]||A[0]<=B[0]&&A[1]<=B[1]&&A[2]<=B[2])
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
        
    }
}
void sort(int A[3]){
            for(int j=0; j<=1; ++j){
            for(int k=j+1; j<=2; ++j){
                if(A[j]>A[k]){
                    int c;
                    c = A[j];
                    A[j] = A[k];
                    A[k] = c;
                }
            }
        }
} 