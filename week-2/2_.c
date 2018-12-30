#include <stdio.h>
#include <math.h>


const limit = 1000000000;

void test(int start, int end) {
	int x = end - start;
	int prime[x + 1];
	
	for (int k = 0; k <= x; k++) {
		prime[k] = 1;
	}

	for (int i = start; i <= end; i++) {
		if (prime[i] == 1) {
			for (int j = i ; i*j <= 31622; j++ ) {
				prime[i*j] = 0;
			}

		}
	}

	for (int i = 0; i < n; i++) {
		if (prime[i] == 1) {
			printf("%d\n", prime[i]);
		}
	}
	
}

int main(void) {
	int t;
	scanf("%d", &t);	
	while (t) {
		int i;
		int j;
		scanf("%d", &i);
		scanf("%d", &j);
		test(i, j);
		t--;
		printf("\n");
	}

	return 0;
}