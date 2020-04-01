typedef struct Stack TStack;
TStack *neww(int n);
void stackUp(TStack *stack, int x);
int unStack(TStack *stack);
int size(TStack *stack);
int top(TStack *stack);

int stackEmpty(TStack *stack);
void show(TStack *stack);
void reverse(TStack *stack);
void *reverseVector(TStack *stack);
int removeValue(TStack *stack, int value);
