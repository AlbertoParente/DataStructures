#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct Stack {
	int *vector;
	int qtd, top;	
};

TStack *newww(int n){
	TStack *stack = (TStack *)malloc(sizeof(TStack));
	stack -> vector = malloc(sizeof(int) *n);
	stack -> qtd = n;
	stack -> top = -1;
	return stack;
}

void stackUp(TStack *stack, int x){
	if(stack -> top < stack -> qtd -1){
		stack -> top++;
		stack -> vector[stack -> top] = x;
	}
}

int unStack(TStack *stack){
	if(stack -> top > -1){
		stack -> top--;
		return stack -> vector[stack -> top + 1];
	}
}

int size(TStack *stack){
	return stack -> qtd;
}

int stackTop(TStack *stack){
	return stack -> vector[stack->top];
}

int stackEmpty(TStack *stack){
	if(stack -> top == -1){
        return 0;
    }
    return 1;
}

void showw(TStack *stack){
	int i;
    for (i = 0; i < stack->qtd; i++){
    	printf("%3d", stack->vector[i]);
	}
}

void reverse(TStack *stack){
    TStack *stackAux = neww(stack->qtd);
    TStack *stackAux2 = neww(stack->qtd);
    int i,j, index;
    for(i = 0; i <= stack->qtd; i++){
        stackUp(stackAux,unStack(stack));
    }

    for(j = 0; j <= stack->qtd; j++){
        stackUp(stackAux2,unStack(stackAux));
    }

   for(index = 0; index <= stack->qtd; index++){
        stackUp(stack,unStack(stackAux2));
    }
}

void removeValue(TStack *stack, int value){
	if(stackEmpty(stack) == 1){
        TStack *stackAux = neww(stack->qtd);
        int i,j;
        for(i = 0; i <= stack -> qtd; i++){
            if(stackTop(stack) == value){
    			unStack(stack);
            }
            stackUp(stackAux,unStack(stack));
        }
        
        //stackAux = (TStack *)realloc(stack, sizeof(TStack));
        
        for(j = 0; j <= stack -> qtd; j++){
	        stackUp(stack, unStack(stackAux));
        }
    }
}
/*
void firstOccurrence(TStack *stack, int value){
	TStack *aux1;
	int i, k, cont = 0;
	
	k = stack -> top +1;
	aux1 = neww(stack -> qtd);
	
	for(i = 0; i<(k); i++) {
		stackUp(aux1,unStack(stack));
	}
	
	for(i = 0; i<(k); i++) {
		int v = unStack(aux1);
		if(v != value || cont ==1) {
			stackUp(stack, v);
		} else {
			cont = 1;
		}
	}	
}*/

