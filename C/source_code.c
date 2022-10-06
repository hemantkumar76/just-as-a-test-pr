#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *tail = NULL;
void create(int n)
{
    int i;
    struct node *new_wala_node;
    for (i = 0; i < n; i++)
    {
        new_wala_node = (struct node *)malloc(sizeof(struct node));
        printf("enter element for  %d: ", i + 1);
        scanf("%d", &new_wala_node->data);
        new_wala_node->next = NULL;
        new_wala_node->prev = NULL;
        if (head == NULL)
        {
            head = new_wala_node;
            tail = new_wala_node;
        }
        else
        {
            tail->next = new_wala_node;
            new_wala_node->prev = tail;
            tail = new_wala_node;
        }
    }
    tail->next = head;
    head->prev = tail;
}
void display()
{
    struct node *temp;
    temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
}
int main()
{
    int n;
    printf("how much nodes u want");
    scanf("%d", &n);
    create(n);
    printf("your list from silgular nodes \n");
    display();
    return 0;
}
