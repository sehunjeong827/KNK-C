#include<stdio.h>
#include<stdlib.h>
#include"queueADT.h"

#define MAX 100
struct queue_type{
    item contents[MAX];
    int empty_pos;
    int remov_pos;
    int num;
};

static void terminate(const char *message){ 
    exit(EXIT_FAILURE);
}

Queue create(void){
    Queue q = malloc(sizeof(struct queue_type));
    q->empty_pos = 0;
    q->remov_pos=0;
    q->num = 0;
    if (q == NULL)
        terminate("Error in create: stack could not be created.");
    return q;
}

void destroy(Queue a){
    free(a);
}

void push(Queue a,item var){
    if(a->num < MAX){
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