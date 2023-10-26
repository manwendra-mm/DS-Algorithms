//Program to Implement Double Linked List
//Code is not complete yet

#include<stdio.h>
#include<conio.h>

typedef struct doubleLinkedList
{
    struct doubleLinkedList *prev;
    int data;
    struct doubleLinkedList *next;  
} node;

node *head = '\0', *t, *h; //head, t, h are Global Variables

void create() 
{
    int a;
    char choice;
    
    do
    {
        printf("Enter the Value to be Inserted: ");
        scanf("%d", &a);
        t = (node *)malloc(sizeof(node));
    
        if(head == '\0')
        {
            head = t;
            h = t;
            t -> prev = '\0';
            t -> data = a;
            t -> next = '\0';
        }
        else
        {
            h -> next = t;
            t -> prev = h;
            h = t;
            t -> data = a;
            t -> next = '\0';
        }
        printf("Do you want to create new node(Y/N): \n");
        choice = getch();
    }while(choice == 'y' || choice == 'Y');
}

node search(int val) //Probably Completed
{
    node *p = head;
    while(p -> data != val)
    {
        p = p -> next;
    }
    return *p;
} 

void display() //Completed...
{
    node *p = head ;
    while(p != '\0')
    {
        printf("%d\n", p -> data);
        p = p -> next;
    }
}

void displayReversed() //Completed...
{
    node *p = head;
    while(p -> next != '\0') //Finding Address of last node
    {
        p = p -> next;
    }

    while(p != '\0') //Traversal from last to first node
    {
        printf("%d", p->data);
        p = p -> prev;
    }
}

void main(){
    
    
}