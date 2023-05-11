#include<stdio.h>
#include<stdlib.h>
#include"queueADT.h"

struct queue_type{
    item *contents;
    int empty_pos;
    int remov_pos;
    int num;
    int size;
};

static void terminate(const char *message){ 
    exit(EXIT_FAILURE);
}

Queue create(int a){
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("Error in create: stack could not be created.");
    q->contents = malloc(a*sizeof(item));
    if (q->contents == NULL)
        terminate("Error in create: stack could not be created.");
    q->size = a;
    q->empty_pos = 0;
    q->remov_pos=0;
    q->num = 0;

    return q;
}

void destroy(Queue a){
    free(a->contents);
    free(a);
}

void push(Queue a,item var){
    if(a->num < a->size){
        a->contents[a->empty_pos++] = var;
        a->num++;
    }
    else{
        q_overflow(a);
    }
}   
item pop(Queue a){
    if(!is_empty(a)){
        a->num--;
        return a->contents[a->remov_pos++];   
    }
    else{
        q_underflow(a);
    }
}
item return_first(Queue a){
    if(is_empty)
        q_underflow(a);
    else
        return a->contents[a->remov_pos];
}
item return_last(Queue a){
    if(is_empty)
        q_underflow(a);
    else
        return a->contents[a->empty_pos -1];
}
bool is_empty(Queue a){
    return a->num == 0;
}
void q_overflow(Queue a){
    a->empty_pos = 0;
}
void q_underflow(Queue a){
    a->remov_pos = a->empty_pos-1;
}