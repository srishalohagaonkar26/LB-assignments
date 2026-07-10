#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node *next;
} 
NODE, *PNODE;

void Insert(PNODE *Head, int data);
bool Search(PNODE Head, int No);
int CountEven(PNODE Head);
int CountOdd(PNODE Head);
int Frequency(PNODE Head, int No);
void DisplayEven(PNODE Head);
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

bool Search(PNODE Head, int No)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        if(temp->data == No)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

int CountEven(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;
    int count = 0;

    while(temp != NULL)
    {
        if(temp->data % 2 == 0)
        {
            count++;
        }
        temp = temp->next;
    }

    return count;
}

int CountOdd(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;
    int count = 0;

    while(temp != NULL)
    {
        if(temp->data % 2 == 1)
        {
            count++;
        }
        temp = temp->next;
    }

    return count;
}

int Frequency(PNODE Head, int No)
{
    PNODE temp = NULL;
    temp = Head;
    int count = 0;

    while(temp != NULL)
    {
        if(temp->data == No)
        {
            count++;
        }
        temp = temp->next;
    }

    return count;
}

void DisplayEven(PNODE Head)
{
    PNODE temp = NULL;
    temp = Head;

    while(temp != NULL)
    {
        if(temp->data % 2 == 0)
        {
            printf("%d\t", temp->data);
        }
        temp = temp->next;
    }
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
        printf("2. Search\n");
        printf("3. Count Even Numbers\n");
        printf("4. Count Odd Numbers\n");
        printf("5. Frequency of a Number\n");
        printf("6. Display Even Elements\n");
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
            printf("Enter number to search : ");
            scanf("%d", &value);
            if(Search(Head, value))
                printf("Element found in the list\n");
            else
                printf("Element not found in the list\n");
            break;

        case 3:
            printf("Count of even numbers : %d\n", CountEven(Head));
            break;

        case 4:
            printf("Count of odd numbers : %d\n", CountOdd(Head));
            break;

        case 5:
            printf("Enter number to check frequency : ");
            scanf("%d", &value);
            printf("Frequency of %d is : %d\n", value, Frequency(Head, value));
            break;

        case 6:
            printf("Even elements : ");
            DisplayEven(Head);
            printf("\n");
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

