#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Elemento{
	int num1;
	float num2;
}TElement;

void func(TElement *element){
	printf("\n\n%d\n\n", element->num1);
}

int main(int argc, char *argv[]) {
	TElement e;
	e.num1 = 18;
	func(&e);
	TElement *ptre;
	ptre = (TElement *)malloc(sizeof(TElement));
	ptre -> num1 = 38;
	func(ptre);	
	return 0;
}
