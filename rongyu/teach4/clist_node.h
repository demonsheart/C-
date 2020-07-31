#pragma once

#include "student.h"
class clist_node
{
public:
    //构造函数
    clist_node();
    clist_node(const student &dataval,clist_node *nextval,clist_node *prevval);
    
    //数据成员访问接口
    clist_node* getnext();
    clist_node* getprev();
    void setnext(clist_node* nextval);
    void setprev(clist_node* prevval);
    student &getdata();

    //析构
    virtual ~clist_node();
protected:


private:
    student data;         //结点数据data
    clist_node* next;     //数据成员,next指针
    clist_node* prev;     //数据成员,prev指针
};

