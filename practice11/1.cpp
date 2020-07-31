#include <iostream>
#include <cmath>
using namespace std;
class C2D
{
protected:
    float x, y;

public:
    C2D(float a, float b) : x(a), y(b) {}
    virtual float getDistance()
    {
        return sqrt(x * x + y * y);
    }
};

class C3D : public C2D
{
private:
    float z;

public:
    C3D(float a, float b, float c) : C2D(a, b), z(c) {}
    float getDistance()
    {
        return sqrt(x * x + y * y + z * z);
    }
};

int main()
{
    float a, b, c;
    cin >> a >> b;
    C2D s1(a, b);
    cout << s1.getDistance() << endl;
    cin >> a >> b >> c;
    C3D s2(a, b, c);
    cout << s2.getDistance() << endl;
    cin >> a >> b >> c;
    C3D s3(a, b, c);
    cout << s3.getDistance() << endl;
    cout << ((C2D)s3).getDistance() << endl;
    return 0;
}