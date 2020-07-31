#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char ch;
		int num;
		cin >> ch>>num;
		switch (ch)
		{
		case 'I': {
			int *p = (int*)malloc(num * sizeof(int));
			int sum = 0;
			for (int i = 0; i < num; i++)
			{
				cin >> *(p + i);
				sum += *(p + i);
			}
			cout << sum / num << endl;
		}; break;
		case 'C': {
			char *p = (char*)malloc(num * sizeof(char));
			char T = 'A';
			for (int i = 0; i < num; i++)
			{
				cin >> *(p + i);
				if (*(p + i) > T)
					T = *(p + i);
			}
			cout << T << endl;
		}; break;
		case 'F': {
			float *p = (float*)malloc(num * sizeof(float));
			float T = 9999999;
			for (int i = 0; i < num; i++)
			{
				cin >> *(p + i);
				if (*(p + i) < T)
					T = *(p + i);
			}
			cout << T << endl;
		}; break;
		}
	}
}
