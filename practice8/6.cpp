#include<iostream>
#include<cstring>
using namespace std;
class CDate
{
private:
int year, month, day;
public:
CDate(int y, int m, int d);
bool check(); //检验日期是否合法
bool isLeap();
friend class CStudentID;
};
CDate::CDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
bool CDate::isLeap()
{
    return (year%4 == 0 && year%100 != 0) || year%400 == 0;
}
bool CDate::check()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    bool flag = true;
    if(month < 1 || month > 12)
     return false;
    if(isLeap())
    {
        if(b[month-1] < day)
         return false;
    }
    else
    {
        if(a[month-1] < day)
         return false;
    }
    return flag;
}
class CStudentID
{
private:
char *p_id, *p_name; //身份证号码，姓名
CDate birthday; //出生日期
int registered; //登记否
public:
/*
构造函数，若:日期非法;日期与id日期不符;id有非法字符;id不是15位或18位;id是18位但检验码不对,
则输出"illegal id"并置registered=0。否则输出对象的属性并置registered=1.
*/
CStudentID(char *p_idval, char *p_nameval, int y, int m, int d):birthday(y,m,d)
{    
    registered = 1;
    int len = strlen(p_idval);
    p_id = new char[len+1];
    p_name = new char[20];
    strcpy(p_name, p_nameval);
    strcpy(p_id, p_idval);
    check();
    if(registered == 0)
    cout << p_name << " illegal id" << endl;
}
void check()
{
    int ye,mo,da,len = strlen(p_id);
    if(len==15)
    {
        ye = (p_id[6]-'0')*10 + p_id[7]-'0' + 1900;
        mo = (p_id[8]-'0')*10 + p_id[9]-'0';
        da = (p_id[10]-'0')*10 + p_id[11]-'0';
    }
    else if(len==18)
    {
        ye = (p_id[6]-'0')*1000 + (p_id[7]-'0')*100 + (p_id[8]-'0')*10 + p_id[9]-'0';
        mo = (p_id[10]-'0')*10 + p_id[11]-'0';
        da = (p_id[12]-'0')*10 + p_id[13]-'0';
    }
    if(ye!=birthday.year || mo!= birthday.month || da!=birthday.day)//日期与id日期不符
     {registered = 0; return;}
    if(len!=15 && len!=18)//id长度
     {registered = 0; return;}
    if(birthday.check()==false)//日期非法
     {registered = 0; return;}
    if(len==15)//15位检验
     registered = check15();
    if(len==18)//18位检验
     registered = check18(); 
}
int check15()
{
    int flag=1;
    for (int i = 0; i < 15; i++)
    {
        if(p_id[i] > '9' || p_id[i] < '0')
         flag = 0;
    }
    return flag;
}
int check18()
{
    int flag=1,s=0,a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char st[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    for (int i = 0; i < 17; i++)
    {
        if(p_id[i] > '9' || p_id[i] < '0')
         flag = 0;
    }
    for (int i = 0; i < 17; i++) 
    {
        s += ((p_id[i]-'0') * a[i]);
    }
    s %= 11;
    if(st[s] != p_id[17])
     flag = 0; 
    return flag;
}
int get18()
{
    char st[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int s = 0, a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    for (int i = 0; i < 17; i++) 
        s += ((p_id[i]-48) * a[i]);
    s %= 11;
    return st[s];
}
CStudentID(const CStudentID &r) : birthday(r.birthday)//拷贝构造函数，若r.p_id为15位则升到18位(加年份的19和校验位)
{
    int i,len = strlen(r.p_id);
    registered = 1;
    p_id = new char[19];
    p_name = new char[20];
    strcpy(p_name, r.p_name);
    if(len==18)
    strcpy(p_id, r.p_id);
    else
    {
        for (i = 0; i < 6; i++)
         p_id[i] = r.p_id[i];
        p_id[i++] = '1';
        p_id[i++] = '9';
        for (i; i < 17; i++)
         p_id[i] = r.p_id[i-2];
        p_id[i++] = get18();
        p_id[i] = '\0';
    }
    check();
}
bool checked() { return registered; }
void print()
{
        cout<<p_name<<" "<<birthday.year<<"年"<<birthday.month<<"月"<<birthday.day<<"日"<<" ";
        cout<<p_id<<endl;
}
~CStudentID()
{
    delete [] p_id;
    delete [] p_name;
}
};
int main()
{
    int t,y,m,d;
    char name[20],id[19];
    cin>>t;
    while (t--)
    {
        cin>>y>>m>>d;
        cin>>name>>id;
        CStudentID oldid(id,name,y,m,d);
        if (oldid.checked()) {
            CStudentID newid(oldid);
            oldid.print();
            newid.print();
        }
    }
    return 0;
}