#include <stdio.h>
#include <stdlib.h>

/* Programa para calcular a Frequencia a temperatura e a elevelção com struct e function. */

const int qtd = 3;
struct raceRegistration {
	float frequency, temperature, elevation;
};

void listRegistrationRace(struct raceRegistration *rr, int n, int info) {
	int i;
	switch (info){
		case 1: for(i=0; i<n; i++){
			printf("%f\n", rr[i].frequency);
		} break;
		case 2: for(i=0; i<n; i++){
			printf("%f\n", rr[i].temperature);
		} break;
		case 3: for(i=0; i<n; i++){
			printf("%f\n", rr[i].elevation);
		} break;
		default: printf("Valor Invalido");
	}
}

float calcAverage(struct raceRegistration *rr, int n){
	int i; float sum = 0;
	for(i=0; i<n; i++){
		sum = sum + rr[i].frequency;
	}
	return sum / n;
}

float calcBigger(struct raceRegistration *rr, int n){
	int i; float bigger = 0;
	for(i=0; i<n; i++){
		if(rr[i].temperature > bigger){
			bigger = rr[i].temperature;
		}
	}
	return bigger;
}

int main(int argc, char *argv[]) {
	int i;
	struct raceRegistration *registration;
	registration = malloc(qtd* sizeof(struct raceRegistration));
	printf("==================================================================\n");
	printf("\t\t-- Digite os dados -- \n");
	for(i=0; i<qtd; i++){
		printf("Frequencia: \n");
		scanf("%f",&registration[i].frequency);
		printf("Temperatura: \n");
		scanf("%f",&registration[i].temperature);
		printf("Elevacao: \n");
		scanf("%f",&registration[i].elevation);
	}
	listRegistrationRace(registration, qtd, 1);
	listRegistrationRace(registration, qtd, 2);
	listRegistrationRace(registration, qtd, 3);
	printf("==================================================================\n");
	printf("Media frequencia: %f\n",calcAverage(registration, qtd));
	printf("==================================================================\n");
	printf("Media temperatura: %f\n",calcBigger(registration, qtd));
	printf("==================================================================");
	return 0;
}
