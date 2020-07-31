#include <iostream>

using namespace std;

int main()
{
	int i, j, t, n, y, z;
	int E = 0;
	char datatype;

	cin >> z;
	while (z--)
	{

		cin >> datatype;
		cin >> n;
		if (datatype == 'I')
		{
			int *arr = new int[n];
			for (i = 0; i < n; i++)
				cin >> arr[i];
			for (i = 0; i < n; i++)
				E += arr[i]++;
			y = E / n;
			cout << y;

		}
		if (datatype == 'C')
		{
			char *a = new char[n];
			for (i = 0; i < n; i++)
				cin >> a[i];
			for (i = 0; i < n; i++)
				cout << endl;

			for (j = 0; j < n - 1; j++)
				for (i = 0; i < n - j - 1; i++)
					if (a[i] > a[i + 1])
					{
						t = a[i];
						a[i] = a[i + 1];
						a[i + 1] = t;
					}
			cout << a[n - 1] << " ";
			cout << endl;

		}

		if (datatype == 'F')
		{
			float *b = new float[n];
			for (i = 0; i < n; i++)
				cin >> b[i];
			for (i = 0; i < n; i++)
				cout << endl;

			for (j = 0; j < n - 1; j++)
				for (i = 0; i < n - j - 1; i++) 
					if (b[i] > b[i + 1])
					{
						t = b[i];
						b[i] = b[i + 1];
						b[i + 1] = t;
					}

			cout << endl;

		}


	}

}
