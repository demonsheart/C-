#include <iostream>
#include <iomanip>
using namespace std;
class Geometry
{
public:
    virtual double getArea() = 0;
};
class Rect : public Geometry
{
private:
    double lenth, width;

public:
    Rect(double l, double w) : lenth(l), width(w) {}
    double getArea() { return lenth * width; }
};

class Circle : public Geometry
{
private:
    double r;

public:
    Circle(double rr) : r(rr) {}
    double getArea() { return 3.14 * r * r; }
};

class TotalArea
{
public:
    static void computerTotalArea(Geometry **t, int n)
    {
        double ma = t[0]->getArea();
        for (int i = 0; i < n; ++i)
        {
            if (ma < t[i]->getArea())
                ma = t[i]->getArea();
        }
        cout << "������=" << fixed << setprecision(2) << ma << endl;
    }
};

int main()
{
    int n, flag, i = 0;
    double a, b;

    cin >> n;

    Geometry **p = new Geometry *[n];
    while (n--)
    {
        cin >> flag;
        if (flag == 1)
        {
            cin >> a >> b;
            p[i++] = new Rect(a, b);
        }
        else if (flag == 2)
        {
            cin >> a;
            p[i++] = new Circle(a);
        }
    }
    TotalArea t;
    t.computerTotalArea(p, i);
    return 0;
}
/*
��Ŀ����
���д���򣬴�ͼ���������ҳ���������������������ʾ��

class Geometry{

public:

    virtual double getArea()=0; //����������������С�������λ

};

��GeometryΪ���࣬������Rect�����Σ����ݳ�ԱΪ���Ϳ���Circle��Բ�����ݳ�ԱΪ�뾶�������࣬��дgetArea()��������������������Ҫ���⡣

дһ��TotalArea�࣬����ṹ���£�

class TotalArea{

public:

   static void computerTotalArea(Geometry** t,int n)��//tΪ�������ָ�룬ָ��һ�����ද̬���飬�����ÿ��Ԫ��ָ��һ������ͼ�Σ�nΪ����Ĵ�С

};

���������ĸ��ಢ��д�����������������λС����

����
��һ�б�ʾ���Դ������ӵڶ��п�ʼ��ÿ����������ռһ�У�ÿ�������������£�ͼ�����ͣ�1ΪRect(����)��2ΪCircle(Բ)����������Ϣ��Rect�ǳ��Ϳ�Circle�ǰ뾶����

���
���ͼ�ε����
��������
3
1 3 4
2 5
2 6
�������
������=113.04
*/