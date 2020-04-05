#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	TStack *s = neww(3);
	
	stackUp(s, 7);
	stackUp(s, 9);
	stackUp(s, 10);
	
	show(s);
	
	//firstOccurrence(s, 7);	
	removeValue(s, 7);
	
	//reverse(s);
    printf("\n");
    
    show(s);
    free(s);
	return 0;
	
}
