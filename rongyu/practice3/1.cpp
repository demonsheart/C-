#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct student
{
    int age, score;
    string name;
    bool operator()(student s1, student s2)
    {
        if (s1.score != s2.score)
            return s1.score < s2.score;
        else
        {
            if (s1.name.compare(s2.name) != 0)
                return s1.name.compare(s2.name) < 0;
            else
                return s1.age < s1.age;
        }
    }
};
int main()
{
    int n;
    cin >> n;

    student s;
    vector<student> v;
    for (int i = 0; i < n; ++i)
    {
        cin >> s.name >> s.age >> s.score;
        v.push_back(s);
    }
    vector<student>::iterator it = v.begin();
    sort(it, it + n, student());
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it).name << " " << (*it).age << " " << (*it).score << endl;
    }
    return 0;
}