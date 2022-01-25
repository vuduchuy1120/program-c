#include<stdio.h>

void clear () {
    while (getchar() != '\n');
}

int isAlpha(char c) {
    return (c >= 'A' && c <= 'Z');
}

int isDigit(char c) {
    return (c >= '0' && c <= '9');
}

void add_id(char *a ,char *b, char *c, char *d, char *e, char *f) {
	int keepdoing = 1;
	do{	
		printf("+Enter product id:  ");
		scanf("%c%c%c%c%c%c",a , b, c, d, e, f);
		if(!(isAlpha(*a) && isAlpha(*b) && isAlpha(*c) && isDigit(*d) && isDigit(*e) && isDigit(*f))) {
			printf("Product id is not valid. Please enter again!\n\n");
			clear();
		}
		else
			keepdoing = 0;
			
	} 
	while(keepdoing == 1);
	
}
main(){
	char a, b, c, d, e, f;
	int n;
	add_id(&a, &b, &c, &d, &e, &f);
    return 0;
}
