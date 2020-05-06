typedef struct List TList;

TList *create();
int size(TList *list);
void insert(TList *list, int value);
int extract(TList *list, int value);
int search(TList *list, int value);
void print(TList *list);
void extractAll(TList *list, int value);
void insertTheStart(TList *list, int value);
void removerTheStart(TList *list);
void invert(TList *list);
int compare(TList* list, TList* list2);
void insertInPosition(TList* list, int value, int position);
void extractInPosition(TList *list, int position);
