#include <iostream>
using namespace std;
class bank
{
private:
    int id, phone, password, balance;

public:
    bank(){};
    void getData(int id, int phone, int password, int balance);
    int withdraw(int money);
    int getID();
    int getPhone();
    int getPassword();
    int getBalance();
};

void bank::getData(int id, int phone, int password, int balance)
{
    this->id = id;
    this->phone = phone;
    this->password = password;
    this->balance = balance;
}
int bank::withdraw(int money)
{
    if (balance - money >= 0)
    {
        balance -= money;
        return 1;
    }
    else
        return 0;
}
int bank::getID()
{
    return id;
}
int bank::getPhone()
{
    return phone;
}
int bank::getPassword()
{
    return password;
}
int bank::getBalance()
{
    return balance;
}
int main()
{
    int n, k, id, phone, password, balance, result, money;
    cin >> n;
    bank b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> id >> phone >> password >> balance;
        b[i].getData(id, phone, password, balance);
    }
    cin >> k;
    while (k--)
    {
        int i, flag = 0;
        cin >> phone >> password >> money;
        for (i = 0; i < n; i++)
        {
            if (phone == b[i].getPhone())
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "�ֻ��Ų�����" << endl;
        else
        {
            if (password != b[i].getPassword())
                cout << "�������" << endl;
            else
            {
                result = b[i].withdraw(money);
                if (result)
                    cout << "����" << b[i].getID() << "--���" << b[i].getBalance() << endl;
                else
                    cout << "����" << b[i].getID() << "--����" << endl;
            }
        }
    }
    return 0;
}
/*
��Ŀ����
�����������˼��ʵ���ֻ�ȡ��Ĺ���
���������˻��п��š����ֻ��š���̬���롢�������ԣ�������ȡ�������ԡ�У�鶯̬���롢ȡ�����������ȫ���������ݡ�
ʹ�ö�������������n�������˻���
�û�ͨ���ֻ�ȡ��Ĳ������£�(һ����������ʵ��)
1���û������ֻ��ţ���n�������˻����ҵ���Ӧ�������˻���
	������ҳɹ�������ִ�У����������Ϣ���ֻ��Ų����ڡ�����������ִ�У�
2���û����붯̬���룬Ȼ��У�鶯̬������Ƿ���ȷ
	���������ȷ������ִ�У����������Ϣ��������󡱣���������ִ�У�
3���û�����ȡ���Ȼ��ִ��ȡ�����
	�������;ܾ�ȡ�������Ϣ������XXX--���㡱�����ȡ��ɹ�������Ϣ������XXX--���YYY��������XXX��ʾ���ţ�YYY��ʾ���
��������ֻ�Ƿ���˵��������һ����������������ִ�и���������
����
��һ������n����ʾ��n���˻�
��һ�������һ���˻�����Ϣ�����š����ֻ��š���̬���롢���
��������n��
��������k����ʾҪִ��k��ȡ�����
��һ�������ֻ��š���̬���롢ȡ����
��������k��
���
���k�У�ÿ������������

��������
5
1001 138111 111 1000
1002 135222 222 200
1003 136333 333 300
1004 133444 444 400
1005 132555 555 500
4
136333 333 600
133444 444 300
133555 555 200
138111 222 900
�������
����1003--����
����1004--���100
�ֻ��Ų�����
�������
*/