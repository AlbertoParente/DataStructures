#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct Queue {
	int vector[5];
	int start, final, quantity;
};

TQueue *neww() {
	TQueue* queue = (TQueue*)malloc(sizeof(TQueue));
	queue->start = -1;
	queue->final = -1;
	queue->quantity = 0;

	return queue;	
}

void enqueue(TQueue *queue, int value) {
	if ( ! ((queue -> final + 1) % 5 == queue -> start) ) {
		if (queue -> start == -1) queue -> start = 0;
		queue -> final = (fila -> final + 1) % 5;
		queue -> vector[queue -> final] = value;
		queue -> quantity++;
	}
}

int dequeue(TQueue *queue) {
	int queuing = -1;
	if (fila -> start > -1) {
		queuing = queue -> vector[queue -> start];
		if (queue -> start == queue -> final) {
			queue -> start = queue -> final = -1;
		} else {
		queue -> start = (queue -> start + 1) % 5;
		queue -> quantity--;
		}
	}
	return desenfileirado;
}

void show(TQueue *queue) {
	int i, index;
	index = queue -> start;
	printf("\nInicio: %i\n", queue -> vector[queue->start]);
	printf("\nFinal: %i\n", queue -> vector[queue->final]);
	for (i = 0; i < queue -> quantidade; i++) {
		printf("\n%i\n", queue -> vector[index]);
		index = (index + 1) % 5;
	}
}

int size(TQueue *queue) {
	return queue->quantity;
}

int frontPosition(TQueue *queue) {
	if (queue->start > -1) {
		return queue->start;
	}
}

int empty(TQueue *queue) {
	if (queue -> start == -1) {
		return 0;
	}
	else {
		return 1;
	}
}

int full(TQueue *queue) {
	if (((queue->final + 1) % 5 == queue->start)) {
		return 0;
	}
	else {
		return 1;
	}
}

int queueFrontPosition(TQueue *queue) {
	return queue -> start;
}

void destruct(TQueue *queue) {
	if (queue != NULL){
		free(queue);
	}
}

void queueInvert(TQueue *queue) {
	int size = size(queue);
	if (size == -1) {
		printf("A Pilha esta vazia.\n");
		return;
	}

	int i, inversor = size / 2, queueAux, start = queue -> start, final = queue -> final - 1;

	for (i = 0; i < inversor; i++) {
		queueAux = queue -> vector[start];
		queue -> vector[start] = queue -> itens[final];
		queue -> vector[final] = queueAux;
		start = (start + 1) % 5;
		final = (final - 1) % 5;
	}
}
