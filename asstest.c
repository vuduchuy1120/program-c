#include<stdio.h>

void clear () {
    while (getchar() != '\n');
}

void add_id(char *a ,char *b, char *c, char *d ,char *e, char *f){
    int rc;
	char after;
	int keepdoing = 1;
	do{
		printf("+Enter product id:  ");
		scanf("%c%c%c%c%c%c%c",a , b, c, d, e, f);
		if( !((*a >= 'A' && *a <= 'Z') && (*b >='A' && *b <= 'Z' ) && (*c >= 'A' && *c <= 'Z' ) && (*d >='0' && *d <= '9' ) && (*e >= '0' && *e <= '9' ) && (*f >='0' && *f <= '9' )  && after == '\n' )) {
			printf("Product id is not valid. Please enter again!\n\n");
			clear();
		}
		else
			keepdoing = 0;
			
	} 
	while(keepdoing == 1);
	
}
main(){
	char a, b,c, d, e, f ;
	add_id(&a, &b, &c, &d, &e, &f);
}
