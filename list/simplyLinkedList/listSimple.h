typedef struct ListD TListDoubly;

TListDoubly *neww(int value);

typedef struct ListS TListSimple;

TListSimple *create(int value);
int size(TListSimple *list);

void insert(TListSimple *list, int value);
void insertD(TListDoubly *listD, int value);

int extract(TListSimple *list, int value);
TListSimple *search(TListSimple *list, int value);
void show(TListSimple *list);
void showKnot(TListSimple *list);
void insertTheStart(TListSimple *list, int value);
TListSimple *removeTheStart(TListSimple *list);
void insertInPosition(TListSimple* list, int value, int position);
void removeInPosition(TListSimple* list, int position);
int removeSortedDescending(TListSimple *list, int value);
int comparar_encadeadas(TListSimple* list, TListDoubly* listD);
