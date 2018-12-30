#include <stdio.h>
#include <stdlib.h>

int n;

void print_spiral_form(int a[n][n])
{	int st = 0;
	int en = n-1;
	int t = 0;
	while (t > n/2) {
		int i = st;
		int j = en;

		for (;  i <= j; j++) {
			printf("%d ", a[i][j]);
		}


	}
}

int main()
{
	scanf("%d", &n);

	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	print_spiral_form(a);
}
