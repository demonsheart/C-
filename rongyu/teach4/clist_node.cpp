//�����ʵ��
#include "clist_node.h"

//���캯����������ѧ�Ź���
clist_node::clist_node(const student& dataval,clist_node *nextval,clist_node *prevval):data(dataval),next(nextval),prev(prevval)
{
    //ctor
}

//�޲ι���,��ʼ������next,prevָ��Ϊ��ָ��
clist_node::clist_node() :next(nullptr), prev(nullptr)
{

}


//����
clist_node::~clist_node()
{
    //dtor
}

//next���ʽӿ�
clist_node* clist_node::getnext()
{
    return next;
}

//student���ݷ��ʽӿ�
student &clist_node::getdata()
{
    return data;

}

//prev���ʽӿ�
clist_node* clist_node::getprev()
{
    return prev;
}

//���ý���nextֵ
void clist_node::setnext(clist_node *nextval)
{
    next = nextval;
}

//���ý���prevֵ
void clist_node::setprev(clist_node *prevval)
{
    prev = prevval;
}


