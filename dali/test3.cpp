#include<iostream>
using namespace std;
struct Node
{
	int num;
	Node *next;
};
void creatlist(Node *H)
{
	Node *a,*b=H;
	int n,x;
	cin>>n;
	while(n--)
	{
		cin>>x;
		a=new Node; 
		a->num=x;
		a->next=NULL;
		b->next=a;
		b=a;
	}
}
void showlist(Node *H)
{
	Node *h=H->next;
	while(h)
	{
		cout<<h->num<<" ";
		h=h->next;
	}
	cout<<endl;
}
void turnlist(Node *&head)
{
	Node *p1,*p2,*p3,*temp;
	p1 = head;
    p3 = head;
    p2 = head->next;
    temp = p2;
    while (p2)
    {
        p1 = p2;//p1右移
        p2 = p2->next;//p2右移
        p1->next = p3;//破环p1指向p2，同时建立p1指向p3;
        p3 = p1;//在下一个循环之前，就要把p3右移到p1位置
    }
    temp->next = NULL;//有数据表头数据（1）经历循环已经是表尾，应指向NULL
    head->next = p1;//原无数据表头应指向有数据表尾（5）
}
int main()
{
	int t;
	cin>>t;
	Node *head;
	while(t--)
	{
		head=new Node;
		head->next=NULL;
		creatlist(head);
		turnlist(head);
		showlist(head);
	}
}
