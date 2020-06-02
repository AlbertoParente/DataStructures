#include <stdio.h>
#include <stdlib.h>
#include "listSimple.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	TListDoubly *listD = neww(5);
	insertD(listD, 4);
	insertD(listD, 2);
	insertD(listD, 6);
	insertD(listD, 8);
	insertD(listD, 9);
	
	TListSimple *list = create(5);
	insert(list, 4);
	insert(list, 2);
	insert(list, 6);
	insert(list, 8);
	insert(list, 9);
	
	
	
	return 0;
}
