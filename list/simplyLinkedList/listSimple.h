typedef struct List TListSimple;

TListSimple *create(int value);
int size(TListSimple *list);
void insert(TListSimple *list, int value);
int extract(TListSimple *list, int value);
TListSimple *search(TListSimple *list, int value);
void show(TListSimple *list);
void showKnot(TListSimple *list);


