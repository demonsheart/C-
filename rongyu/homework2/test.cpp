#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
void delay(int sec)
{
    time_t start_time, cur_time;
    time(&start_time);
    do
    {
        time(&cur_time);
    } while ((cur_time - start_time) < sec);
}
using namespace std;
int main()
{
    cout << "================================================================================\n"
         << endl;
    cout << "================================================================================\n"
         << endl;
    cout << "*************************��ӭʹ��ѧ���ɼ�����ϵͳ*******************************\n"
         << endl;
    cout << "--------------------------------------------------------------------------------\n"
         << endl;
    cout << "********************************************************************************\n"
         << endl;
    cout << "================================================================================\n"
         << endl;

    delay(5);
    system("CLS");
}