//结点类实现
#include "clist_node.h"

//构造函数，姓名、学号构造
clist_node::clist_node(const student& dataval,clist_node *nextval,clist_node *prevval):data(dataval),next(nextval),prev(prevval)
{
    //ctor
}

//无参构造,初始化结点的next,prev指针为空指针
clist_node::clist_node() :next(nullptr), prev(nullptr)
{

}


//析构
clist_node::~clist_node()
{
    //dtor
}

//next访问接口
clist_node* clist_node::getnext()
{
    return next;
}

//student数据访问接口
student &clist_node::getdata()
{
    return data;

}

//prev访问接口
clist_node* clist_node::getprev()
{
    return prev;
}

//设置结点的next值
void clist_node::setnext(clist_node *nextval)
{
    next = nextval;
}

//设置结点的prev值
void clist_node::setprev(clist_node *prevval)
{
    prev = prevval;
}


