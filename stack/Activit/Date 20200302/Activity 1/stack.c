#include <stdio.h>
#include <stdlib.h>


struct Stack {
	int *vector;
	int ts, qtd;
};

TStack *neww(int n){
	TStack *stack = (TStack *)malloc(sizeof(TStack));
	pilha -> vector = malloc(sizeof(int)*n);
	stack -> qtd = n;
	stack -> ts = -1;
	return stack;
}

void stackUp(TStack *stack, int x){
	if(stac -> tp < stack -> qtd -1){
		stack -> tp = tp +1;
		stack -> vector[stack -> tp = x];
	}
}
int unstack(TStack *stack);
int size(TStack *stack);
int top(TStack *stack);
