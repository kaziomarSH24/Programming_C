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

int searchInLinkedList(struct node *head, int value){

    int index = 0;
    while (head != NULL)
    {
        if (head->data == value)
        {
            return index; 
        }
        index++;
        head = head->next;
    }
    return -1;
}


int main(){
    int arr[] = {3,4,5,55,665,454,43,345};
    int len = sizeof(arr) / sizeof(arr[0]);
    struct node *result = NULL;
    result = create_linked_list(arr,len);
    int val;
    printf("Enter Your Search Value: ");
    scanf("%d",&val);
    int returnIndex = searchInLinkedList(result,val);
    if (returnIndex != -1)
    {
        printf("\nIndex: %d\n",returnIndex);
    }else{
        printf("\nItem Not Found!\n");
    }
    // printf("%d",searchInLinkedList(result,55));
    
    return 0;
}