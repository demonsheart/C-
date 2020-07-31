#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person() {}

    Person(string n, int a) : name(n), age(a) {}

    virtual void display()
    {
        cout << name << " " << age << endl;
    }

    virtual ~Person() {}
};

class Student : public Person
{
private:
    float normal_price, test_price, total_price;

public:
    Student() {}

    Student(string n, int a, float normal, float test)
        : Person(n, a), normal_price(normal), test_price(test)
    {
        total_price = normal_price * 0.4 + test_price * 0.6;
    }

    void display()
    {
        cout << name << " " << age << " " << total_price << endl;
    }

    friend class Teacher;
};

class Teacher : public Person
{
private:
    int student_num;
    float average;
    Student **s;

public:
    Teacher(string n, int a) : Person(n, a)
    {
        student_num = 0;
        average = 0;
    }

    void distribute(int sum)
    {
        s = new Student *[sum];
    }

    void display()
    {
        cout << name << " " << age << " " << student_num << " " << fixed << setprecision(2) << average << endl;
        for (int i = 0; i < student_num; ++i)
            cout << (**(s + i)).name << " " << (**(s + i)).age << " " << fixed << setprecision(2)
                 << (**(s + i)).total_price << endl;
    }

    void addStudent(string n, int a, float normal, float test)
    {
        student_num++;
        *(s + student_num - 1) = new Student(n, a, normal, test);
        countAve();
    }

    void countAve()
    {
        float total = 0;
        for (int i = 0; i < student_num; ++i)
            total += (**(s + i)).total_price;
        average = total / student_num;
    }

    ~Teacher()
    {
        for (int i = 0; i < student_num; ++i)
            delete s[i];
        delete[] s;
    }
};

int main()
{
    int num, age;
    float normal, test;
    string name;

    cin >> name >> age;
    Teacher t(name, age);
    cin >> num;
    t.distribute(num);
    while (num--)
    {
        cin >> name >> age >> normal >> test;
        t.addStudent(name, age, normal, test);
    }
    t.display();
    return 0;
}