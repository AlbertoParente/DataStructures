#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int weight = 0;
	float height, imc;
	
	printf("--Calculo de IMC (Indice de Massa Corporea)--\n");
	printf("Informe o seu peso: \n");
	scanf("%d",&weight);
	printf("Informe sua altura: \n");
	scanf("%f",&height);
	imc=weight/(height*height);
	if(imc<18){
		printf("Voce esta a baixo do peso.\n");
	}
	else if(imc<25){
		printf("Seu peso esta ideal.\n");
	}
	else if(imc<30){
		printf("Voce acima do peso.\n");
	}
	else
	 printf("--Caso estiver acima do peso procure um nutricionista.--");
	
	system("pause");
	return 0;
}
