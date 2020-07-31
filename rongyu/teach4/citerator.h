#pragma once
#include "clist_node.h"
#include "student.h"

//��������
class citerator
{
public:
    typedef clist_node* clist_ptr;            //��Ƕ�࣬���ָ������

    //ȱʡ���캯��
    citerator();

    //�������캯��
    citerator(clist_ptr &nodeval);
    citerator(clist_ptr &&nodeval);    //��ֵ����

    //��������
    virtual ~citerator();

    //����++,ָ����һ���
    citerator operator++();
    
    //����*,���ʽ��s��������
    student& operator*();

    //����--,ָ��ǰһ���
    citerator operator--();

    //����->,���ؽ��s���ݵ�ַ
    student* operator->();

    //����==,�жϵ������Ƿ�ָ��ͬһ���
    bool operator==(const citerator& rhs);

    //����!=,�жϵ������Ƿ�ָ��ͬһ���
    bool operator!=(const citerator& rhs);

protected:

private:
    clist_ptr node;  //���ݳ�Ա,���ָ��
};





