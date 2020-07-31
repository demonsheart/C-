#include <iostream>
using namespace std;
class CVector
{
private:
    int *data;
    int n;

public:
    CVector()
    {
        n = 5;
        data = new int[5];
        for (int i = 0; i < n; ++i)
            data[i] = i;
    }
    CVector(int n1, int *p)
    {
        n = n1;
        data = new int[n1];
        for (int i = 0; i < n; ++i)
            data[i] = p[i];
    }
    void print()
    {
        int i;
        for (i = 0; i < n - 1; ++i)
            cout << data[i] << " ";
        cout << data[i] << endl;
    }
    ~CVector() { delete[] data; }
};

int main()
{
    int n;
    int *a;

    CVector v1;
    v1.print();

    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    CVector v2(n, a);
    v2.print();

    delete[] a;
    return 0;
}