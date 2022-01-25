#include<stdio.h>
#include<conio.h>

int main()
{	int n;
	printf("N = ");
	scanf("%d", &n);
    char a[n];
    int i;
    for(i = 0 ; i < n ; i++){
    	printf("Ten ngon ngu lap trinh thu %d : ", i+1);
    	scanf("%*c%[^\n]%*c", &a[i]);
	}
	for(i = 0 ; i < n ; i++){
    	printf("%s\n", a[i]);
	}
}
