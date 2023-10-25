//Program to Implement Double Linked List
//Code is not complete yet

#include<stdio.h>
#include<conio.h>

typedef struct doubleLinkedList{
    struct doubleLinkedList *prev;
    int data;
    struct doubleLinkedList *next;
    
} node;

node *head = '\0';

void create(){
    node *t, *h;
    int a;
    char choice;
    
    do
    {
        printf("Enter the Value to be Inserted: ");
        scanf("%d", &a);
        t = (node *)malloc(sizeof(node));
    
        if (head == '\0')
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

node search(int val){
    node *h = head;
    while(h -> data != val)
    {
        h = h -> next;
    }
    return *h;
} 

void display()
{
    node *h = head ;
    while(h != '\0')
    {
        printf("%d\n", h -> data);
        h = h -> next;
    }
}

void displayReversed()
{
    node *h = head;
    while(h -> next != '\0') //Finding Address of last node
    {
        h = h -> next;
    }

    while(h != '\0') //Traversal from last to first node
    {
        printf("%d", h->data);
        h = h -> prev;
    }
}

void main(){
    
    
}