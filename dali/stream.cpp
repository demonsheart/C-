#include <fstream>
using namespace std;
int main()
{
    fstream file1, file2;

    file1.open("E:\\C\\.vscode\\dali\\tt.txt", ios::in);  //读
    file2.open("E:\\C\\.vscode\\dali\\ff.txt", ios::out); //写

    if (!file1.is_open() || !file2.is_open()) //如果打开不成功
        exit(-1);

    int a[10];
    //读取
    for (int i = 0; i < 10; ++i)
        file1 >> a[i];
    //存放
    for (int i = 0; i < 10; ++i)
        file2 << a[i] << " ";
    file1.close();
    file2.close();
    return 0;
}