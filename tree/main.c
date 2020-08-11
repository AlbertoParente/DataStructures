#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "tree.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct No TNo;

struct No{
	int value;
	TNo *left;
	TNo *right
};

TNo *create(int v) {
	TNo *e = (TNo *)malloc(sizeof(TNo));
	e -> value = v;
	return e;
}

int main(int argc, char *argv[]) {
	
	TNo *root;
	root = create(1);
	root -> left = create(2);
	root -> right = create(3);
	root -> left -> left = create(4);
	root -> left -> right = create(5);
	
	TNoN *rootN;
	rootN = createN(1, 3);
	rootN -> children[0] = createN(2, 2);
	rootN -> children[1] = createN(3, 1);
	rootN -> children[2] = createN(4, 5);
	
	
	return 0;
}
