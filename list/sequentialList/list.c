#include <stdio.h>
#include <stdlib.h>
#include "list.h"
 
const int TAM = 100;
 
struct List{
    int vector[100];
    int quantity;
    int total;
};
 
TList *create() {
    TList *list = (TList*) malloc(sizeof(TList));
    list -> quantity = 0;
    list -> total = 0;
    return list;
}

int size(TList *list) {
    return list -> quantity;
}
 
void insert(TList *list, int value) {
    int i;
    int quantityElements = list -> quantity;
    if(list -> quantity == TAM) return;
    
    list -> vector[quantityElements] = value;
    list -> quantity++;
}

int extract(TList *list, int value) {
    int positionValueFound = search(list, value), index;
    int quantity = size(list);
    
    if(positionValueFound == -1) {
        return -1;
    }
    for(index = positionValueFound +1; index < quantity; index++) {
        list -> vector[index - 1] = list -> vector[index];
    }
    
    list -> quantity--;
    return positionValueFound;
}

int search(TList *list, int value) {
    int quantityElements = list -> quantity, i;
 
    for(i = 0; i < quantityElements; i++) {
        if(list -> vector[i] == value) {
            return i;
        }
    }

    return -1;
}
 
void print(TList *list) {
    int quantityElements = list -> quantity, i;
 
    for(i = 0; i < quantityElements; i++) {
        printf("[%i] -> ", list -> vector[i]);
    }
}

void extractAll(TList *list, int value) {
    int quantityElements = list -> quantity, index;
    int positionValueFound = search(list, value);

    while(positionValueFound != -1) {        
        for(index = positionValueFound + 1; index < quantityElements; index++) {
            list -> vector[index - 1] = list -> vector[index];            
        }
        
        list -> quantity--;
        positionValueFound = search(list, value);
    }
}

void insertTheStart(TList *list, int value) {
    int index, quantityElements = size(list);

    if(list -> quantity == TAM) return;

    for(index = quantityElements -1; index >= 0; index--) {
        list -> vector[index + 1] = list -> vector[index];
    }

    list -> vector[index +1] = value;
    list -> quantity++;
}

void removerTheStart(TList *list) {
	int index, quantity = size(list);

	if(size(list) == 0) return;

	for(index = 1; index < quantity; index++) {
		list -> vector[index - 1] = list -> vector[index];
	}

	list -> quantity--;
}

void invert(TList *list) {
	int index, n, quantityElements = size(list);
	int startingPosition = 0;

	if(list -> quantity == TAM) return;

	for(index = 0; index < quantityElements / 2; index++) {			
		startingPosition = list -> vector[index];
		list -> vector[index] = list -> vector[quantityElements - index - 1 ];
		list -> vector[quantityElements - index - 1] = startingPosition;
	}
}

int compare(TList* list, TList* list2) {
	int i, valueActual, valueList2, quantityList = size(list);
	int counter = 0;

	for(i = 0; i < quantityList; i++) {
		valueActual = list -> vector[i];
		valueList2 = search(list2, valueActual);
		if(valueList2 != -1) {
			counter++;
		}		
	}

	return counter;
}

void insertInPosition(TList* list, int value, int position) {
	int index, quantityElements = size(list);

	if(list -> quantity == TAM || position >= list -> quantity +1) return;

	for(index = quantityElements - 1; index >= 0; index--) {		
		list -> vector[index + 1] = list -> vector[index];
		if(index == position || index + 1 == position) {
			list -> vector[position] = value;
			list -> quantity++;
			return;
		}		
	}	
}

void extractInPosition(TList *list, int position) {
	int index, quantityElements = size(list);

	if(list -> quantity == TAM) return;

	if(position < quantityElements) {
		for(index = position + 1; index < quantityElements; index++) {
			list -> vector[index -1] = list -> vector[index];
		}

		list -> quantity--;
	} else {
		return;
	}
}

int remove_Impares(TList *list) {
    int index = 0;
    
    while(index != size(list)) {
        if (list -> vector[index] % 2 != 0) {
            extract(list, list -> vector[index]);
            index = 0;
        } else {
            index++;
        }
    }
    return 0;
}

// Recursive Call --------------------------------------------------------------
void sum1(TList *list, int indexStart, int indexEnd) {
	int middle = (indexStart + indexEnd) / 2;
	
	if(indexStart > indexEnd) return;
	
	if(indexStart == indexEnd) {
        list -> vector[indexStart] += 1;
        return;
    };
    
    list -> vector[middle] += 1;
	sum1(list, indexStart, middle -1);
    sum1(list, middle +1, indexEnd);
}

int total(TList* list, int indexStart, int indexEnd) {
    if(indexStart > indexEnd) return;
    
    if(indexStart == indexEnd) {
        list -> total += list -> vector[indexEnd];
        return list -> total;
    }
    
    int middle = (indexStart + indexEnd) / 2;
    list -> total += list -> vector[middle];
    total(list, indexStart, middle -1);
    total(list, middle +1, indexEnd);
    
	return list -> total;
}

void sortingValues(TList *list, int value){
    int index, i;
	
	if(value < 0) {
    	return;	
    }
        
    for(i = 0; i < value +1; i++){
        
		if(list -> vector[value] < list -> vector[i]) {
            index = list -> vector[i];
            list -> vector[i] = list -> vector[value];
            list -> vector[value] = index;
        }
    }
    
    sortingValues(list, value -1);
}
