#include <iostream>
using namespace std;
class CPoint
{
protected:
    int x, y, dir;

public:
    CPoint(int xx, int yy, int d) : x(xx), y(yy), dir(d) {}
};
class CHole : public CPoint
{
private:
    /* data */
public:
    CHole(int xx, int yy, int d) : CPoint(xx, yy, d) {}
};
class CTriangle : public CPoint
{
private:
    /* data */
public:
    CTriangle(int xx, int yy, int d) : CPoint(xx, yy, d) {}
    CTriangle operator++()
    {
        
    }
};

int main()
{
}