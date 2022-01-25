#include <stdio.h>

int main() {
	int n, x, i;
	scanf("%d", &n);
	
	int dd[200] = {0};
	for (i = 0; i < n; ++i) {
		scanf("%d", &x);
		dd[x] = 1;
	}
	for (i = 199; i >= 1; --i) {
		if (dd[i] == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}
