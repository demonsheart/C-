#include<iostream>
using namespace std;
struct SNode
{
    int data;
    SNode *next;
};
void createList(SNode *&head, int *value, int n)
{
    SNode *p1,*p2;
    head = new SNode;
    int i;
    p1 = head;
    p1->data = value[0];
    p1->next = NULL;
    for(i=1; i<n; ++i)
    {
        p2 = new SNode;
        p2->data = value[i];
        p1->next = p2;
        p2->next = NULL;
        p1 = p2;
    }
}
void printList(SNode *head)
{
    SNode *p = head;
    while (p->next != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<p->data<<endl;
}
void deleteList(SNode *head)
{
    SNode *p1 = head;
    while (p1!=NULL)
    {
        head = p1;
        p1 = p1->next;
        delete head;
    }
}
int insertNode(SNode *head, int pos, int value)
{
    SNode *p1,*p2;
    int s = 0;
    p1 = head;
    while (p1!=NULL)
    {
        s++;
        p1 = p1->next;
    }
    if(pos>s)
     return 0;
    else
    {
        p1 = head;
        for(int i=0; i<pos-1; ++i)
        {
            p1 = p1->next;
        }
        p2 = new SNode;
        p2->data = value;
        p2->next = p1->next;
        p1->next = p2;
        return 1;
    }    
}
int removeNode(SNode *&head, int pos)
{
    SNode *p1,*p2;
    int s = 0;
    p1 = head;
    while (p1!=NULL)
    {
        s++;
        p1 = p1->next;
    }
    if(pos>s || pos <1)
     return 0;
    else
    {
        p1 = head;
        if(pos==1)
        {
            head = p1->next;
            delete p1;
        }
        else
        {
            for(int i=0; i<pos-2; ++i)
            {
                p1 = p1->next;
            }
            p2 = p1->next;
            p1->next = p2->next;
            delete p2;
        }
        return 1;
    }
    
}
int main()
{
    SNode *head = NULL;
    int n,t,i,m,o;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int *a = new int[n];
        for(i=0; i<n; ++i)
         cin>>*(a+i);
        createList(head,a,n);
        printList(head);
        cin>>m;
        while (m--)
        {
            int pos,value,r;
            cin>>pos>>value;
            r = insertNode(head,pos,value);
            if(r)
             printList(head);
            else
             cout<<"error"<<endl;
        }
        cin>>o;
        while (o--)
        {
            int depos,r;
            cin>>depos;
            r = removeNode(head,depos);
            if(r)
             printList(head);
            else
             cout<<"error"<<endl;
        }
        deleteList(head);
    }
    return 0;
}