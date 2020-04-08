#include <stdio.h>
#include <stdlib.h>
#include "queuePriority.h"

struct QueuePriority {
	int *vector;
	int quantity;
	int size;
};

TQueuePriority *neww(int quantity) {
	TQueuePriority *queue = (TQueuePriority*)malloc(sizeof(TQueuePriority));
    queue -> vector = malloc(quantity * sizeof(int));
	queue -> quantity = quantity + 1;
	queue -> size = 0;
	return queue;
}

int queueSize(TQueuePriority *queue) {
	return queue -> size;
}

int empty(TQueuePriority *queue) {
	return queue -> size == 0;
}

int full(TQueuePriority *queue) {
	return queue -> size == queue -> quantity;
}

int queueQuantity(TQueuePriority *queue) {
	return queue -> quantity;
}

void swap(TQueuePriority *queue, int i, int j) {
	int temp = queue -> vector[i];
	queue -> vector[i] = queue -> vector[j];
	queue -> vector[j] = temp;
}

void correctUp(TQueuePriority *queue) {
	int i = queue -> size;
	while(i >= 2 && queue -> vector[i/2] < queue -> vector[i]) {
		swap(queue, i/2, i);
		i /= 2;
	}
}

void correctDown(TQueuePriority *queue) {
	int i = 1;
	while(2 * i <= queue -> size) {
		int j = 2 * i;
		if(j < queue -> size && queue -> vector[j] < queue -> vector[j + 1]) {
			j++;
		}
			
		if(queue -> vector[i] >= queue -> vector[j]) {
			i = queue -> size;
		} else {
			swap(queue, i, j);
			i = j;
		}
	}
}

void enqueue(TQueuePriority *queue, int value) {
	if(full(queue)) {
		printf("\nFila cheia...!\n", value);
		return;
	}

	queue -> size++;
	queue -> vector[queue -> size] = value;
	correctUp(queue);
}

int dequeue(TQueuePriority *queue) {
	if(empty(queue)) {
		printf("\nFila vazia...!\n");
		return -1;
	}
	
	int max = queue -> vector[1];
	queue -> vector[1] = queue -> vector[queue -> size];
	queue -> size--;
	correctDown(queue);
	return max;
}

void show(TQueuePriority *queue) {
	int i;
	if(empty(queue)) {
		printf("The queue is empty!");
		return;
	}
	
	for(i = 1; i <= queue -> size; i++) {
		printf("[%d]", queue -> vector[i]);
	}		
	
	printf("");
}

int extractMax(TQueuePriority *queue){
    if(queue -> quantity > 0) {
		int max = queue -> vector[1];
		queue -> vector[1] = queue -> vector[queue -> quantity];
		queue -> quantity = queue -> quantity -1;
		correctDown(queue);
		return max;
    }
}

void insert(TQueuePriority *queue, int value) {
    if(queue -> quantity < TAM) {
        queue -> quantity = queue -> qtd +1;
        queue -> vetor[queue -> quantity] = value;
        corrigirSubindo(queue);
    }
}
