#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main()
{
    int t,m;
    cin >> t;
    char m1[]="January";
    char m2[]="February";
    char m3[]="March";
    char m4[]="April";
    char m5[]="May";
    char m6[]="June";
    char m7[]="July";
    char m8[]="August";
    char m9[]="September";
    char m10[]="October";
    char m11[]="November";
    char m12[]="December";

    char *p[12]={m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12};
    while (t--)
    {
        cin >> m;
        switch(m)
        {
            case 1:cout << p[0]<<endl;break;
            case 2:cout << p[1]<<endl;break;
            case 3:cout << p[2]<<endl;break;
            case 4:cout << p[3]<<endl;break;
            case 5:cout << p[4]<<endl;break;
            case 6:cout << p[5]<<endl;break;
            case 7:cout << p[6]<<endl;break;
            case 8:cout << p[7]<<endl;break;
            case 9:cout << p[8]<<endl;break;
            case 10:cout << p[9]<<endl;break;
            case 11:cout << p[10]<<endl;break;
            case 12:cout << p[11]<<endl;break;
            default:cout << "error" << endl;
        }
    }
    return 0;
}
