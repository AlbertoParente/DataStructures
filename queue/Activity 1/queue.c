typedef struct Queue TQueue;

TQueue* neww();
int dequeue(TQueue* queue);
void enqueue(TQueue* queue, int value);
void show(TQueue* queue);
int size(TQueue* queue);
int start(TQueue* queue);
int empty(TQueue* queue);
int full(TQueue* queue);
int queueFrontPosition(TQueue* queue);
void destruct(TQueue *queue);
void queueInvert(TQueue *queue);
