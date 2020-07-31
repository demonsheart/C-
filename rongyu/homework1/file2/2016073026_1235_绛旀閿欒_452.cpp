#include <iostream>
#include <iomanip>

using namespace std;

class Geometry{
public:
    virtual double getArea()=0;
};

class Rect:public Geometry{
    double chang,kuan;
public:
    Rect(double c,double k):chang(c),kuan(c){}
    virtual double getArea(){return chang*kuan;}
};

class Circle:public Geometry{
    double radius;
public:
    Circle(double r):radius(r){}
    virtual double getArea(){return 3.14*radius*radius;}
};

class TotalArea{
public:
    static void computerTotalArea(Geometry** t,int n){
        double max=t[0]->getArea();
        for(int i=1;i<n;i++)
            if(t[i]->getArea()>max)
                max=t[i]->getArea();
        cout<<"最大面积="<<fixed<<setprecision(2)<<max<<endl;
    }
};

int main()
{
    int n;
    cin>>n;
    Geometry** t =new Geometry*[n];
    double type,r,c,k;
    for(int i=0;i<n;i++){
        cin>>type;
        if(type==1){
            cin>>c>>k;
            t[i]=new Rect(c,k);
        }
        else if(type==2){
            cin>>r;
            t[i]=new Circle(r);
        }
    }
    TotalArea::computerTotalArea(t,n);
    return 0;
}

