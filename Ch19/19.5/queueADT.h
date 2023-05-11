#ifndef QUEUE_H
#define QUEUE_H 

#include<stdbool.h>

typedef int item;
typedef struct queue_type *Queue;

Queue create(void);
void destroy(Queue);
void push(Queue,item);
item pop(Queue);
item return_first(Queue);
item return_last(Queue);
bool is_empty();

#endif