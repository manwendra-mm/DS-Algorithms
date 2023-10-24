// Implementing GRAPH using 2D Arrays
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
static int arr[6][6];

int edgeConnect() //This Function creates Edges (Stores, which node is connected to which other node in the 2D array)
{
    char c = 'y';
    int x, y;

    while(c == 'y')
    {
        printf("Enter the Vertices which you want to Connect: ");
        scanf("%d %d", &x, &y);
       
        if (x < 0 || x > 6 || y < 0 || y > 6) //Test Case
        {
            printf("Invalid Edge creation");
        }
        else
        {
            arr[x-1][y-1] = 1;
            arr[y-1][x-1] = 1;
        }
        printf("Do you want to connect more Vertices (y/n): ");
        fflush(stdin);
        c = getchar();
    }

}

void display()
{
    int i,j;
    printf("The Graph is: \n");
    for(i=0; i<= 5; i++){
        for (j = 0; j <= 5; j++){
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}

void menu(){
    printf("1. Create Edge \n2. Display \n3. Exit \n");
}

int main() //Here we are having A graph with 6 vertices
{
    int option;
    
    while(1)
    {
        menu();
        printf("Enter your Option: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1: edgeConnect();
            
            break;

            case 2: display();
            break;

            case 3: exit(0);

            default: printf("Option Invalid");

        }    
    }
}