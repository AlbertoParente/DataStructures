#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, *b;

	printf("Informe o valor: ");
	scanf("%i",&a);
	b =&a;
	*b = 2*(*b);
	b = malloc(sizeof(a));	
	scanf("%i",b);
	
	printf("\n %i", a);
	printf("\n %i", *b);	
	
	return 0;
}
