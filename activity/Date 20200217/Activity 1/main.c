#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Register {
	char name[30];
	float note;
};

int main(int argc, char *argv[]) {
	struct Register regs, *PRegs;
	printf("Digite o seu nome: \n");
	gets(regs.name);
	printf("Seu nome e: %s\n", regs.name);
	PRegs = (struct Register *)malloc(sizeof(struct Register));
	gets(PRegs -> name);
	printf("Seu nome e: %s\n", PRegs -> name);
	return 0;
}
