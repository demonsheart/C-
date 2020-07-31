#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
struct hashf
{
    int operator()(const string &name) const
    {
        return name[0] - 'A';
    }
};
class PhoneBook
{
private:
    unordered_map<string, int, hashf> pBook;

public:
    PhoneBook() { pBook.reserve(26); }
    void input()
    {
        string name;
        int n, phone;

        cin >> n;
        while (n--)
        {
            cin >> name >> phone;
            pBook.insert(make_pair(name, phone));
        }
    }
    void print()
    {
        for (auto i = 0; i < (int)pBook.bucket_count(); ++i)
        {
            if (!pBook.bucket_size(i))
                continue;
            cout << char('A' + i) << "--";
            for (auto it = pBook.begin(i); it != pBook.end(i); ++it)
                cout << it->first << "." << it->second << "--";
            cout << endl;
        }
    }
    int _find(string name)
    {
        auto it = pBook.find(name);
        if (it == pBook.end())
            return -1;
        else
            return it->second;
    }
    PhoneBook operator+=(const pair<string, int> &p)
    {
        auto it = pBook.find(p.first);
        if (it == pBook.end())
            pBook.insert(p);
        else
            it->second = p.second;
        return *this;
    }
    PhoneBook operator+(const PhoneBook &p)
    {
        PhoneBook tmp(*this);
        for (auto it = p.pBook.begin(); it != p.pBook.end(); ++it)
        {
            tmp += *it;
        }
        return tmp;
    }
};
int main()
{
    string name;
    int no;

    PhoneBook pb;
    pb.input();
    for (int i = 0; i < 2; ++i)
    {
        cin >> name;
        no = pb._find(name);
        if (no == -1)
            cout << "²éÕÒÊ§°Ü" << endl;
        else
            cout << name << "--" << no << endl;
    }
    cin >> name >> no;
    pb += make_pair(name, no);

    PhoneBook pc;
    pc.input();
    pb = pb + pc;

    pb.print();
    return 0;
}
