#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef struct Product {
	char id[10];
	char name[105];
	long long price;
} Product;

bool isUpper(char c) {
	return (c >= 'A' && c <= 'Z');
}
bool isLower(char c) {
	return (c >= 'a' && c <= 'z');
}
bool isDigit(char c) {
	return (c >= '0' && c <= '9');
}
bool check_id(char s[]) {
	if (strlen(s) != 6) return 0;
	if (isUpper(s[0]) && isUpper(s[1]) && isUpper(s[2]) && isDigit(s[3]) && isDigit(s[4]) && isDigit(s[5]))
		return 1;
	return 0;
}
bool check_name(char s[]) {
	int i;
	if (strlen(s) > 100) return 0;
	if (!isUpper(s[0]) && !isLower(s[0])) return 0;
	for (i = 1; i < strlen(s); ++i) {
		if (s[i] != ' ' && !isUpper(s[i]) && !isLower(s[i]) && !isDigit(s[i]))
			return 0;
	}
	return 1;
}

void add_id(char *s[10]) {
	int i, stop = 0;
	do {
		printf("Nhap id: ");
		scanf("%s%*c", s);
		if (!check_id(*s))
			printf("ID khong hop le, vui long nhap lai: ");
		else
			stop = 1;
	} while (!stop);
}

void add_name(char *s[105]) {
	int i, stop = 0;
	do {
		printf("Nhap ten: ");
		scanf("%s%*c", s);
		if (!check_name(*s))
			printf("Name khong hop le, vui long nhap lai: ");
		else
			stop = 1;
	} while (!stop);
}

void add_price(long long *x) {
	printf("Nhap gia: ");
	scanf("%lld", x);
}

void add_list_product(int N, Product Arr[]) {
	int i, j;
	for (i = 0; i < N; ++i) {
		add_id(Arr[i].id);
		for (j = 0; j < i; ++j) {
			if (strcmp(Arr[i].id, Arr[j].id) == 0) {
				do {
					printf("ID da ton tai, vui long nhap lai: ");
					add_id(&Arr[i].id);
				} while (strcmp(Arr[i].id, Arr[j].id) == 0);
			}
		}
		add_name(&Arr[i].name);
		add_price(&Arr[i].price);
	}
}

int main() {
	int N;
	scanf("%d", &N);
	
	Product Arr[100];
	add_list_product(N, Arr);
}

