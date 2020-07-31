#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;
char al(char x1, char x2, vector<vector<char>>::iterator &it) //运算,添加一个表指针的引用，避免多次创建表;
{
    int i, j;
    for (i = 1; i <= 3; ++i) //寻找行数
    {
        if (it[i][0] == x1)
            break;
    }
    for (j = 1; j <= 3; ++j) //寻找列数
    {
        if (it[0][j] == x2)
            break;
    }
    return it[i][j]; //根据表查找到运算结果并返回
}
int main()
{
    vector<char> temp{'k', 'p', 'g'}; //临时表格，赋值ABC用
    /*建立4x4的表*/
    vector<vector<char>> form(4, vector<char>(4));
    vector<vector<char>>::iterator it = form.begin();
    form[0][0] = '?';
    form[0][1] = 'k';
    form[0][2] = 'p';
    form[0][3] = 'g';
    form[1][0] = 'k';
    form[1][1] = 'k';
    form[1][2] = 'k';
    form[1][3] = 'g';
    form[2][0] = 'p';
    form[2][1] = 'k';
    form[2][2] = 'p';
    form[2][3] = 'g';
    form[3][0] = 'g';
    form[3][1] = 'k';
    form[3][2] = 'g';
    form[3][3] = 'g';

    char A, B, C;
    int flag = 1;
    /*枚举法证明*/
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                A = temp[i];
                B = temp[j];
                C = temp[k];
                /*如果出现一个(A*B)*C != A*(B*C) 设置flag为0 并且break    */
                if (al(al(A, B, it), C, it) != al(A, al(B, C, it), it))
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
                break;
        }
        if (flag == 0)
            break;
    }
    if (flag == 1)
        cout << "proved!" << endl;
    else
        cout << "not be proved!" << endl;
    system("pause");
    return 0;
}