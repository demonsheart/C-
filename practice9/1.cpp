#include <iostream>
using namespace std;
class Student
{
private:
    int id;              //学号
    int score;           //成绩
    static int maxscore; //最高分数
    static int maxid;    //最高分数学生学号
public:
    Student(int ti = 0, int ts = 0)
        : id(ti), score(ts)
    {
    }
    static void findMax(Student &st)
    {
        if (st.score > maxscore)
        {
            maxscore = st.score;
            maxid = st.id;
        }
    }
    static int getMaxScore()
    {
        return maxscore;
    }
    static int getMaxID()
    {
        return maxid;
    }
};
int Student::maxscore = 0;
int Student::maxid = 0;
int main()
{
    int n, ti, ts;
    cin >> n;
    Student *s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ti >> ts;
        s[i] = new Student(ti, ts);
    }
    for (int i = 0; i < n; i++)
        Student::findMax(*s[i]);
    cout << Student::getMaxID() << "--" << Student::getMaxScore();
    for (int i = 0; i < n; i++)
        delete[] s[i];
    return 0;
}
/*
题目描述
学生类定义如下：
class Student {
private:
	int id;	//学号
	int score; //成绩
	static int  maxscore;	//最高分数
	static int maxid;		//最高分数学生学号
public:
	Student(int ti=0,	int ts=0)
		:id(ti), score(ts)
    {}
	static void findMax(Student & st); //寻找最高成绩和学号
	static int getMaxScore(); //返回最高成绩
	static int getMaxID();		//返回最高成绩的学号
};
输入一组学生学号和成绩，用上述静态成员求最高成绩和对应学号
输入
第一行输入n表示有n个学生
接着输入n行，每行包括两个数据，表示学号和成绩
输出
调用静态成员函数输出学号和最高成绩，格式看样例

样例输入
3
1002 68
1023 54
1045 32
样例输出
1002--68
*/