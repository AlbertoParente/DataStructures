typedef struct List TListDoubly;

TListDoubly *create(int value);
int size(TListDoubly *list);
void insert(TListDoubly *list, int value);
int extract(TListDoubly *list, int value);
TListDoubly *search(TListDoubly *list, int value);
void show(TListDoubly *list);
