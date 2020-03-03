#include <stdio.h>
#include <stdlib.h>
#include "account.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	TAccount *c1, *c2;
	
	c1 = neww(1234, 150);
	c2 = neww(1234, 150);
	inform(c1);
	deposit(c2, 300);
	inform(c2);
	return 0;
}
