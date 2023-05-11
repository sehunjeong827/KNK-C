#include<stdio.h>
#include<stdlib.h>
#include"queueADT.h"

struct node{
    item n;
    struct node* next;
};

struct queue_type{
    struct node* fir_node;
    struct node* last_node;
};

static void terminate(const char *message){ 
    exit(EXIT_FAILURE);
}

Queue create(void){
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("Error in create: stack could not be created.");
    q->fir_node =NULL;
    q->last_node =NULL;
    return q;
}

void destroy(Queue a){
    while(!is_empty(a)){
        pop(a);
    }
    free(a);
}

void push(Queue a,item var){
    struct node *new_node = malloc(sizeof(struct node));
    if((a->fir_node==NULL) && (a->last_node==NULL)){
        a->fir_node = new_node;
        a->last_node = new_node;
    }
    a->last_node->next = new_node;

    new_node->n = var;
    new_node->next = NULL;
    a->last_node = new_node;
}   
item pop(Queue a){
    item i = a->fir_node->n;
    if(a->fir_node==NULL){
        printf("error:: empty space\n");
        exit(EXIT_FAILURE);
    }
    struct node *temp = a->fir_node;
    
    if(a->fir_node == a->last_node)//after free(), a->last_node !=NULL 
        a->last_node = NULL;//so needing a->last_node =NULL, idetify space is empty
    
    a->fir_node = a->fir_node->next;
    free(temp);
    return i;
}
item return_first(Queue a){
    return a->fir_node->n;
}
item return_last(Queue a){
    return a->last_node->n;
}
bool is_empty(Queue a){
    return (a->fir_node==NULL&&a->last_node==NULL);
}