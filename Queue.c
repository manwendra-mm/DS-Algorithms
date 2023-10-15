// WAP to Implement Circular Queue... Completed
#include <stdio.h>
#include<stdlib.h>
#define MAX 5  //MAX is size of Queue

int queue[MAX], f, r; 

//1. Add function
void add()
{
    int x;
    printf("Enter the Value to be Added: ");
    scanf("%d", &x);
    if(r == MAX-1 && f == 0) //1.fully occupied Linearly
    {
        printf("Queue is Full1");
        return;
    } 
    else if(r == f-1) //2.Fully occupied Circularly
    {
        printf("Queue is Full2");
    }
    
    else if(r == -1 && f == -1) //3.Fully Empty
    {
        r++, f++;
        queue[r] = x;
        printf("Element Successfully Added1");
    }
    
    else if(r == MAX-1 && f != 0) //4.when r == MAX-1 but f != 0
    {
        r = 0;
        queue[r] = x;
        printf("Element Successfully Added2");
    }

    else    //5.partially occupied
    {
        r++;
        queue[r] = x;
        printf("Element Successfully Added3");
    }
}
    


//2. Delete function
void del(){
    if(f == -1){
        printf("No, Elements in Queue to delete"); //No Element
    }

    else if(f == r) //Only one element left
    {
        printf("*Deleted element is: %d", queue[f]);
        f = r = -1;
        
    } 

    else if(f == MAX -1 && r<f) //when f is Last element of Queue
    {
        printf("Deleted element is: %d", queue[f]);
        f = 0;

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
	}

    else if (r < f) //for Circular Queue
    {
        printf("Elements are: \n");
		for (i = f; i <= MAX-1; i++){
			printf("%d\n", queue[i]);	
		}
        for (i = 0; i <= r; i++){
			printf("%d\n", queue[i]);	
		}

	}

    else //For Linear Queue
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
    printf("3. View an Element of Stack\n");
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

