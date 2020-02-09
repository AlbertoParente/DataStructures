#include <stdio.h>
#include <stlib.h>

struct list {
	int quantity;
	struct studentDados [MAX];
};

List* createList(){
	List *li;
	li = (List*) malloc(sizeof(struct list));
	if (li != NULL) {
		li -> quantity = 0;
	}
	return li;
}

void clearList(List* li){
	free(li):
}

int sizeList(List* li) {
	if(li == NULL)
		return -1;
	else
		return li -> quantity;
}

int fullList(List* li) {
	li(== NULL)
		return -1;
	return (li -> quantity == MAX);
}

int emptyList(List* li) {
	li(== NULL)
		return -1;
	return (li -> quantity == 0);
}

int insertListFinal(List* li, struct student al) {
	if(li == NUUL)
		return 0;
	if(emptyList(li))
		return 0;
	li -> studentDados[li -> quantity] = al;
	li -> quantity++;
	return 1;
	
int insertListInitial(List* li, struct student al) {
	if(li == NUUL)
		return 0;
	if(emptyList(li))
		return 0;
	int i;
	
	for(i=li -> quantity-1; i>=0; i--)
		li -> studentDados[i+1] = li -> studentDados[i];
	li -> studentDados[0] = al;
	li -> quantity++;
	return 1;

int insertListOrdered(List* li, struct student al) {
	if(li == NULL)
		return 0;
	if(emptyList(li))
		return 0;
	int i, j = 0;
	while(i < li -> quantity && li -> studentDados[i].registration < al.registration)
		i++;
	
	for(j= li -> quantity -1; k >= i; k--)
		li -> studentDados[i+1] = li -> studentDados[i];
	li -> studentDados[0] = al;
	li -> quantity++;
	return 1;
}








}
