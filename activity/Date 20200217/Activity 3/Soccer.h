typedef struct Soccer TSoccer;
TSoccer* newSoccer(char *team1, char *team2, int soccer1, int soccer2);
TSoccer* winner(TSoccer *soccer);
int rout(TSoccer *soccer);
