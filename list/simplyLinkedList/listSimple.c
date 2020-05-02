#include <stdio.h>
#include <stdlib.h>
#include "listSimple.h"

struct List {
	int element;
	TListSimple *next;
};

TListSimple *create(int value) {
	TListSimple *list = (TListSimple*)malloc(sizeof(TListSimple));
	list -> element = value;
	list -> next = NULL;
	return list;
}

int size(TListSimple *list) {
	if(list == NULL) return -1;
	TListSimple *listAux = list -> next;
	int count = 0;
	while(listAux != NULL) {
		count++;
		listAux = listAux -> next;
	}
	return count;
}

void insert(TListSimple *list, int value) {
	if(list == NULL) return;
	TListSimple *listAux = list;
	while(listAux -> next != NULL) {
		listAux = listAux -> next;
	}
	listAux -> next = create(value);
}

int extract(TListSimple *list, int value);
TListSimple search(TListSimple *list, int value);
int print(TListSimple *list);
int show(TListSimple *list);
