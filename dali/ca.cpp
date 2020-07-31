#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    float i, xi;
    while (cin >> i >> xi)
        cout << i / (cos(xi) * cos(xi)) << endl;
}