#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


void printValueWithoutEmptying(TQueue* queue) {
	int i;
	int sizeQueue = queueSize(queue);
	int valueDequeue;
	TQueue* queueAux = neww();
	for(i = 0; i < sizeQueue; i++) {
		valueDequeue = dequeue(queue);
		printf("\n%i\n", valueDequeue);
		enqueue(queueAux, valueDequeue);
		enqueue(queue, dequeue(queueAux));
	}
}

void printEmptyingValue(TQueue* queue) {
	int i;
	int sizeQueue = queueSize(queue);
	int valueDequeue;
	for(i = 0; i < sizeQueue; i++) {
		valueDequeue = dequeue(queue);
		printf("\n%i\n", valueDequeue);
	}
}
/*
void removeValue(TQueue* queue, int input) {
	TQueue* queueAux = neww();
	int i, j;
	int sizeQueue = queueSize(queue);
	for(i = 0; i < sizeQueue; i++){
		if (queueFrontPosition(queue) == input) {
			dequeue(queue);
		}
			enqueue(queueAux, dequeue(queue));
	}

	for(j = 0; j < sizeQueue; j++) {
		enqueue(queue, dequeue(queueAux));
	}
}*/

int removeValue(TQueue* queue, int input) {
	if (queue == empty(queue)){
		printf("Fila esta vazia...");
		return;
	}
	
	int i = queueSize(queue) - 1;
	int j;
	for(j = 0; queueFrontPosition(queue) != input; i--, j++) {
		enqueue(queue, dequeue(queue));
		if(j == queueSize(queue) - 1) {
			return;
		} 
	}
	
	dequeue(queue);

	for(i = i; i > 0; i--) {
		enqueue(queue, dequeue(queue));
	}
		
}

void invert(TQueue* queue) {
	int i, size = queueSize(queue);
	int vector[size];
	for(i = 0; !empty(queue); i++)
		vector[i] = dequeue(queue);

		
	for(i = size; i >= 0; i--)
		enqueue(queue, vector[i]);

}


int main(int argc, char*argv[]) {
	TQueue* queue = neww();	

	enqueue(queue, 7);
	enqueue(queue, 8);
	enqueue(queue, 5);
	enqueue(queue, 9);
	enqueue(queue, 10);
	
	show(queue);
	/*
	removeValue(queue, 11);
	removeValue(queue, 12);
	show(queue);*/
	
	
	/*removeValue(queue, 4);
	removeValue(queue, 10);
	show(queue);*/
	

	invert(queue);
	show(queue);
	
}
