typedef struct Soccer TSoccer;
TSoccer* newSoccer(char team1[30], char team2[30], int soccer1, int soccer2);
TSoccer* winner(TSoccer * soccer);
int * rout(TSoccer * soccer);
