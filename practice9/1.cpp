#include <iostream>
using namespace std;
class Student
{
private:
    int id;              //ѧ��
    int score;           //�ɼ�
    static int maxscore; //��߷���
    static int maxid;    //��߷���ѧ��ѧ��
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
��Ŀ����
ѧ���ඨ�����£�
class Student {
private:
	int id;	//ѧ��
	int score; //�ɼ�
	static int  maxscore;	//��߷���
	static int maxid;		//��߷���ѧ��ѧ��
public:
	Student(int ti=0,	int ts=0)
		:id(ti), score(ts)
    {}
	static void findMax(Student & st); //Ѱ����߳ɼ���ѧ��
	static int getMaxScore(); //������߳ɼ�
	static int getMaxID();		//������߳ɼ���ѧ��
};
����һ��ѧ��ѧ�źͳɼ�����������̬��Ա����߳ɼ��Ͷ�Ӧѧ��
����
��һ������n��ʾ��n��ѧ��
��������n�У�ÿ�а����������ݣ���ʾѧ�źͳɼ�
���
���þ�̬��Ա�������ѧ�ź���߳ɼ�����ʽ������

��������
3
1002 68
1023 54
1045 32
�������
1002--68
*/