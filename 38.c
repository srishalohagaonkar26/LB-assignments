#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE;

void Insert(PNODE *Head, int data);
void DisplayOdd(PNODE Head);
int FirstOccur(PNODE Head, int No);
int LastOccur(PNODE Head, int No);
int CountGreater(PNODE Head, int X);
int CountLess(PNODE Head, int X);
void Display(PNODE Head);

void Insert(PNODE *Head, int data)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = data;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        PNODE temp = NULL;
        temp = *Head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void DisplayOdd(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        if(temp->data % 2 == 1)
        {
            printf("%d\t", temp->data);
        }
        temp = temp->next;
    }
}

int FirstOccur(PNODE Head, int No)
{
    PNODE temp = NULL;
    temp = Head;
    int position = 1;

    while(temp != NULL)
    {
        if(temp->data == No)
        {
            return position;
        }
        temp = temp->next;
        position++;
    }

    return -1;
}

int LastOccur(PNODE Head, int No)
{
    PNODE temp = NULL;
    temp = Head;
    int position = 1;
    int lastPos = -1;

    while(temp != NULL)
    {
        if(temp->data == No)
        {
            lastPos = position;
        }
        temp = temp->next;
        position++;
    }

    return lastPos;
}

int CountGreater(PNODE Head, int X)
{
    PNODE temp = NULL;
    temp = Head;
    int count = 0;

    while(temp != NULL)
    {
        if(temp->data > X)
        {
            count++;
        }
        temp = temp->next;
    }

    return count;
}

int CountLess(PNODE Head, int X)
{
    PNODE temp = NULL;
    temp = Head;
    int count = 0;

    while(temp != NULL)
    {
        if(temp->data < X)
        {
            count++;
        }
        temp = temp->next;
    }

    return count;
}

void Display(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int choice, value;

    while(1)
    {
        printf("\n----- MENU -----\n");
        printf("1. Insert\n");
        printf("2. Display Odd Elements\n");
        printf("3. First Occurrence Position\n");
        printf("4. Last Occurrence Position\n");
        printf("5. Count Numbers Greater Than X\n");
        printf("6. Count Numbers Less Than X\n");
        printf("7. Display All Elements\n");
        printf("8. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("Enter value to insert : ");
            scanf("%d", &value);
            Insert(&Head, value);
            break;

        case 2:
            printf("Odd elements : ");
            DisplayOdd(Head);
            printf("\n");
            break;

        case 3:
            printf("Enter number to search : ");
            scanf("%d", &value);
            value = FirstOccur(Head, value);
            if(value == -1)
                printf("Element not found\n");
            else
                printf("First occurrence at position : %d\n", value);
            break;

        case 4:
            printf("Enter number to search : ");
            scanf("%d", &value);
            value = LastOccur(Head, value);
            if(value == -1)
                printf("Element not found\n");
            else
                printf("Last occurrence at position : %d\n", value);
            break;

        case 5:
            printf("Enter number X : ");
            scanf("%d", &value);
            printf("Count of numbers greater than %d : %d\n", value, CountGreater(Head, value));
            break;

        case 6:
            printf("Enter number X : ");
            scanf("%d", &value);
            printf("Count of numbers less than %d : %d\n", value, CountLess(Head, value));
            break;

        case 7:
            printf("All elements : ");
            Display(Head);
            printf("\n");
            break;

        case 8:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}

