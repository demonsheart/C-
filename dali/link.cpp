#include<iostream>
using namespace std;
struct SNode
{
    int data;
    SNode *next;
};
SNode *createList(SNode *h, int x)
{
    if(h == NULL)
    {
        h = new SNode;
        h->data = x;
        h->next = NULL;
    }
    else
    {
        SNode *p1, *p2;
        p1 = h;
        while (p1->next!=NULL)
        {
            p1 = p1->next;
        }
        p2 = new SNode;
        p2->data = x;
        p2->next = NULL;
        p1->next = p2;
    }
    return h;
}
void traverse(SNode *h)
{
    SNode *p = h;
    while (p != NULL)
    {
        cout<<p->data<<endl;
        p = p->next;
    }
}
void deleteList(SNode *h)
{
    SNode *p1 = h;
    while (p1!=NULL)
    {
        h = p1;
        p1 = p1->next;
        delete h;
    }
}
int main()
{
    SNode *head = NULL;
    int n,i,a;
    
    cin>>n;
    for(i=0; i<n; ++i)
    {
        cin>>a;
        head = createList(head,a);
    }
    traverse(head);
    deleteList(head);
    return 0;
}