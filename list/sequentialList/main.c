#include <stdio.h>
#include <stdlib.h>
#include "list.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	TList *list = create(7);
		
		
	insert(list, 4);
	insert(list, 2);
	insert(list, 6);
	insert(list, 8);
	insert(list, 9);
	insert(list, 11);
	insert(list, 14);
	
	print(list);
	printf("\n");
	
	sum1(list, 0, 6);
	
	print(list);
	
	//------------------------
	
	int odd_n-esimo(int n) {
 		return n==1 ? 1: odd_n-esimo(n-1) + 2;
	}
	
	int fibonacci_n-esimo(int n) {
 		return n < 4 ? 1: fibonacci_n-esimo(n-1) + fib_t(n - 2) + fib_t(n - 3);
	}

	return 0;
}
