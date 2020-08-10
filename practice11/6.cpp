#include <iostream>
#include <cstring>
using namespace std;
class CDate
{
private:
    int year, month, day;

public:
    CDate(int y, int m, int d);
    bool check(); //检验日期是否合法
    bool isLeap();
    void print();
    friend class COldID;
    friend class CNewID;
};
CDate::CDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
bool CDate::isLeap()
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
bool CDate::check()
{
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool flag = true;
    if (month < 1 || month > 12)
        return false;
    if (isLeap())
    {
        if (b[month - 1] < day)
            return false;
    }
    else
    {
        if (a[month - 1] < day)
            return false;
    }
    return flag;
}
class COldID
{
protected:
    char *p_id, *p_name; //身份证号码，姓名
    CDate birthday;      //出生日期
    int registered;

public:
    COldID(char *p_idval, char *p_nameval, int y, int m, int d) : birthday(y, m, d)
    {
        registered = 1;
        int len = strlen(p_idval);
        p_id = new char[len + 1];
        p_name = new char[20];
        strcpy(p_name, p_nameval);
        strcpy(p_id, p_idval);
        check();
    }
    virtual void check()
    {
        int ye, mo, da, len = strlen(p_id);
        if (len == 15)
        {
            ye = (p_id[6] - '0') * 10 + p_id[7] - '0' + 1900;
            mo = (p_id[8] - '0') * 10 + p_id[9] - '0';
            da = (p_id[10] - '0') * 10 + p_id[11] - '0';
        }
        if (ye != birthday.year || mo != birthday.month || da != birthday.day) //日期与id日期不符
        {
            registered = 0;
            return;
        }
        if (len != 15) //id长度
        {
            registered = 0;
            return;
        }
        if (birthday.check() == false) //日期非法
        {
            registered = 0;
            return;
        }
        if (len == 15) //15位检验
            registered = check15();
    }
    int check15()
    {
        int flag = 1;
        for (int i = 0; i < 15; i++)
        {
            if (p_id[i] > '9' || p_id[i] < '0')
                flag = 0;
        }
        return flag;
    }
    virtual void print()
    {
        cout << p_name << " " << birthday.year << "年" << birthday.month << "月" << birthday.day << "日"
             << " ";
        cout << p_id << endl;
    }
    ~COldID()
    {
        delete[] p_id;
        delete[] p_name;
    }
};

class CNewID : public COldID
{
private:
    char *p_id18;
    CDate issueday;
    int validyear;
    int registered2;

public:
    CNewID(char *p_nameval, int y, int m, int d, char *p_idval,
           char *p_idval18, int yy, int mm, int dd, int v) : COldID(p_idval, p_nameval, y, m, d), issueday(yy, mm, dd), validyear(v)
    {
        registered2 = 1;
        p_id18 = new char[19];
        strcpy(p_id18, p_idval18);
        check();
        if (registered == 0 || registered2 == 0)
            cout << p_name << endl
                 << "illegal id" << endl;
    }
    void print()
    {
        cout << p_name << endl
             << p_id18 << " " << issueday.year
             << "年" << issueday.month << "月" << issueday.day << "日 ";
        if (validyear != 100)
            cout << validyear << "年" << endl;
        else
            cout << "长期" << endl;
    }
    void check()
    {
        int ye, mo, da, len = strlen(p_id18);
        if (len != 18) //id长度
        {
            registered2 = 0;
            return;
        }
        if (len == 18)
        {
            ye = (p_id18[6] - '0') * 1000 + (p_id18[7] - '0') * 100 + (p_id18[8] - '0') * 10 + p_id18[9] - '0';
            mo = (p_id18[10] - '0') * 10 + p_id18[11] - '0';
            da = (p_id18[12] - '0') * 10 + p_id18[13] - '0';
        }
        if (ye != birthday.year || mo != birthday.month || da != birthday.day) //日期与id日期不符
        {
            registered2 = 0;
            return;
        }
        registered2 = check18();
        if (registered2 == 0)
            return;
        registered2 = issueday.check();
        if (registered2 == 0)
            return;
        registered2 = checklink();
        if (registered2 == 0)
            return;
        registered2 = valid();
    }
    int valid()
    {
        if (validyear == 100)
            return 1;
        int yy, mm, dd;
        yy = issueday.year + validyear;
        mm = issueday.month;
        dd = issueday.day;
        if (yy < 2017 || (yy == 2017 && mm < 5) || (yy == 2017 && mm == 5 && mm < 10))
            return 0;
        return 1;
    }
    int checklink()
    {
        int i;
        for (i = 0; i < 6; i++)
            if (p_id[i] != p_id18[i])
                return 0;
        i += 2;
        for (i; i < 17; i++)
            if (p_id[i - 2] != p_id18[i])
                return 0;
        return 1;
    }
    int check18()
    {
        int flag = 1, s = 0, a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
        char st[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
        for (int i = 0; i < 17; i++)
        {
            if (p_id18[i] > '9' || p_id18[i] < '0')
                flag = 0;
        }
        for (int i = 0; i < 17; i++)
        {
            s += ((p_id18[i] - '0') * a[i]);
        }
        s %= 11;
        if (st[s] != p_id18[17])
            flag = 0;
        return flag;
    }
    int get18()
    {
        char st[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
        int s = 0, a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
        for (int i = 0; i < 17; i++)
            s += ((p_id18[i] - 48) * a[i]);
        s %= 11;
        return st[s];
    }
    bool checked() { return registered && registered2; }
    ~CNewID()
    {
        delete[] p_id18;
    }
};

int main()
{
    int t, y, m, d, yy, mm, dd, v;
    char name[20], id1[19], id2[19];
    cin >> t;
    while (t--)
    {
        cin >> name >> y >> m >> d >> id1 >> id2 >> yy >> mm >> dd >> v;
        CNewID st(name, y, m, d, id1, id2, yy, mm, dd, v);
        if (st.checked())
            st.print();
    }
    return 0;
}
/*
题目描述
按下述方式定义一个日期类CDate和描述15位身份证号的旧身份证类COldID:

class CDate

{

private:

int year, month, day;

public:

CDate(int,int,int);

bool check(); //检验日期是否合法

bool isLeap();

void print();

};

class COldID

{

private:

char *p_id15, *p_name; //15位身份证号码，姓名

CDate birthday; //出生日期

public:

COldID(char *p_idval, char *p_nameval, CDate &day);

bool check(); //验证15位身份证是否合法

void print();

~COldID();

};

然后以COldID为基类派生18位身份证号的新身份证类CNewID,并增加3个数据成员:p_id18(18位号码)、issueday(签发日期)和validyear(有效期，年数)，并重新定义check()和print()。

身份证第18位校验码的生成方法：

1、将身份证号码前17位数分别乘以7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2。然后将其相加。

2、将17位数字和系数乘加的和除以11，得到余数。

3、余数与校验码的对应关系为1,0,X,9,8,7,6,5,4,3,2。也即：如果余数是3，身份证第18位就是9。如果余数是2，身份证的最后一位号码就是X。

主函数定义一个派生类对象，并用派生类对象调用check()，若返回false则输出“illegal id”否则调用print()输出身份证信息。check()对身份证合法性进行验证的规则：

1. 确认15位身份证正确.

2. 确认18位号码是从15位号码扩展的，且第18位校验码正确.

3. 身份证中的出生日期合法.

4. 身份证号码中不含非法字符.

5. 身份证号码的长度正确.

6. 身份证目前处于有效期内. (2017年5月10日）

输入
测试数据的组数 t

第一个人姓名、出生日期年月日、15位身份证号码、18位身份证号码、签发日期年月日、有效期(100年按长期处理)

第二个人姓名、出生日期年月日、15位身份证号码、18位身份证号码、签发日期年月日、有效期(100年按长期处理)

......

输出
第一个人姓名

第一个人18位身份证号信息(号码、签发日期和有效期）或"illegal id"

第二个人姓名

第二个人18位身份证号信息(号码、签发日期和有效期）或"illegal id"

......

样例输入
10
AAAA 1988 2 28 440301880228113 440301198802281133 2006 1 20 20
BBBB 1997 4 30 440301980808554 440301199808085541 2015 2 2 10 
CCCC 1920 5 8 530102200508011 53010219200508011X 1980 3 4 30
DDDD 1980 1 1 340524800101001 340524198001010012 1998 12 11 20
EEEE 1988 11 12 110203881112034 110203198811120340 2007 2 29 20 
FFFF 1964 11 15 432831641115081 432831196411150810 2015 8 7 100
GGGG 1996 12 10 44030196121010 44030119961210109 2014 6 7 20
HHHH 1988 7 21 440301880721X12 44030119880721X122 2006 5 11 20
IIII 1976 3 30 440301760330098 440301197603300983 2003 4 15 20
JJJJ 1955 9 5 440301550905205 440301195509051052 2004 6 4 100 
样例输出
AAAA
440301198802281133 2006年1月20日 20年
BBBB
illegal id
CCCC
illegal id
DDDD
illegal id
EEEE
illegal id
FFFF
432831196411150810 2015年8月7日 长期
GGGG
illegal id
HHHH
illegal id
IIII
illegal id
JJJJ
illegal id
*/