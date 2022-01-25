#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int max1 = 0, max2 = 0;
	
	int a[n + 1];
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
		if (a[i] > max1) {
			max2 = max1;
			max1 = a[i];
		}
		else if (a[i] > max2) {
			max2 = a[i];
		}
	}
		if (max2 == 0 || max1 == max2) {
		printf("0");
		return 0;
	}
	
	int res[1000], id = 0;
	for (int i = 1; i <= n; ++i) {
		if (a[i] == max2) {
			res[id++] = i;
		}
	}
	printf("%d\n", id);
	for (int i = 0; i < id; ++i) {
		printf("%d ", res[i]);
	}
	return 0;
}
