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


void insert(TListDoubly *list, int value) {
	if(list == NULL) return;

	TListDoubly *listAux = list;

	while(listAux -> next != NULL){
		listAux = listAux -> next;
	}

	TListDoubly *newElement = create(value);
	
	listAux -> next = newElement;
	newElement -> previous = listAux;

}

int extract(TListDoubly *list, int value) {
	if(list == NULL) return;

	TListDoubly *listAux = list -> next;

	while(listAux != NULL) {
		if(listAux -> element == value) {
			if(listAux -> next == NULL) {
				listAux -> previous -> next = NULL;
				free(listAux);
			} else {
				listAux -> previous -> next = listAux -> next;
				listAux -> next -> previous = listAux -> previous;
				free(listAux);
			}			
			return listAux -> element;
		}
		listAux = listAux -> next;
	}
}

TListDoubly *search(TListDoubly *list, int value) {
	if(list == NULL) return NULL;

	TListDoubly *listAux = list -> next;	

	while(listAux != NULL) {
		if(listAux -> element == value) {
			return listAux;
		}
		listAux = listAux -> next;
	}
	return NULL;
}

void insertInPosition(TListDoubly *list, int value, int position) {
	int counter = 0;

	if(list == NULL) return;

	TListDoubly *listAux = list;

	while(counter < position) {		
		listAux = listAux -> next;
		counter++;
	}

	TListDoubly* newElement = create(value);

	if (listAux -> next != NULL) newElement -> next = listAux -> next;
	if (listAux -> next != NULL) listAux -> next -> previous = newElement;

	listAux -> next = newElement;
	newElement -> previous = listAux;
}

TListDoubly* removeInPosition(TListDoubly *list, int position){
	int counter = 0;

	if(list == NULL) return NULL;

	TListDoubly* listAux = list;

	while(counter <= position) {
		if(listAux -> next == NULL) {			
			return NULL;
		}
		listAux = listAux -> next;
		counter++;
	}
	
	if(listAux -> next == NULL) {
		listAux -> previous -> next = NULL;
		free(listAux);
	} else {
		listAux -> previous -> next = listAux -> next;
		listAux -> next -> previous = listAux -> previous;
		free(listAux);
	}
	return NULL;
}

void becomeCircular(TListDoubly *list) {
	TListDoubly *listAux = list;
	TListDoubly *sentinel = list;
	
	while(listAux != NULL) {
		listAux = listAux -> next;
		if(listAux -> next == NULL) {
			listAux -> next = sentinel;
			sentinel -> previous = listAux;
			break;
		}
	}
}
