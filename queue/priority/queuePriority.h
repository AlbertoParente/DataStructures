typedef struct QueuePriority TQueuePriority;

TQueuePriority *neww();
int queueSize(TQueuePriority *queue);
int empty(TQueuePriority *queue);
int full(TQueuePriority *queue);
int queueQuantity(TQueuePriority *queue);
void swap(TQueuePriority *queue, int i, int j);
void correctUp(TQueuePriority *queue);
void correctDown(TQueuePriority *queue);
void enqueue(TQueuePriority *queue, int value);
int dequeue(TQueuePriority *queue);
void show(TQueuePriority *queue);

