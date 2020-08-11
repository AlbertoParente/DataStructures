typedef struct No TNo;
typedef struct NoN TNoN;

struct No {
	int value;
	TNo *left;
	TNo *right;
} TNo;

struct NON {
	int value;
	TNoN **children;
} TNoN;

TNo *create(int v);
TNoN *createN(int v, int qtdChildren);
