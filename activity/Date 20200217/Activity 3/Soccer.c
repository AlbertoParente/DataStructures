#include "Soccer.h"

typedef struct {
	int soccer1, soccer2;
}TScoreboard;

struct Soccer {
	chat team1[30];
	chat team2[30];
	TScoreboard scoreboard;
};

TSoccer* newSoccer(char team1[30], char team2[30], int soccer1, int soccer2){
	TSoccer *s = (TSoccer *)malloc(sizeof(TSoccer));
	s -> team1 = team1;
	s -> team2 = team2;
	s -> scoreboard.soccer1 = soccer1;
	s -> scoreboard.soccer2 = soccer;
}

void winner(TSoccer * soccer){
	if(soccer -> scoreboard.soccer1 - soccer -> scoreboard.soccer2 > 3 || 
	   soccer -> scoreboard.soccer2 - soccer -> scoreboard.soccer1 > 3)
	   return 1;
}

void rout(TSoccer * soccer){
	if(soccer -> scoreboard.soccer1 - soccer -> scoreboard.soccer2 > 3 || 
	   soccer -> scoreboard.soccer2 - soccer -> scoreboard.soccer1 > 3)
	   return 1;
	else
		return 0;
}
