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
/*
��Ŀ����
����һ��ƽ���ϵĵ�C2D�࣬������һ��getDistance()�ĳ�Ա����������õ㵽ԭ��ľ��룻��C2D����������ά�ռ�ĵ�C3D�࣬����getDistance()��Ա��������õ㵽ԭ��ľ��롣�Էֱ�����һ��C2D��C3D�Ķ��󣬼������ǵ�ԭ��ľ��롣
��ά�ռ�����㣨x, y, z���ͣ�x1, y1, z1���ľ��빫ʽ���£�
[(x-x1)^2+(y-y1)^2+(z-z1)^2]^(1/2) 
����
��һ�ж�ά�����λ��

�ڶ�����ά�����λ��1

��������ά�����λ��2

���
��һ�ж�ά�����λ�õ�ԭ��ľ���

�ڶ�����ά�����λ��1��ԭ��ľ���

��������ά�����λ��2��ԭ��ľ���

��������ά�����λ��2��ֵ����ά���������󣬶�ά����㵽ԭ��ľ���

��������
3 4
3 4 5
6 8 8
�������
5
7.07107
12.8062
10
*/