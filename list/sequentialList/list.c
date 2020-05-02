#include <stdio.h>
#include <stdlib.h>
#include "list.h"
 
const int TAM = 100;
 
struct List{
    int vector[100];
    int quantity;
};
 
TList *create() {
    TList *list = (TList*) malloc(sizeof(TList));
    list -> quantity = 0;
    
    return list;
}
 
int size(TList *list) {
    return list -> quantity;
}
 
void insert(TList *list, int value) {
    int i;
    int quantityElements = list -> quantity;
    if(list -> quantity == TAM) return;
    
    list ->  vector[quantityElements] = value;
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

void insertStart(TList *list, int value) {
    int index, quantityElements = size(list);
    
    if(list -> quantity == TAM) return;

    for(index = quantityElements -1; index >= 0; index--) {
        list -> vector[index + 1] = list -> vector[index];
    }

    list -> vector[index +1] = value;
    list -> quantity++;
}
