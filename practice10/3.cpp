#include <iostream>
#include <string>
using namespace std;
class Remote;
class Tv
{
private:
    string state;
    int volume;
    int maxchannel;
    int channel;
    string mode;
    string input;

public:
    friend class Remote;
    Tv(string &of, int v, int ch, string &md, string &ip);
    void onoff()
    {
        if (state == "on")
            state = "off";
        else if (state == "off")
            state = "on";
    }
    bool ison() const { return state == "on"; }
    bool volup()
    {
        if (volume < 20)
        {
            volume++;
            return true;
        }
        return false;
    }
    bool voldown()
    {
        if (volume > 0)
        {
            volume--;
            return true;
        }
        return false;
    }
    void chanup()
    {
        if (channel < 100)
            channel++;
    }
    void chandown()
    {
        if (channel > 0)
            channel--;
    }
    void set_mode()
    {
        if (mode == "Cable")
            mode = "Antenna";
        else if (mode == "Antenna")
            mode = "Cable";
    }
    void set_input()
    {
        if (input == "VCR")
            input = "TV";
        else if (input == "TV")
            input = "VCR";
    }
    void settings() const
    {
        cout << state << " " << volume << " " << channel << " " << mode << " " << input << endl;
    }
};
Tv::Tv(string &of, int v, int ch, string &md, string &ip)
{
    maxchannel = 100;
    state = of;
    volume = v;
    if (volume < 0 || volume > 20)
        volume = 0;
    channel = ch;
    mode = md;
    input = ip;
}
class Remote
{
private:
    string mode;

public:
    Remote(string m) : mode(m) {}
    bool volup(Tv &t) { return t.volup(); }
    bool voldown(Tv &t) { return t.voldown(); }
    void onoff(Tv &t) { t.onoff(); }
    void chanup(Tv &t) { t.chanup(); }
    void chandown(Tv &t) { t.chandown(); }
    void set_chan(Tv &t, int c) { t.channel = c; }
    void set_mode(Tv &t) { t.set_mode(); }
    void set_input(Tv &t) { t.set_input(); }
};
int main()
{
    string state, mode, input;
    int volume, channel;
    cin >> state >> volume >> channel >> mode >> input;
    Tv s(state, volume, channel, mode, input);
    Remote r(mode);
    string command;
    while (cin >> command)
    {
        if (command == "onoff")
            r.onoff(s);
        else if (command == "volup" && s.ison())
            r.volup(s);
        else if (command == "chanup" && s.ison())
            r.chanup(s);
        else if (command == "chandown" && s.ison())
            r.chandown(s);
        else if (command == "set_mode" && s.ison())
            r.set_mode(s);
        else if (command == "set_input" && s.ison())
            r.set_input(s);
        else if (command == "voldown" && s.ison())
            r.voldown(s);
    }
    s.settings();
    return 0;
}

/*
题目描述
有如下的电视类和遥控器类，遥控器在电视开机的情况下可以控制电视。




要求如下：
1.     实现并完善Tv类；其中构造函数需修改和完善。另：最大频道为100；
2.     将Remote设为Tv的友元类，以支持在Remote类中对Tv方法的调用。
3.     在main函数中，通过Remote实例对TV实例进行操作。
输入
第一行，电视初始状态，依次为state,volume,channel,mode,input的初始值。
第二行，利用遥控器对上述状态的操作指令，用对应的函数名表示，如增加音量为volup
输出
第一行，执行遥控器操作后的状态。

样例输入
off 10 19 Cable VCR
onoff volup chanup set_mode set_input
样例输出
on 11 20 Antenna TV
*/