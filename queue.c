// Program to Implement Linear Queue... 
#include <stdio.h>
#include<stdlib.h>
#define MAX 5  //MAX is size of Queue

int queue[MAX], f, r; //f -> front and r -> rear

//1. Add function
void add()
{
    int x;
    printf("Enter the Value to be Added: ");
    scanf("%d", &x);
    if(r == MAX-1) //1.Last pocket is Ocupied
    {
        printf("Queue is Full");
        return;
    }
    
    else if(r == -1 && f == -1) //3.Fully Empty
    {
        r++, f++;
        queue[r] = x;
        printf("Element Successfully Added1");
    }

    else    //5.partially occupied
    {
        r++;
        queue[r] = x;
        printf("Element Successfully Added2");
    }
}
    


//2. Delete function
void del()
{

    if(f == -1) //Test Case
    {
        printf("No, Elements in Queue to delete"); 
        return;
    }

    if(f == r) //Only one element left
    {
        printf("*Deleted element is: %d", queue[f]);
        f = r = -1;
    }
    
    else //general case
    {
        printf("**Deleted Element is: %d", queue[f]);
        f++;
    }
}

//3. view function
void view(){
    int i;
	if(f == -1) //Empty Queue
    {
		printf("There are no elements in Queue");
        return;
	}

    else //For normal case
    {
        printf("Elements are: \n");
        for (i=f; i <= r; i++){
            printf("%d\n", queue[i]);
        }

    }
	
}


//4. exit function 
void exit_(){
    exit(0);
}

//menu 
void menu(){
    printf("\n\n1. ADD a Value\n");
    printf("2. DELETE a Value\n");
    printf("3. View Elements of Queue\n");
    printf("4. Exit\n");
    printf("Enter your Choice: ");
}


// main starts here
int main()
{
    f = -1 , r = -1;
    
    while(1){
        int choice;
		menu();
		scanf("%d", &choice);
		
		switch(choice){
        case 1: add(); 
        break;

        case 2: del();
        break;

        case 3: view();
        break;

        case 4: exit_();
        break;

        default: printf("Input is Invalid");
        }
        
    }
    
}

