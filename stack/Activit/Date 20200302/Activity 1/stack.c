#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct Stack {
	int *vector;
	int ts, qtd;
};

TStack *neww(int n){
	TStack *stack = (TStack *)malloc(sizeof(TStack));
	stack -> vector = malloc(sizeof(int) *n);
	stack -> qtd = n;
	stack -> ts = -1;
	return stack;
}

void stackUp(TStack *stack, int x){
	if(stack -> ts < stack -> qtd -1){
		stack -> ts = stack -> ts +1;
		stack -> vector[stack -> ts] = x;
	}
}


int unStack(TStack *stack){
	if(stack -> ts > -1){
		stack -> ts = stack -> ts -1;
		return stack -> vector[stack -> ts + 1];
	}
	else 
		return -1;
}
int size(TStack *stack){
	return stack -> qtd;
}

int stackEmpty(TStack *stack){
	if(stack->top == -1){
        return 0;
    }
    return 1;
}


void show(TStack *stack){
	int i;
    for (i = 0; i < stack->qtd; i++){
    	printf("%3d", stack->vector[i]);
	}
}

void reverse(TStack *stack){
	TStack *stackAux = neww(stack -> qtd);
	int i, j, index;
	for(i=0; i<=satck -> qtd; i++){
		stackUp(stackAux, unStack(stack));
	}
	
	for(j=0; j<=stackAux -> qtd; j++){
		stackUp(stack, stackAux -> vector[j]);
	}
}

TStack *reverseVector(TStack *stack) {
    Stack stackAux = neww();
    while (stack -> qtd > 0) {
        stackAux -> vector[stackAux -> qtd] = stack -> vector[stack -> qtd - 1];
        stack -> qtd--;
        stackAux -> qtd++;
    }
    return stackAux;
}

int top(TStack *stack){
	return stack->vector[stack->top];
}
