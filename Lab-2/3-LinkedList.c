// Write a program to implement singly linked list operations (INSERT, DELETE, DISPLAY)

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *link;
};

int count = 0;
struct node *first = NULL;

void Display()
{
    printf("\n");
    if (first == NULL)
    {
        printf("\nLinked list is empty");
        return;
    }
    struct node *save = first;
    while (save != NULL)
    {
        printf("%d -> ", save->val);
        save = save->link;
    }
    printf("NULL\n");
}

struct node *insertAtFirst(int x, int n)
{
    if (count >= n)
    {
        printf("\nLinked list is full!");
        return first;
    }
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    count++;
    newNode->val = x;
    newNode->link = first;
    first = newNode;
    return first;
}

struct node *deleteAtFirst()
{
    if (first == NULL)
    {
        printf("\nLinked list is empty");
        return NULL;
    }
    struct node *temp = first;
    first = first->link;
    printf("%d node is deleted!", temp->val);
    free(temp);
    count--;
    return first;
}

struct node *insertAtLast(int x, int n)
{
    if (count >= n)
    {
        printf("\nLinked list is full!");
        return first;
    }

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    count++;
    newNode->val = x;
    newNode->link = NULL;
    if (first == NULL)
    {
        first = newNode;
    }
    else
    {
        struct node *save = first;
        while (save->link != NULL)
        {
            save = save->link;
        }
        save->link = newNode;
    }
    return first;
}

struct node *deleteAtLast()
{
    if (first == NULL)
    {
        printf("\nLinked list is empty");
        return NULL;
    }

    if (first->link == NULL)
    {
        printf("%d node is deleted!", first->val);
        free(first);
        first = NULL;
    }
    else
    {
        struct node *save = first;
        while (save->link->link != NULL)
        {
            save = save->link;
        }
        struct node *temp = save->link;
        printf("%d node is deleted!", temp->val);
        free(temp);
        save->link = NULL;
    }
    count--;
    return first;
}

int main()
{
    int n;
    printf("\nEnter a size of linked list : ");
    scanf("%d", &n);

    while (1)
    {
        int choice;
        printf("\n\n1.Insert at first\n2.Insert at last\n3.Delete at first\n4.Delete at last\n5.Display\n6.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            int x;
            printf("\nEnter a value of insert at first : ");
            scanf("%d", &x);
            first = insertAtFirst(x, n);
            break;

        case 2:
            int xy;
            printf("\nEnter a value of insert at last : ");
            scanf("%d", &xy);
            first = insertAtLast(xy, n);
            break;

        case 3:
            first = deleteAtFirst();
            break;

        case 4:
            first = deleteAtLast();
            break;

        case 5:
            Display();
            break;

        case 6:
            printf("Program is terminated!");
            return 0;
            break;

        default:
            printf("Invalid choice!");
            break;
        }
    }

    return 0;
}