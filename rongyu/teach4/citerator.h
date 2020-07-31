#pragma once
#include "clist_node.h"
#include "student.h"

//迭代器类
class citerator
{
public:
    typedef clist_node* clist_ptr;            //内嵌类，结点指针类型

    //缺省构造函数
    citerator();

    //拷贝构造函数
    citerator(clist_ptr &nodeval);
    citerator(clist_ptr &&nodeval);    //右值引用

    //析构函数
    virtual ~citerator();

    //重载++,指向下一结点
    citerator operator++();
    
    //重载*,访问结点s数据引用
    student& operator*();

    //重载--,指向前一结点
    citerator operator--();

    //重载->,返回结点s数据地址
    student* operator->();

    //重载==,判断迭代器是否指向同一结点
    bool operator==(const citerator& rhs);

    //重载!=,判断迭代器是否不指向同一结点
    bool operator!=(const citerator& rhs);

protected:

private:
    clist_ptr node;  //数据成员,结点指针
};





