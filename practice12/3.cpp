#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
    string name, position;
    int grade, year;
    float salaries;

public:
    Employee(string na, string po, int gr, int y)
        : name(na), position(po), grade(gr), year(y) {}
    virtual float salary()
    {
        salaries = 1000 + 500 * grade + 50 * year;
        return salaries;
    }
};
class Teamleader : public Employee
{
private:
    /* data */
public:
    Teamleader(string na, string po, int gr, int y)
        : Employee(na, po, gr, y) {}
    float salary()
    {
        salaries = 3000 + 800 * grade + 100 * year;
        return salaries;
    }
};
class Manager : public Employee
{
private:
    /* data */
public:
    Manager(string na, string po, int gr, int y)
        : Employee(na, po, gr, y) {}
    float salary()
    {
        salaries = 5000 + 1000 * (grade + year);
        return salaries;
    }
};
bool judge(int a, int b)
{
    return (a >= 0 && b >= 0);
}
int main()
{
    int t, grade, year;
    string name, position;
    Employee *p;

    cin >> t;
    while (t--)
    {
        cin >> name >> position >> grade >> year;
        if (position == "Employee")
        {
            if (judge(grade, year) == 0)
            {
                cout << "error grade or year." << endl;
                continue;
            }
            p = new Employee(name, position, grade, year);
            cout << name << ":" << position << ",Salary:" << p->salary() << endl;
        }
        else if (position == "Teamleader")
        {
            if (judge(grade, year) == 0)
            {
                cout << "error grade or year." << endl;
                continue;
            }
            p = new Teamleader(name, position, grade, year);
            cout << name << ":" << position << ",Salary:" << p->salary() << endl;
        }
        else if (position == "Manager")
        {
            if (judge(grade, year) == 0)
            {
                cout << "error grade or year." << endl;
                continue;
            }
            p = new Manager(name, position, grade, year);
            cout << name << ":" << position << ",Salary:" << p->salary() << endl;
        }
        else
            cout << "error position." << endl;
    }
    return 0;
}