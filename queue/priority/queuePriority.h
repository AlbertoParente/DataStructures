typedef struct QueuePriority TQueuePriority;

TQueuePriority *neww();
int queueSize(TQueuePriority *queue);
int empty(TQueuePriority *queue);
int full(TQueuePriority *queue);
void enqueue(TQueuePriority *queue, int value);
int dequeue(TQueuePriority *queue);
void show(TQueuePriority *queue);
void destruct(TQueuePriority *queue);
