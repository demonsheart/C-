#include <iostream>
using namespace std;
class CPoint
{
protected:
    float x, y;

public:
    CPoint(float a, float b) : x(a), y(b) {}
};

class CCircle : public CPoint
{
protected:
    float r;

public:
    CCircle(float a, float b, float rr) : CPoint(a, b), r(rr) {}
    float getArea() { return 3.14 * r * r; }
};

class CCylinder : public CCircle
{
private:
    float h;

public:
    CCylinder(float a, float b, float rr, float hh) : CCircle(a, b, rr), h(hh) {}
    float getVolume() { return 3.14 * r * r * h; }
};

int main()
{
    float a, b, rr, hh;

    cin >> a >> b >> rr;
    CCircle s1(a, b, rr);
    cout << "Circle:(" << a << "," << b << ")," << rr << endl;
    cout << "Area:" << s1.getArea() << endl;

    cin >> a >> b >> rr >> hh;
    CCylinder s2(a, b, rr, hh);
    cout << "Cylinder:(" << a << "," << b << ")," << rr << "," << hh << endl;
    cout << "Volume:" << s2.getVolume() << endl;

    return 0;
}
/*
��Ŀ����
����һ��CPoint���࣬�������ݳ�Աx,y������㣩��

��CPointΪ���࣬������һ��Բ����CCircle���������ݳ�Աr(�뾶����һ������Բ����ĳ�Ա������

����CCircle��Ϊֱ�ӻ��࣬������һ��Բ������CCylinder���������ݳ�Աh(��)��һ����������ĳ�Ա������

����Բ��Բ������󣬵��ó�Ա��������������������������

����
����Բ��Բ��λ�á��뾶

����Բ����Բ��λ�á��뾶����

���
���Բ��Բ��λ�� �뾶

���Բ���

���Բ�����Բ��λ�� �뾶 ��

���Բ�������

��������
0 0 1
1 1 2 3
�������
Circle:(0,0),1
Area:3.14
Cylinder:(1,1),2,3
Volume:37.68
*/