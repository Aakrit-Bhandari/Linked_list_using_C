#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlist(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELement: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main(void)
{
    // Alloctae memory for nodes in the linked list in Heap;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // link first and second nodes
    head->data = 7;
    head->next = second;

    // link second and third nodes
    second->data = 11;
    second->next = third;

    // terminate the list at the third node
    third->data = 66;
    third->next = fourth;

    // fourth node

    fourth->data = 55;
    fourth->next = NULL;
    linkedlist(head);
}