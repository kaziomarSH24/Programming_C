#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *a, *b, *c;


int main(){
    // struct node *a, *b, *c;

    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));

    a->data = 10;
    b->data = 20;
    c->data = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;

    struct node *temp = a;
    
    while (temp!=NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    
    
    return 0;
}