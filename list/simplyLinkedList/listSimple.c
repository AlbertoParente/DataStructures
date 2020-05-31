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

int extract(TListSimple *list, int value) {
	if(list == NULL) return;
	TListSimple *listAux = list;
	while(listAux -> next != NULL) {
		if(listAux -> next -> element == value) {
			listAux -> next = listAux -> next -> next;
		} else {
			listAux = listAux -> next;
		}
	}
}

TListSimple *search(TListSimple *list, int value) {
	if(list == NULL) return;
	TListSimple *listAux = list -> next;
	while(listAux != NULL) {
		if(listAux -> element == value) {
			return listAux;
		} else {
			listAux = listAux -> next;
		}
	}
}

void show(TListSimple *list) {
	if(list == NULL) return;
	TListSimple *listAux = list -> next;
	printf("\n");
	while(listAux != NULL) {
		printf("%d ", listAux -> next);
		listAux = listAux -> next;
	}
}

void showKnot(TListSimple *list) {
	if(list == NULL) return;
	 printf("%d", list -> element);
}

void insertTheStart(TListSimple *list, int value) {
	TListSimple *listNew = create(value);
	listNew -> next = list -> next;
	list -> next = listNew;
}

TListSimple *removeTheStart(TListSimple *list) {
	if(list == NULL) return NULL;
	TListSimple *listRemove = list -> next;
	if(listRemove == NULL) return NULL;
	list -> next = listRemove -> next;
	return listRemove;
}

void insertInPosition(TListSimple *list, int value, int position) {
	TListSimple *listAux = list;
	int counter = 0;

	if(list == NULL) return;

	while(counter < position) {
		listAux = listAux -> next;
		counter++;		
	}

	TListSimple *listNew = create(value);
	
	listNew -> next = listAux -> next;
	listAux -> next = listNew;
}

void removeInPosition(TListSimple *list, int position) {
	TListSimple *listAux = list;
	int counter = 0;

	if(list == NULL) return;

	while(counter < position) {
		listAux = listAux -> next;		
		counter++;
	}

	if(listAux -> next -> next == NULL) {		
		listAux -> next = NULL;
	} else {
		listAux -> next = listAux -> next -> next;
	}	
}

int removeSortedDescending(TListSimple *list, int value) {
    TListSimple *listAux = list;

    if (list == NULL) return;

    while(listAux -> next != NULL) {
        TListSimple *valueRemoved = NULL;;
        
		if(listAux -> next -> element <= value) {
            valueRemoved = listAux -> next = listAux -> next -> next;
            return valueRemoved;
        } else {
            listAux = listAux -> next;
        }
    }
}

/*
int compareLinkedLists(TNo* list, TNoDe* no){
    TNoDe* listDoubly = no;
    TNo* listSimple = list;

    int positionListD = 0, positionListS = 0, quantityListS = size(listSimple), quantityListD = size(listDoubly), countList = 0;

    while(listSimple -> next != NULL && listDoubly -> next != NULL) {
        listSimple = listSimple -> next;
        listDoubly = listDoubly -> next;

        if (positionListD == quantityListS) {
            
			if (listDoubly -> element == listSimple -> element) {
                positionListD++;
                quantityListS++;
                countList++;
            }
        }
    }

    if (countList == quantityListS && countList == quantityListD) {
        return 1;
    } else {
        return 0;
    }
}
*/
