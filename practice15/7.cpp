#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class box
{
private:
    string no;
    int length, width, height;

public:
    box(string n = "NULL", int l = 0, int w = 0, int h = 0) : no(n), length(l), width(w), height(h) {}
    int operator-(box &r)
    {
        if (length <= r.length && width <= r.width)
        {
            if (height >= r.height)
                return width * length * r.height;
            else
                return width * length * height;
        }
        else
            return 0;
    }
    string getNo()
    {
        return no;
    }
};
int main()
{
    int t, l, w, h, max = 0;
    string no, no1, no2;
    vector<box> v;
    cin >> t;
    while (t--)
    {
        cin >> no >> l >> w >> h;
        box tmp(no, l, w, h);
        v.push_back(tmp);
    }
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = i + 1; j < v.size(); ++j)
        {
            if (max < v[i] - v[j])
            {
                max = v[i] - v[j];
                no1 = v[i].getNo();
                no2 = v[j].getNo();
            }
            if (max < v[j] - v[i])
            {
                max = v[j] - v[i];
                no1 = v[j].getNo();
                no2 = v[i].getNo();
            }
        }
    }
    cout << no1 << "���ӷ���" << no2 << "���������ˮ��࣬Ϊ" << max << "��";
}

/*
��Ŀ����
������������࣬����4����Ա����š��������ߣ�(�����ڵ��ڿ�)�Ҹú����ݻ���Ϊ�������������ÿ�������������浹��ˮ���ض��塰-���������ʵ�����һ�����ӷ�����һ�����������������ˮ����������������ˮ�����������������ı���Լ����ˮ�����(��ܰ��ʾ����һ����������������)������������Ļ�����ʽ���£�

class box{

private string num;
private int length;
private int width;
private int height;
��
}
����
��һ������Բ����ĸ���
�ڶ��п�ʼ��������ÿ��Բ����ı�š���������
���
���ˮ��������Բ���������ı���Լ����ˮ�����

��������
3
01 10 10 12
02 12 9 8
03 12 10 8
�������
02���ӷ���03���������ˮ��࣬Ϊ864��
*/