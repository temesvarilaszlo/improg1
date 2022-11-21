#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node* init_node(double _value)
{
    Node* item = (Node*) malloc(sizeof(Node));
    item -> value = _value;
    item -> next = NULL;
    return item;
}

void list_append(Node* first, double _value)
{
    Node* new_item = init_node(_value);
    Node* last = first;

    while (last -> next != NULL){
        last = last -> next;
    }
    last -> next = new_item;
}

void list_remove_one(Node* first, double _value)
{
    Node* current = first;
    
    do {
        Node* next = current -> next;
        if (next -> value == _value){
            current-> next = next -> next;
            free(next);
            return;
        }
        else current = next;
    }
    while (current -> next != NULL);
}

void list_remove_all(Node* first, double _value)
{
    Node* current = first;
    
    do {
        Node* next = current -> next;
        if (next -> value == _value){
            current-> next = next -> next;
            free(next);
        }
        else current = next;
    }
    while (current -> next != NULL);
}

void free_list(Node* first)
{
    Node* current = first;
    
    do {
        Node* next = current -> next;
        free(current);
        current = next;
    }
    while (current -> next != NULL);
    printf("List freed!");
}

void list_print(Node* first)
{    
    printf("[");

    Node* current = first;
    for (; current -> next != NULL; current = current -> next){
        printf("%f, ", current -> value);
    }

    printf("%f", current -> value);
    printf("]\n");
}