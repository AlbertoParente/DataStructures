#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "stack.h"

struct Queue {
	int vector[3];
	int start, final, quantity;
};

TQueue *neww() {
	TQueue* queue = (TQueue*)malloc(sizeof(TQueue));
	queue -> start = -1;
	queue -> final = -1;
	queue -> quantity = 0;

	return queue;	
}

void enqueue(TQueue *queue, int value) {
	if(!((queue -> final + 1) % 3 == queue -> start)) {
		if(queue -> start == -1) queue -> start = 0;
		queue -> final = (queue -> final + 1) % 3;
		queue -> vector[queue -> final] = value;
		queue -> quantity++;
	}
}

int dequeue(TQueue *queue) {
	int queuing = -1;
	if(queue -> start > -1) {
		queuing = queue -> vector[queue -> start];
		if(queue -> start == queue -> final) {
			queue -> start = queue -> final = -1;
		} else {
		queue -> start = (queue -> start + 1) % 3;
		queue -> quantity--;
		}
	}
	return queuing;
}

int queueSize(TQueue *queue) {
	return queue -> quantity;
}

int queueFrontPosition(TQueue *queue) {
	if(queue -> start > -1) {
		return queue -> vector[frontPosition(queue)];
	}
}

int empty(TQueue *queue) {
	if(queue -> start == -1) {
		return 0;
	} else {
		return 1;
	}
}

int full(TQueue *queue) {
	if(((queue -> final + 1) % 3 == queue -> start)) {
		return 0;
	} else {
		return 1;
	}
}

void show(TQueue *queue) {
	int i, index;
	index = queue -> start;
	printf("\nInicio: %i\n", queue -> vector[queue -> start]);
	printf("\nFinal: %i\n", queue -> vector[queue -> final]);
	for(i = 0; i < queue -> quantity; i++) {
		printf("\n%i\n", queue -> vector[index]);
		index = (index + 1) % 3;
	}
}

int frontPosition(TQueue *queue) {
	return queue -> start;
}

void destruct(TQueue *queue) {
	if(queue != NULL){
		free(queue);
	}
}

void queueInvert(TQueue *queue) {
	int size = queueSize(queue);
	if(size == -1) {
		printf("A Pilha esta vazia.\n");
		return;
	}

	int i, inversor = size / 2, queueAux, start = queue -> start, final = queue -> final - 1;

	for(i = 0; i < inversor; i++) {
		queueAux = queue -> vector[start];
		queue -> vector[start] = queue -> vector[final];
		queue -> vector[final] = queueAux;
		start = (start + 1) % 3;
		final = (final - 1) % 3;
	}
}

void inverterValue(TQueue *queue) {
	TStack *stackAux = newww(3);
	int i;
	for(i = 0; i < 3; i++) {
		stackUp(stackAux, dequeue(queue));
	}
	
	for(i = 0; i < 3; i++) {
		enqueue(queue, unStack(stackAux));
	}
}

