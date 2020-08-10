#include <stdio.h>
#include <string.h>
int isNumber(char *p);
int main()
{
    int t, result;
    char str[100];
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        scanf("%s", str);
        result = isNumber(str);
        printf("%d\n", result);
    }
}
int isNumber(char *p)
{
    int len = strlen(p), flag = 1;
    if (*p < '0' || *p > '9' && *p != '-') //���ǵ�����������Ե�һ��λ���ж�
        flag = 0;
    else
    {
        for (int i = 1; i < len; ++i)
        {
            if (*(p + i) < '0' || *(p + i) > '9')
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 0)
        return -1;
    else
    {
        int s = 0, i = 0;
        if (*p == '-')
            i = 1;
        for (; i < len; ++i)
        {
            s = s * 10 + (*(p + i) - '0');
        }
        if (*p == '-')
            s = -s;
        return s;
    }
}
/*
��Ŀ������
����һ���ַ������ж�����ַ����Ƿ�һ����ȫ����ֵ���ַ�������������"1234"����ô��ʾ����1234������"12a3"�ͱ�ʾֻ��һ���ַ���������һ������
Ҫ���д����isNumber��������һ���ַ�ָ�룬����ֵ����������
����ַ�����ʾһ������������������������ҷ���
����ַ������Ǳ�ʾһ���������򷵻�-1
�������������isNumber���ж��ַ���������ʹ���κ�C++�Դ�������������ƺ���


���룺
����t��ʾ��t������ʵ��
ÿ������һ���ַ���
��������t��


�����
ÿ������жϽ��


�������룺
3
1234
567a
0890


���������
1234
-1
890


*/