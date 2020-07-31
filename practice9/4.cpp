#include <iostream>
#include <cstring>
using namespace std;
class television
{
private:
    int voice, no;
    string mode;
    static int tv_num, dvd_num;

public:
    television(int n);
    int getVoice() { return voice; };
    string getMode() { return mode; };
    int getNo() { return no; };
    friend void control(television &t, int k, int x, int w);
};
int television::tv_num = 0;
int television::dvd_num = 0;
television::television(int n)
{
    no = n;
    voice = 50;
    mode = "TV";
}
void control(television &t, int k, int x, int w)
{
    if (k == 1)
        t.mode = "TV";
    if (k == 2)
        t.mode = "DVD";
    t.no = x;
    t.voice += w;
    if (t.voice < 0)
        t.voice = 0;
    if (t.voice > 100)
        t.voice = 100;
}
int main()
{
    int n, t, i, k, x, w, num = 0;
    cin >> n >> t;
    television *p[n];
    for (int i = 0; i < n; i++)
        p[i] = new television(i + 1);
    while (t--)
    {
        cin >> i >> k >> x >> w;
        control(*p[i - 1], k, x, w);
        cout << "第" << i << "号电视机--" << p[i - 1]->getMode();
        cout << "模式--频道" << p[i - 1]->getNo() << "--音量" << p[i - 1]->getVoice() << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i]->getNo() == 99)
            num++;
    }
    cout << "播放电视的电视机数量为" << n - num << endl;
    cout << "播放DVD的电视机数量为" << num << endl;
    for (int i = 0; i < n; i++)
        delete p[i];
}