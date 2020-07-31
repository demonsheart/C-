#include <iostream>
using namespace std;
int main()
{
    int t, m, n;
    cin>>t;
    while(t-- > 0){
        cin>>m>>n;
        int **matrix = new int*[m];
        for(int i=0; i<m; i++)
            matrix[i] = new int[n];
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                cin>>matrix[i][j];

        int min = matrix[0][0], max = matrix[0][0];
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                if(matrix[i][j] < min)
                    min = matrix[i][j];
            }
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                if(matrix[i][j] > max)
                    max = matrix[i][j];
            }

        cout<<min<<" "<<max<<endl;
        for(int i=0; i<m; i++)
            delete []matrix[i];
        delete []matrix;
    }
	return 0;
}

