#include <regex>
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
struct student_result //��Ž��
{
    string student_no;
    string problem_no;
    string mark;
};
bool comp1(student_result s1, student_result s2) //�Ƚϲ��ԣ���������
{
    return s1.student_no.compare(s2.student_no) < 0;
}
bool comp2(student_result s1, student_result s2) //�Ƚϲ��ԣ���������
{
    return s1.problem_no.compare(s2.problem_no) < 0;
}
int findPeopleNum(vector<student_result> v) //����������
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
int findProblemNum(vector<student_result> v) //������Ŀ��
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
int findTruenum(vector<student_result> &v) //�����ύ��ȷ�����������������������ݲ�ʵ�֡�
{
    return 0;
}
int main()
{
    fstream file;
    /*�������ļ�λ��*/
    file.open("E:\\C\\.vscode\\rongyu\\homework1\\logs-1005.txt", ios_base::in);
    fstream _out;

    if (!file.is_open())
    {
        std::cout << "error!" << endl;
        return 0;
    }

    regex r("([a-z]{5})?(\\d{10})?\\:[a-zA-Z]{7}(\\d{4})\\:(.*)");
    vector<student_result> v; //������ͳ��ʱ��
    student_result temp;
    string line;
    string s("------------------------------------------------------"); //�ָ���
    string s1;
    string outfile_name;

    int total_fileNum = 0;

    /*��������ļ�*/
    while (file)
    {
        getline(file, line);
        smatch m;
        fstream _out;
        string file_name("E:\\C\\.vscode\\rongyu\\homework1\\file\\"); //�������Ŀ¼
        if (regex_match(line, m, r))
        {
            s1 = line;
            total_fileNum++;
            //����ת�ַ���(Ŀ����Ϊ�����ɱ��ʹĿ���ļ���Ψһ ��ֹ����)
            string st = to_string(total_fileNum);
            if (m.size() != 0)
            {
                //ƥ����Ϣ�������
                temp.student_no = m[1];
                temp.student_no += m[2];
                temp.problem_no = m[3];
                temp.mark = m[4];
                v.push_back(temp);
                //������ѧ�š���š���ȷ��� �ļ���� ����Ψһ�ļ���
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
        //��ʼд��
        if (line != s1 && line != s) // ����ָ���
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
    //ͳ�ƣ��ѽ�����result.txt
    fstream resl;
    //���ض�λ�ô���result.txt
    resl.open("E:\\C\\.vscode\\rongyu\\homework1\\file\\result.txt", ios_base::out);
    resl << "���ļ���Ϊ: " << total_fileNum << endl;
    resl << "����Ŀ��Ϊ: " << findProblemNum(v) << endl;
    resl << "������Ϊ: " << findPeopleNum(v) << endl;
    return 0;
}
