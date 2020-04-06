typedef struct Queue TQueue;

TQueue* neww();
void enqueue(TQueue *queue, int value);
int dequeue(TQueue *queue);
int queueSize(TQueue *queue);
int frontPosition(TQueue *queue);
int queueFrontPosition(TQueue *queue);
int empty(TQueue *queue);
int full(TQueue *queue);
void destruct(TQueue *queue);
void show(TQueue *queue);
void queueInvert(TQueue *queue);
