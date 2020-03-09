typedef struct Stack stack;
TStack *neww(int n);
void stackUp(TStack *stack, int x);
int unstack(TStack *stack);
int size(TStack *stack);
int top(TStack *stack);
