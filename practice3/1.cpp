#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const float D = 6.2619;
    const float E = 6.6744;
    const float Y = 0.0516;
    const float H = 0.8065;
    const float *p[4] = {&D, &E, &Y, &H};
    int t;
    char c;
    float n, result;
    cin >> t;
    while (t--)
    {
        cin >> c >> n;
        if (c == 'D')
        {
            result = n * (*p[0]);
            cout << fixed << setprecision(4) << result << endl;
        }
        if (c == 'E')
        {
            result = n * (*p[1]);
            cout << fixed << setprecision(4) << result << endl;
        }
        if (c == 'Y')
        {
            result = n * (*p[2]);
            cout << fixed << setprecision(4) << result << endl;
        }
        if (c == 'H')
        {
            result = n * (*p[3]);
            cout << fixed << setprecision(4) << result << endl;
        }
    }
    return 0;
}
/*
题目描述：
设定以下汇率常量

美元汇率为6.2619，表示1美元兑换6.2619元人民币

欧元汇率为6.6744，表示1欧元兑换6.6744元人民币

日元汇率为0.0516，表示1元日元兑换0.0516元人民币

港币汇率为0.8065，表示1元港币币兑换0.8065元人民币

定义一个常量指针，根据需求指针指向不同的汇率，然后计算出各种货币兑换为人民币的数量

要求：不能直接使用汇率常量进行计算，必须使用常量指针，只能使用一个指针


输入：
输入一个t表示有t个测试实例

每行先输入一个字母，表示货币类型，然后再输入一个数字（正浮点数），表示货币数量

D表示美元，E表示欧元，Y表示日圆，H表示港币

依次输入t行


输出：
每行输出兑换后的人民币数量，保留4位小数

在C++中，输出指定精度的参考代码如下：

#include <iostream>

#include <iomanip> //必须包含这个头文件

using namespace std;

void main( )

{ double a =3.141596;

  cout<<fixed<<setprecision(3)<<a<<endl;  //输出小数点后3位

}


样例输入：
4
Y 10000
D 88.3
H 200
E 73.1


样例输出：
516.0000
552.9258
161.3000
487.8986


*/