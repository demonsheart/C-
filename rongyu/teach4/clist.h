#pragma once
#include "clist_node.h"
#include "citerator.h"

class clist
{
public:
    typedef clist_node* clist_ptr;
    typedef citerator  iterator1;

    clist();
    
    virtual ~clist();
    iterator1 begin();
    iterator1 end();
    bool empty() const;
    student& front();
    void pop_front();
    void push_front(const student& val);


protected:

private:
    clist_ptr  head;
};
