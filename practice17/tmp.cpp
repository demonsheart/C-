#include<iostream>
#include<string> 
using namespace std;

template<class T>
class CNode
{
	public:
		T data;
		CNode<T> *next;
};

template<class T>
class CList
{
	private:
		CNode<T> *head;
	public:
		CList()
		{
			head = new CNode<T>;
		}
		void createList(T *value, int n)
		{
			int i;
			CNode<T> *tail;
			CNode<T> *pnew;
			tail = this->head;
			head->next = NULL;
			for(i = 0;i < n;i ++)
			{
				pnew = new CNode<T>;
				pnew->data = value[i];
				pnew->next = NULL;
				tail->next = pnew;
				tail = pnew;
			}
		}
		T get(int pos)
		{
			CNode<T> *pg = head;
			while(pos--)
				pg = pg->next;
			return pg->data;
		}
		bool ifget(int pos)
		{
			CNode<T> *pg = head;
			while(pos--)
			{
				pg = pg->next;
				if(pg == NULL)
					return false;
			}
			return true;
		}
		void set(int pos, T value)
		{
			remove(pos);
			insert(pos-1, value);
		}
		void insert(int pos, T value)
		{
			CNode<T> *stud,*pg = head;
			stud = new CNode<T>;
			stud->data = value;
			while(pos--)
			{ 
				pg = pg->next;
				if(pg == NULL)
		    		return;
			}
			stud->next = pg->next;
			pg->next = stud;
		}
		void remove(int pos)
		{
			CNode<T> *pg = head;
			if (pos == 0)
			{
				head = head->next;
				return;
			}
			int i;
			for(i = 1;i < pos;i++) 
			{
				pg = pg->next;
				if(pg->next == NULL)
					return;
			}
			pg->next = pg->next->next;
			return;
		}
		void printList()
		{
			CNode<T> *p = head;
			p = p->next;
			while(p->next)
			{
				cout << p->data << " ";
				p = p->next;
			}
			cout << p->data << " " << endl;
		}
		~CList()
		{
			while(head->next != NULL)
			{
				CNode<T> *p1 = head,*p2;
				p2 = p1;
				while(p1->next != NULL)
				{
					p2 = p1;
					p1 = p1->next;
				}
				p2->next = NULL;
				delete p1;
			}
		}
};
int main()
{
	int t, n, i, pos;
	char order;
	cin >> t;
	while(t--)
	{
		cin >> order >> n;
		if(order == 'I')
		{
			int *value, val;
			value = new int[n];
			for(i = 0;i < n;i ++)
		   	 	cin >> value[i];
			CList<int> h;
			h.createList(value,n);
			cin >> pos >> val;
			h.insert(pos, val);
			cin >> pos;
			if(h.ifget(pos))
				cout << h.get(pos) << endl;
			else
				cout << "error" << endl;
			cin >> pos;
			h.remove(pos);
			cin >> pos >> val;
			h.set(pos, val);
			h.printList();
		}
		else if(order == 'D')
		{
			double *value, val;
			value = new double[n];
			for(i = 0;i < n;i ++)
		   	 	cin >> value[i];
			CList<double> h;
			h.createList(value,n);
			cin >> pos >> val;
			h.insert(pos, val);
			cin >> pos;
			if(h.ifget(pos))
				cout << h.get(pos) << endl;
			else
				cout << "error" << endl;
			cin >> pos;
			h.remove(pos);
			cin >> pos >> val;
			h.set(pos, val);
			h.printList();
		}
		else
		{
			string *value, val;
			value = new string[n];
			for(i = 0;i < n;i ++)
		   	 	cin >> value[i];
			CList<string> h;
			h.createList(value,n);
			cin >> pos >> val;
			h.insert(pos, val);
			cin >> pos;
			if(h.ifget(pos))
				cout << h.get(pos) << endl;
			else
				cout << "error" << endl;
			cin >> pos;
			h.remove(pos);
			cin >> pos >> val;
			h.set(pos, val);
			h.printList();
		}
	}
}