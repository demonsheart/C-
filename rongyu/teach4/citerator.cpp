#include "citerator.h"

citerator::citerator():node(nullptr)
{
    
}
citerator::citerator(clist_ptr &nodeval):node(nodeval) {}

citerator::citerator(clist_ptr && nodeval):node(nodeval) {}

citerator::~citerator()
{
    //dtor
}

citerator  citerator::operator++()
{
    citerator  temp(*this);

    node = node->getnext();

    return *this;
}

citerator  citerator::operator--()
{
    citerator  temp(*this);

    node = node->getprev();

    return *this;
}

student &citerator::operator*()
{
    return node->getdata();
}



student *citerator::operator->()
{
    return &(node->getdata());
}



bool citerator::operator==(const citerator &rhs)
{
    return this->node == rhs.node;
}



bool citerator::operator!=(const citerator& rhs)
{
    return this->node != rhs.node;

}


