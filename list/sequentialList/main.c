#include <stdio.h>
#include <stdlib.h>
#include "list.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	TList *list = create(7);
		
		
	insert(list, 4);
	insert(list, 2);
	insert(list, 6);
	insert(list, 8);
	insert(list, 9);
	insert(list, 11);	
	insert(list, 13);	
	
	print(list);
	printf("\n");
	
	remove_Impares(list);
	
	print(list);
	return 0;
}
