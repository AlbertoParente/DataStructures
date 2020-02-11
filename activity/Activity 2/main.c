#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int qtd 3;
struct raceRegistration {
	float frequency, temperature, elevation;
	
};

void listRegistrationRace(struct raceRegistration *rr, int n, int, info) {
	int i;
	switch (info){
		case 1: for(i=0; i<n; i++){
			printf("%f\n", rr[i].frequency);
		} break;
		case 2: for(i=0; i<n; i++){
			printf("%f\n", rr[i].temperature);
		} break;
		case 2: for(i=0; i<n; i++){
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

	printf("Digite os dados: \n");
	for(i=0; i<qtd; i++){
		printf("Frequencia: \n",);
		scanf("%f",&registration[i].frequency);
		printf("Temperatura: \n",);
		scanf("%f",&registration[i].temperature);
		printf("Elevacao: \n",);
		scanf("%f",&registration[i].elevation);
	}
	listRegistrationRace(registration, qtd, 1);
	listRegistrationRace(registration, qtd, 2);
	listRegistrationRace(registration, qtd, 3);
	printf("Meida frequencia: %f\n",calcAverage(registration, qtd));
	printf("Meida temperatura: %f\n",calcBigger(registration, qtd));
	return 0;
}
