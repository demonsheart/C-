#include "clist.h"
#include "clist_node.h"

clist::clist()
{
    head = new clist_node;
    head->setprev(head);
    head->setnext(head);
}
clist::~clist()
{
    //dtor

}

clist::iterator1 clist::begin()
{
    return head->getnext();
}


clist::iterator1 clist::end()
{
    return head;
}


bool clist::empty() const
{
    return head->getnext() == head;
}


student &clist::front()
{
    return head->getnext()->getdata();
}


void clist::pop_front()
{
    clist_ptr p = head->getnext();
    head->setnext(p->getnext());
    p->getnext()->setprev(head);
    delete p;
}


void clist::push_front(const student &val)
{
    clist_node *p = new clist_node(val,head->getnext(),head);
    head->getnext()->setprev(p);
    head->setnext(p);
}
