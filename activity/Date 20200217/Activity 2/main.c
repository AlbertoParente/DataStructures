#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Smartphone{
	char model[30];
	int memory;
	float height, width;
}TSmartphone;

typedef struct SoccerMatch{
	char nameTeamLeft[30];
	char nameTeamRight[30];
	
}TSoccerMatch;

typedef struct Scoreboard{
	int TeamLeft[30];
	int TeamRight[30];
}TScoreboard;


int main(int argc, char *argv[]) {
	TSmartphone Smartphone, *pSmartphone;
	pSmartphone = (TSmartphone *)malloc(sizeof(TSmartphone));
	
	printf("Digite o modelo: ");
	gets(pSmartphone -> model);
	
	printf("Digite a memory: ");
	scanf("%i",& pSmartphone -> memory);
	
	printf("Digite a altura e a largura: ");
	scanf("%f %f",&pSmartphone -> height, &pSmartphone -> width);
	
	printf("%s %i %f %f ", pSmartphone -> model, pSmartphone -> memory, pSmartphone -> height, pSmartphone -> width);
	return 0;
}
