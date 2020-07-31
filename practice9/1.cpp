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
        s[i] = new Student(ti,ts);
    }
    for (int i = 0; i < n; i++)
        Student::findMax(*s[i]);
    cout << Student::getMaxID() << "--" << Student::getMaxScore();
    for (int i = 0; i < n; i++)
     delete [] s[i];
    return 0;
}