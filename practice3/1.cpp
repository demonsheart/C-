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
��Ŀ������
�趨���»��ʳ���

��Ԫ����Ϊ6.2619����ʾ1��Ԫ�һ�6.2619Ԫ�����

ŷԪ����Ϊ6.6744����ʾ1ŷԪ�һ�6.6744Ԫ�����

��Ԫ����Ϊ0.0516����ʾ1Ԫ��Ԫ�һ�0.0516Ԫ�����

�۱һ���Ϊ0.8065����ʾ1Ԫ�۱ұҶһ�0.8065Ԫ�����

����һ������ָ�룬��������ָ��ָ��ͬ�Ļ��ʣ�Ȼ���������ֻ��Ҷһ�Ϊ����ҵ�����

Ҫ�󣺲���ֱ��ʹ�û��ʳ������м��㣬����ʹ�ó���ָ�룬ֻ��ʹ��һ��ָ��


���룺
����һ��t��ʾ��t������ʵ��

ÿ��������һ����ĸ����ʾ�������ͣ�Ȼ��������һ�����֣���������������ʾ��������

D��ʾ��Ԫ��E��ʾŷԪ��Y��ʾ��Բ��H��ʾ�۱�

��������t��


�����
ÿ������һ�������������������4λС��

��C++�У����ָ�����ȵĲο��������£�

#include <iostream>

#include <iomanip> //����������ͷ�ļ�

using namespace std;

void main( )

{ double a =3.141596;

  cout<<fixed<<setprecision(3)<<a<<endl;  //���С�����3λ

}


�������룺
4
Y 10000
D 88.3
H 200
E 73.1


���������
516.0000
552.9258
161.3000
487.8986


*/