#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define CARDS 52

void draw(int drawn[], int ndraw ){
	int i, j, skipped, notdrawn, card, keeplooking;
	notdrawn = CARDS;
	for(i = 0 ; i < ndraw ; i++){
		card = rand() % notdrawn;
		skipped = 0;
		keeplooking = 1;
		for(j = 0 ; j < CARDS && keeplooking == 1 ; j++){
			if(drawn[j] == 0 ){
				drawn[j] = 1;
				keeplooking = 0;	
			}
			else{
				skipped++;
			}
		}
	}
	
}
