#include<stdio.h>

int main()
{
	int n, i, j, cnt1, cnt2, t, tmp;
	scanf("%d", &n);
	cnt1 = n; t = 1;
	for(i = 1; i <= n; i++)
	{
		printf("\n");
		for(cnt2 = 1; cnt2 <= cnt1; cnt2++) printf("  ");
		cnt1--;
		tmp = t; cnt2 = 1;
		for(j = i; cnt2 <= tmp; j++)
		{
			printf("%d ", j % 10);
			cnt2++;
		}
		tmp = t; cnt2 = 1; j -= 2;
		for(; cnt2 <= tmp-1; j--)
		{
			printf("%d ", (j + 100000) % 10);
			cnt2++;
		}
		t++;
	}
	return 0;
}
