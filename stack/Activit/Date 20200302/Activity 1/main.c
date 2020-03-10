#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	TStack *s = neww(9);
	stackUp(s, 5);
	stackUp(s, 7);
	int us = unstack(s);
	int i;
	for(i=3; i<=5; i++){
		stackUp(s, i);
	}
	
	for(i=10; i<=13; i++){
		printf("%d\n", unstack(s));
	}
	return 0;
	*/
	
	TStack *s = neww(4);
	stackUp(s, 1);
	stackUp(s, 2);
	stackUp(s, 3);
	stackUp(s, 4);
	show(s);
	s = reverse(s);
    printf("\n");
    show(s);
	return 0;
	
}
