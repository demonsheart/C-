#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
     std::cout << "*�밴���±�����ָ��*\n"
               << endl;
     std::cout << endl;
     std::cout << "------------------------------------------------------------------------------------" << endl;
     std::cout << setiosflags(ios::right) << setw(5) << "1"
               << setw(15) << "2"
               << setw(15) << "3"
               << setw(15) << "4"
               << setw(15) << "5"
               << setw(15) << "6"
               << resetiosflags(ios::right) << endl;
     std::cout << "------------------------------------------------------------------------------------" << endl;
     string no[] = {"�޸�����", "�޸ĵ绰", "�޸�����", "�޸İ༶", "�޸ı�ע","���޸�"};
     std::cout << setiosflags(ios::right) << setw(6) << no[0]
               << setw(15) << no[1]
               << setw(15) << no[2]
               << setw(15) << no[3]
               << setw(15) << no[4]
               << setw(15) << no[5]
               << resetiosflags(ios::right) << endl;
     std::cout << "------------------------------------------------------------------------------------\n"
               << endl;
}