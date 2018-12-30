#include <stdio.h>

void main()
{
	int i;
	int j;

	scanf("%d", &i);
	scanf("%d", &j);

	int t;

	t = (i-j)/2;
	printf("%d\n", t+j);
	printf("%d", t);
}