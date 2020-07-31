#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int t;
    
    cin >> t;
    while (t--) {
        char ch;
        
        cin >> ch;
        switch (ch) {
            case 'C': {
                int n;
                
                cin >> n;
                char *arr = new char[n];
                
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                
                char maxElement = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > maxElement) {
                        maxElement = arr[i];
                    }
                }
                printf("%c\n", maxElement);
                delete []arr;
                
                break;
            }
            
            case 'I': {
                int n;
                int sum = 0;
                
                cin >> n;
                int *arr = new int[n];
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("%d\n", sum/n);
                delete []arr;
                
                break;
            }
            case 'F': {
                int n;
                
                cin >> n;
                float *arr = new float[n];
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                
                float minElement = arr[0];
                for (int i = 1; i < n; i++) {
                    if (minElement > arr[i]) {
                        minElement = arr[i];
                    }
                }
                printf("%g\n", minElement);
                delete []arr;
                break;
            }
        }
    }
    
    
    return 0;
}
