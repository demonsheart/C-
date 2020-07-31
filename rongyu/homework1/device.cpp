#include <regex>
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
struct student_result //存放结果
{
    string student_no;
    string problem_no;
    string mark;
};
bool comp1(student_result s1, student_result s2) //比较策略，用于排序
{
    return s1.student_no.compare(s2.student_no) < 0;
}
bool comp2(student_result s1, student_result s2) //比较策略，用于排序
{
    return s1.problem_no.compare(s2.problem_no) < 0;
}
int findPeopleNum(vector<student_result> v) //计算总人数
{
    auto it = v.begin();
    int len = v.size();
    sort(it,it+len,comp1);
    int num = 1;
    for(int i = 0; i < len - 1; ++i)
    {
        if(v[i].student_no != v[i+1].student_no)
        num++;
    }
    return num;
}
int findProblemNum(vector<student_result> v) //计算题目数
{
    auto it = v.begin();
    int len = v.size();
    sort(it,it+len,comp2);
    int num = 1;
    for(int i = 0; i < len - 1; ++i)
    {
        if(v[i].problem_no != v[i+1].problem_no)
        num++;
    }
    return num;
}
int findTruenum(vector<student_result> &v) //计算提交正确人数，由于遇到编码问题暂不实现。
{
    return 0;
}
int main()
{
    fstream file;
    /*输入流文件位置*/
    file.open("E:\\C\\.vscode\\rongyu\\homework1\\logs-1005.txt", ios_base::in);
    fstream _out;

    if (!file.is_open())
    {
        std::cout << "error!" << endl;
        return 0;
    }

    regex r("([a-z]{5})?(\\d{10})?\\:[a-zA-Z]{7}(\\d{4})\\:(.*)");
    vector<student_result> v; //容器，统计时用
    student_result temp;
    string line;
    string s("------------------------------------------------------"); //分隔符
    string s1;
    string outfile_name;

    int total_fileNum = 0;

    /*遍历拆分文件*/
    while (file)
    {
        getline(file, line);
        smatch m;
        fstream _out;
        string file_name("E:\\C\\.vscode\\rongyu\\homework1\\file\\"); //输出流根目录
        if (regex_match(line, m, r))
        {
            s1 = line;
            total_fileNum++;
            //整数转字符串(目的是为了生成编号使目标文件名唯一 防止覆盖)
            string st = to_string(total_fileNum);
            if (m.size() != 0)
            {
                //匹配信息存进容器
                temp.student_no = m[1];
                temp.student_no += m[2];
                temp.problem_no = m[3];
                temp.mark = m[4];
                v.push_back(temp);
                //根据其学号、题号、正确与否 文件编号 生成唯一文件名
                file_name.operator+=(m[1]);
                file_name.operator+=(m[2]);
                file_name.operator+=("_");
                file_name.operator+=(m[3]);
                file_name.operator+=("_");
                file_name.operator+=(m[4]);
                file_name.operator+=("_");
                file_name.operator+=(st);
                file_name.operator+=(".cpp");
                outfile_name = file_name;
            }
        }
        //开始写入
        if (line != s1 && line != s) // 清除分隔符
        {
            _out.open(outfile_name, ios::app);
            if (!_out.is_open())
            {
                std::cout << "error!" << endl;
                break;
            }
            _out << line << endl;
        }
    }
    //统计，把结果存进result.txt
    fstream resl;
    //在特定位置创建result.txt
    resl.open("E:\\C\\.vscode\\rongyu\\homework1\\file\\result.txt", ios_base::out);
    resl << "总文件数为: " << total_fileNum << endl;
    resl << "总题目数为: " << findProblemNum(v) << endl;
    resl << "总人数为: " << findPeopleNum(v) << endl;
    return 0;
}
