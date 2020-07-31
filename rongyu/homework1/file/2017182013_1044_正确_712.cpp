#include <iostream>
#include <cstring>
using namespace std;


int main()
{
   int t;
   cin>>t;
   while(t--){
        int m,n;
        cin>>m>>n;
        int **num = new int *[m];
        for (int i=0; i<m; i++)
            num[i] = new int [n];

        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
            cin>>num[i][j];
        /*for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
            cout<<num[i][j]<<" ";*/

        //int *p = &num[0][0];

        //cout<<&num[0][n-1]<<" "<<&num[0][n]<<dec<<" "<<&num[1][0]<<endl;

        int minNum = num[0][0];
        int maxNum = num[0][0];
        //cout<<minNum<<" "<<maxNum<<endl;

        //for(; p<&num[0][0]+m*n; p++){
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(minNum > num[i][j])
                   minNum = num[i][j];
                if(maxNum < num[i][j])
                   maxNum = num[i][j];
            }
        }
        cout<<minNum<<" "<<maxNum<<endl;
        for(int i=0; i<m; i++)
            delete []num[i];
        delete []num;
   }
   return 0;
}

