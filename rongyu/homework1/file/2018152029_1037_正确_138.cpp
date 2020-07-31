#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T, num;
	char claim;
	cin >> T;
	while (T--)
	{
		cin >> claim >> num;
		switch (claim)
		{
		case 'C':
		{
			char max=0;
			char *p = new char[num];
			for (int i = 0; i < num; i++)
			{
				cin >> p[i];
				if (p[i] > max)max = p[i];
			}
			cout << max << endl;
			delete p;
			break;
		}
		case 'I':
		{
			int average=0;
			int *p = new int[num];
			for (int i = 0; i < num; i++)
			{
				cin >> p[i];
				average += p[i];
			}
			cout << average / num << endl;
			delete p;
			break;
		}
		case 'F':
		{
			float min;
			float *p = new float[num];
			for (int i = 0; i < num; i++)
			{
				cin >> p[i];
				if (i == 0)
					min = p[i];
				else if (min > p[i])
					min = p[i];
			}
			cout << min << endl;
			delete p;
			break;
		}
		default:
			break;
		}

	}
	//system("pause");
	return 0;
}
