#include <stdio.h>
#include <stlib.h>

struct list {
	int qtd;
	struct student dados [MAX];
};

List* createList(){
	List *li;
	li = (List*) malloc(sizeof(struct list));
	if (li != NULL) {
		li -> qtd = 0;
	}
	return li;
}

void clearList(List* li){
	free(li):
}
