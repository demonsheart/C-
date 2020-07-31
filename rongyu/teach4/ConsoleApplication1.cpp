#include <iostream>
#include "clist.h"
using namespace std;

int main()
{
    clist  l;

    student s1("liming", 10001);
    l.push_front(s1);

    student s2("wangwu", 10002);
    l.push_front(s2);

    student s3("qianliu", 10003);
    l.push_front(s3);

    //begin to end
    clist::iterator1  it;
    for (it = l.begin(); it != l.end(); ++it)
        it->display();

    cout << "------end to begin------" << endl;
    it = l.end();
    for (--it; it != l.end(); --it)
        it->display();
    system("pause");
}
