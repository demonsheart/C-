#include<iostream>
#include<string>
#include<deque>
using namespace std;
int main()
{
    int t,n;
    char c;

    cin>>t;
    while (t--)
    {
        cin>>c>>n;
        if(c == 'i')
        {
            deque<int> d;
            int temp,flag = 1;
            for(int i=0;i<n;++i)
            {
                cin>>temp;
                d.push_back(temp);
            }
            while (int(d.size()) != 0 && int(d.size()) !=1)
            {
                if(d.front() != d.back())
                {
                    flag = 0;
                    cout<<"false"<<endl;
                    break;
                }
                d.pop_back();
                d.pop_front();
            }
            if(flag) cout<<"true"<<endl;
        }
        else if(c == 'c')
        {
            deque<char> d;
            int flag = 1;
            char temp;
            for(int i=0;i<n;++i)
            {
                cin>>temp;
                d.push_back(temp);
            }
            while (int(d.size()) != 0 && int(d.size()) !=1)
            {
                if(d.front() != d.back())
                {
                    flag = 0;
                    cout<<"false"<<endl;
                    break;
                }
                d.pop_back();
                d.pop_front();
            }
            if(flag) cout<<"true"<<endl;
        }
        else if(c == 's')
        {
            deque<string> d;
            int flag = 1;
            string temp;
            for(int i=0;i<n;++i)
            {
                cin>>temp;
                d.push_back(temp);
            }
            while (int(d.size()) != 0 && int(d.size()) !=1)
            {
                if(d.front() != d.back())
                {
                    flag = 0;
                    cout<<"false"<<endl;
                    break;
                }
                d.pop_back();
                d.pop_front();
            }
            if(flag) cout<<"true"<<endl;
        }
        else if(c == 'd')
        {
            deque<double> d;
            int flag = 1;
            double temp;
            for(int i=0;i<n;++i)
            {
                cin>>temp;
                d.push_back(temp);
            }
            while (int(d.size()) != 0 && int(d.size()) !=1)
            {
                if(d.front() != d.back())
                {
                    flag = 0;
                    cout<<"false"<<endl;
                    break;
                }
                d.pop_back();
                d.pop_front();
            }
            if(flag) cout<<"true"<<endl;
        }
        else
        {
            cout<<"error!"<<endl;
        }
    }
    return 0;
}