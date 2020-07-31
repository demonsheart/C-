#include <string>
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        string s;
        stack<char> sta_re;
        stack<char> sta_temp;

        cin >> s;
        for (int i = 0; i < (int)s.size(); ++i)
        {
            /*未碰到右括号，直接入栈*/
            if (s[i] != '}' && s[i] != ']' && s[i] != ')')
            {
                sta_re.push(s[i]);
            }
            else //碰到右括号，开始展开
            {
                //从左括号开始截取，入暂存栈
                while (sta_re.top() != '{' && sta_re.top() != '[' && sta_re.top() != '(')
                {
                    sta_temp.push(sta_re.top());
                    sta_re.pop();
                }

                sta_re.pop();
                int num = sta_re.top() - '0';//记录展开次数
                sta_re.pop();
                string s1;
                while (!sta_temp.empty())
                {
                    s1.push_back(sta_temp.top());
                    sta_temp.pop();
                }
                string temp;
                for (int j = 0; j < num; ++j)
                    temp += s1;
                /*展开完毕，压回结果栈*/
                for (int k = 0; k < (int)temp.size(); ++k)
                    sta_re.push(temp[k]);
            }
        }
        while (!sta_re.empty())
        {
            cout << sta_re.top();
            sta_re.pop();
        }
        cout << endl;
    }
    return 0;
}