#include<stdio.h>

int main(){
//	char myChoice;
//double cost;
//printf("Choose a candy (a, b or c) ? ");
//scanf("%c", &myChoice);
//switch ( myChoice ) {
//case 'A':
//case 'a':
//printf ("You selected candy A\n");
//cost = 1.50;
//break;
//case 'B':
//case 'b':
//printf ("You selected candy B\n");
//cost = 0.75;
//break;
//case 'C':
//case 'c':
//printf ("You selected candy C\n");
//cost = 1.10;
//break;
//default:
//printf("Sorry, we don't have your selection. Try again.\n");
//cost = 0.0;
//}
	int pin_code = 1234;
int entered_pin_code;
do
{
printf("Enter four-number pin code: ");
scanf("%d", &entered_pin_code);
if(entered_pin_code != pin_code)
printf("Wrong pin code. Please try again!\n\n");
}
while (entered_pin_code != pin_code);
}

