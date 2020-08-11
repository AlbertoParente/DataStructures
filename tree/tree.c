#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "tree.h"

TNo *create(int v) {
	TNo *e = (TNo *)malloc(sizeof(TNo));
	e -> value = v;
	e -> left = NULL;
	e -> right = NULL;
	return 0;
}

TNoN *create(int v, int qtdChildren) {
	TNoN *e = (TNoN *)malloc(sizeof(TNoN));
	e -> value = v;
	e -> children = (TNoN **)malloc(qtdChildren * sizeof(TNoN *));
	int i;
	for(i=0; i < qtdChildren; i++) e -> children[i] = NULL;
	return 0;
	
}
