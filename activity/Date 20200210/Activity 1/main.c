#include <stdio.h>
#include <stdlib.h>

/*Programa para saber a media de temperatura corporal, a maior frequencia cardiaca 
  registrada e a diferenca de elevação de terreno inicial e final.*/

int main(int argc, char *argv[]) {
	const int qtd = 3;
	float heartRate[qtd], bodyTemperature[qtd], terrainElevation [qtd], average;
	float sumTemperature, biggerFrequency, difference;
	int i;
	
	printf("\t\t-- Informe os dados a seguir -- \n");
	printf("\n");
	for(i=0; i<qtd; i++){
		printf("Informe sua frequencia cardiaca: \n", i);
		scanf("%f",&heartRate[i]);
		printf("Informe sua temperatura: \n", i);
		scanf("%f",&bodyTemperature[i]);
		printf("Informe a elevacao do terreno: \n", i);
		scanf("%f",&terrainElevation[i]);
		
		bodyTemperature[i] = bodyTemperature[i] + sumTemperature;
		
		if (heartRate[i] > biggerFrequency){
			biggerFrequency = heartRate[i];
		}
	}
	
	difference = terrainElevation [0] - terrainElevation[qtd-1];
	sumTemperature = sumTemperature / qtd;
	printf("\n");
	printf("*****************************************************************************\n");
	printf("\n");
	printf("A media da temperatura e: %f\n", sumTemperature);
	printf("Sua maior frequencia cardiaca e: %f\n", biggerFrequency);
	printf("A diferenca de elevacao final referente a inicial e: %f\n", biggerFrequency);

	return 0;
}
