#include "Soccer.h"

typedef struct {
	int soccer1, soccer2;
}TScoreboard;

struct Soccer {
	char team1[30];
	char team2[30];
	TScoreboard scoreboard;
};

TSoccer* newSoccer(char team1[30], char team2[30], int soccer1, int soccer2){
	TSoccer *s = (TSoccer *)malloc(sizeof(TSoccer));
	s -> team1 = team1;
	s -> team2 = team2;
	s -> scoreboard.soccer1 = soccer1;
	s -> scoreboard.soccer2 = soccer2;
}

TSoccer* winner(TSoccer *soccer){
	if(soccer -> scoreboard.soccer1 > soccer -> scoreboard.soccer2){
		printf("Vencedor: %s\n", soccer -> team1);
	}
	else if(soccer -> scoreboard.soccer2 > soccer -> scoreboard.soccer1){
		printf("Vencedor: %s\n", soccer -> team2);
	}
	else
		printf("Empate...!\n");
}

TSoccer* rout(TSoccer *soccer){
	if(soccer -> scoreboard.soccer1 - soccer -> scoreboard.soccer2 > 3 || 
	   soccer -> scoreboard.soccer2 - soccer -> scoreboard.soccer1 > 3)
	   return 1;
	else
		return 0;
}
