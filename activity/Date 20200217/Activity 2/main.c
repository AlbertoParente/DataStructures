#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Smartphone{
	char model[30];
	int memory;
	float height, width;
}TSmartphone;

typedef struct Scoreboard{
	int teamLeft;
	int teamRight;
}TScoreboard;

typedef struct SoccerMatch{
	char nameTeamLeft[30];
	char nameTeamRight[30];
	TScoreboard *scoreboard;
}TSoccerMatch;

int main(int argc, char *argv[]) {
	TSmartphone *pSmartphone;
	pSmartphone = (TSmartphone *)malloc(sizeof(TSmartphone));
	
	TSoccerMatch *pSoccerMatch;
	pSoccerMatch = (TSoccerMatch *)malloc(sizeof(TSoccerMatch));
	
	pSoccerMatch -> scoreboard = (TScoreboard *)malloc(sizeof(TScoreboard));
	
	printf("Digite o modelo: \n");
	gets(pSmartphone -> model);
	
	printf("Digite a memory: \n");
	scanf("%i",&pSmartphone -> memory);
	
	printf("Digite a altura e a largura: \n");
	scanf("%f %f",&pSmartphone -> height, &pSmartphone -> width);
	
	printf("\n%s \nMemoria de %iG\nAltura de %f\nLargura de %f \n", pSmartphone -> model, pSmartphone -> memory, pSmartphone -> height, pSmartphone -> width);
	printf("\n=================================================================================================================\n\n");
	
	fflush(stdin);
	
	printf("Digite o nome do time A: \n");
	gets(pSoccerMatch -> nameTeamLeft);
	
	printf("Digite o nome do time B: \n");
	gets(pSoccerMatch -> nameTeamRight);
	
	printf("Placar do time A: \n");
	scanf("%i",&pSoccerMatch -> scoreboard -> teamLeft);
	
	printf("Placar do time B: \n");
	scanf("%i",&pSoccerMatch -> scoreboard -> teamRight);
	
	printf("\nTime %s: %i \nTime %s: %i", pSoccerMatch -> nameTeamLeft, pSoccerMatch -> scoreboard -> teamLeft, 
	       pSoccerMatch -> nameTeamRight, pSoccerMatch -> scoreboard -> teamRight);
	
	return 0;
}
