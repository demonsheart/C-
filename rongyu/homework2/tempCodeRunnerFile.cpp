#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "----------------------------------------------------------------------------------------------------------------" << endl;
    // 14 9 13
    cout << setiosflags(ios::left) << setw(10) << "student_no" << resetiosflags(ios::left) // 用完之后清除
         << setiosflags(ios::right) << setw(9) << "name" << setw(12) << "phone"
         << setw(18) << "dormitory"
         << setw(15) << "class"
         << setw(30) << "remark"
         << resetiosflags(ios::right) << endl;
    cout << "----------------------------------------------------------------------------------------------------------------" << endl;
    string no[] = {"2019151059", "2019151060", "2019151061", "2019151062", "2019151063"};
    string name[] = {"刘备", "关羽", "张飞", "马超", "赵云"};
    string phone[] = {"11111111111", "22222222222", "33333333333", "44444444444", "55555555555"};
    string dorm[] = {"红豆斋C1101", "紫轩斋C0145", "聚翰斋C2012", "春笛B347", "夏至A1105"};
    string _class[] = {"计算机科学与技术03", "电子信息工程03", "软件工程05", "软件工程01", "软件工程02"};
    string remark[] = {"穿越时空的爱恋", "以凛冬的名义，冲锋", "我有盾，开大", "西凉插秧王", "枪如惊雷，照一身肝胆"};
    for (int i = 0; i < 5; ++i)
    {
        cout << setiosflags(ios::left) << setw(10) << no[i] << resetiosflags(ios::left)
             << setiosflags(ios::right) << setw(9) << name[i] << setw(15) << phone[i]
             << setw(16) << dorm[i]
             << setw(20) << _class[i]
             << setw(30) << remark[i]
             << resetiosflags(ios::right) << endl;
    }
    cout << "----------------------------------------------------------------------------------------------------------------" << endl;
}