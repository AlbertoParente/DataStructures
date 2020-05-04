#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct List {
	int element;
	TListDoubly *next;
	TListDoubly *previous;
};

TListDoubly *create(int value) {
	TListDoubly *list = (TListDoubly *)malloc(sizeof(TListDoubly));
	list -> element = value;
	list -> next = NULL;
	list -> previous = NULL;
}

int size(TListDoubly *list) {
	
}
void insert(TListDoubly *list, int value);
int extract(TListDoubly *list, int value);

TListDoubly *search(TListDoubly *list, int value) {
	if(list == NULL) return NULL;
	TListDoubly *listAux = list -> next;
	while(listAux != NULL) {
		if(listAux -> element == value) return listAux;
			listAux = listAux -> next
	}
	return NULL;
}

void show(TListDoubly *list);
