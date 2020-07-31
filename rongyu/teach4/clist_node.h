#pragma once

#include "student.h"
class clist_node
{
public:
    //���캯��
    clist_node();
    clist_node(const student &dataval,clist_node *nextval,clist_node *prevval);
    
    //���ݳ�Ա���ʽӿ�
    clist_node* getnext();
    clist_node* getprev();
    void setnext(clist_node* nextval);
    void setprev(clist_node* prevval);
    student &getdata();

    //����
    virtual ~clist_node();
protected:


private:
    student data;         //�������data
    clist_node* next;     //���ݳ�Ա,nextָ��
    clist_node* prev;     //���ݳ�Ա,prevָ��
};

