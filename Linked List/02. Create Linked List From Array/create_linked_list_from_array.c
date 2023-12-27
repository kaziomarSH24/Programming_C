#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};


struct node *create_linked_list(int arr[], int size)
{
    struct node *head = NULL, *temp = NULL, *current =  NULL;
    int i;
    for ( i = 0; i < size; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            current = temp;
        }else{
            current->next = temp;
            current = current->next;
        }
        
    }
    return head;
    
};


int main(){
    int arr[] = {3,4,5,55,665,454,43,345};
    int len = sizeof(arr) / sizeof(arr[0]);
    struct node *result;
    result = create_linked_list(arr,len);
    while (result != NULL)
    {
        printf("%d->", result->data);
        result = result->next;
    }
    printf("NULL");
    
    return 0;
}