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