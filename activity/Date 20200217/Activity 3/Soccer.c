#include <stdio.h>
#include <stdlib.h>
#include "Soccer.h"

typedef struct {
	int soccer1, soccer2;
}TScoreboard;

struct Soccer {
	char *team1;
	char *team2;
	TScoreboard scoreboard;
};

TSoccer* newSoccer(char *team1, char *team2, int soccer1, int soccer2) {
	TSoccer *s = (TSoccer *)malloc(sizeof(TSoccer));
	s -> team1 = team1;
	s -> team2 = team2;
	s -> scoreboard.soccer1 = soccer1;
	s -> scoreboard.soccer2 = soccer2;
}

TSoccer* winner(TSoccer *soccer) {
	if(soccer -> scoreboard.soccer1 > soccer -> scoreboard.soccer2) {
		printf("Vencedor: %s\n", soccer -> scoreboard.soccer1);
	} else if(soccer -> scoreboard.soccer2 > soccer -> scoreboard.soccer1) {
		printf("Vencedor: %s\n", soccer -> scoreboard.soccer2);
	} else
		printf("Empate...!\n");
}

int rout(TSoccer *soccer) {
	if(soccer -> scoreboard.soccer1 - soccer -> scoreboard.soccer2 >= 3 || 
	soccer -> scoreboard.soccer2 - soccer -> scoreboard.soccer1 >= 3) {
		return 1;
	} else {
		return 0;
	}
}
