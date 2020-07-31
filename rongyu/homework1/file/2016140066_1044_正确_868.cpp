#include <iostream>
using namespace std;
int r, c,t=0;

int **newarr2d(int rows, int cols) {
	int **p, i;

	p = (int **)malloc(rows * sizeof(int *));
	if (NULL == p) exit(1);
	for (i = 0; i < rows; i++) {
		p[i] = (int *)malloc(cols * sizeof(int));
		if (NULL == p[i]) exit(1);
	}
	return p;
}


void deletearr2d(int **p, int rows) {
	int i;

	for (i = 0; i < rows; i++) {
		free(p[i]);
	}
	free(p);
}


int main() {
	int **arr2d, i, j;
	cin >> t;
	while (t--)

	{
		cin >> r >> c;

		arr2d = newarr2d(r, c);

		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				cin >> arr2d[i][j];
			}
		}
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
			
			}
	



		}
		int max, min;
		max = min = arr2d[0][0];
		for (int a = 0; a < r; a++)
		{
			for (int b = 0; b < c; b++)
			{
				if (max < arr2d[a][b])
				{
					max = arr2d[a][b];
				}
				if (min > arr2d[a][b])
				{
					min = arr2d[a][b];
				}

			}


		}
		printf("%d %d\n", min, max);
	}
}
