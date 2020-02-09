#include <stdio.h>
#include <stlib.h>


#define Max 100
struct student {
	int register;
	char name[30];
	float n1, n2, n3;
};

typedef list List;

List* createList();

void clearList(List* li);

int sizeList(List* li);

int fullList(List* li);

int emptyList(List* li);

