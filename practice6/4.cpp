#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class CHealth
{
    string name;
    float height;
    float weight;
    float waist;

public:
    int BMI();
    double rate();
    CHealth(string n, float a, float b, float c);
    void print();
};
int CHealth::BMI()
{
    int b;
    b = int(weight / (height * height) + 0.5);
    return b;
}
double CHealth::rate()
{
    double a, b;
    a = waist * 0.74;
    b = weight * 0.082 + 34.89;
    return (a - b) / weight;
}
CHealth::CHealth(string n, float a, float b, float c)
{
    name = n;
    height = a;
    weight = b;
    waist = c;
}

void CHealth::print()
{
    cout << name << "的BMI指数为" << BMI() << "--体脂率为" << fixed << setprecision(2) << rate() << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a;
        float b, c, d;
        cin >> a >> b >> c >> d;
        CHealth h(a, b, c, d);
        h.print();
    }
    return 0;
}
/*
题目描述
评估成年人身体健康有多个指标，包括BMI、体脂率等
设计一个身体健康类，包含私有成员：姓名、身高(米)、体重(公斤)，腰围(厘米)，实现两个公有方法如下：
BMI方法，返回BMI数值(整数)，计算公式BMI= 体重 / 身高的平方
体脂率方法，返回体脂率数值(浮点数)，计算过程如下：
1）参数a=腰围（cm）×0.74
2）参数b=体重（kg）×0.082+34.89
3）体脂肪重量（kg）=a－b
4）体脂率 = 体脂肪重量÷体重
其它方法根据需要自行定义
输入
第一行输入t表示有t个测试实例
第二行起，每行输入四个参数：姓名、身高、体重，腰围
依次输入t行
输出
输出t行，每行输入一个实例的BMI和体脂率，小数数值精确到小数点后2位，用空格隔开
样例输入
2
张高 1.85 78.5 85.2
李圆 1.55 67.6 77.3
样例输出
张高的BMI指数为23--体脂率为0.28
李圆的BMI指数为28--体脂率为0.25
*/