#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

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
