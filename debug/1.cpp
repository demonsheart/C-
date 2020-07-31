#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 3; ++i)
        if (i == 2)
            break;
    cout << i << endl;
}