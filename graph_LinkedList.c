/*Sir I worked for continuous 2 days on this program but it's not working perfectly. 
I am submitting my progress. 
It's almost done but I think think that I can figure out the problem myself I just require
some more time :)   
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct edge{
    int data;
    struct edge *next;
}edge;

typedef struct vertex{
    edge *firstEdge;
    int data;
    struct vertex *next;

}vertex ;

vertex *head='\0';

void createVertex() //Vertex Creation
{
	char c;
    do
	{
	
		vertex *t, *h;
	    t = (vertex *)malloc(sizeof(vertex));
	    printf("Enter the data to be stored in this Vertex: ");
	    scanf("%d", &t -> data);
	    
	
	    if(head == '\0'){
	        head = t;
	        h = t;
	        t -> next = '\0';
	        t -> firstEdge ='\0';
	    }
	    else{
	        h -> next = t;
	        t -> next = '\0';
	        t -> firstEdge = '\0';
	    }
	    fflush(stdin);
		printf("Do you want to create new Vertex(y/n): ");
	    c = getchar();
	}while (c =='y' || c =='Y');
}

vertex* search(int x)  
{
	vertex *h;
	h = head;
    if (h == '\0') //No Vertex
    {
        printf("No Vertex is present ");
        return '\0';
    }

	while(h -> data != x){
        h = h->next;
        if(h -> next == '\0'){
            printf("Element not Found");
            return '\0';
        }
	}
	return h;
}

void createEdge(int a, int b)
{
    vertex *v1, *v2; //t1 & t2 are the new nodes, p1 and p2 are previous nodes 
    edge *p1, *p2, *t1, *t2;
    v1 = search(a);
    v2 = search(b);
    if(v1 == '\0' || v2 == '\0') 
	{
        printf("One or Both Vertex do not exist");
    }
    else 
    {
        t1 = (edge *) malloc(sizeof(edge));
        t2 = (edge *) malloc(sizeof(edge));
        if (v1 -> firstEdge == '\0') //For t1 edge
        {
            v1 -> firstEdge = t1;
            t1 -> data = b;
            t1 -> next = '\0';
        }
        else
        {
            p1 = v1 -> firstEdge;
            while(p1-> next != '\0')
            {
                p1 = p1 -> next;
            }
            t1 -> data = b;
            p1 -> next = t1;
            t1 -> next = '\0';
        }

        
        if (v2 -> firstEdge == '\0') //For t2 edge
        {    
            v2 -> firstEdge = t2;
            t2 -> data = a;
            t2 -> next = '\0';
        }
        else 
        {
            p2 = v2 -> firstEdge;
            while(p2 -> next != '\0'){
                p2 = p2 -> next;
            }
            t2 -> data = a;
            p2 -> next = t2;
            t2 -> next = '\0';
        }
    }
}

/*int display() //display function... completed
{
	//printf("3--%d\n", head); //Testing
    vertex *d;
    d = head;
    if(d == '\0'){
        printf("No Elements to Display!");
        return 0;
    }
    else
    {
    	printf("Elements of the Graph are:\n");
    	while(d != '\0'){
        	printf("%4d\n", d->data);
        	d = d -> next;
    	}
    	
	}
	
} */

void display(){
    vertex *h;
    edge *t;
    h = head;
    while (h != '\0'){
        printf("%d: ", h -> data);
        t = h -> firstEdge;
        while(t != '\0'){
            printf("%5d", t -> data);
            t = t->next;
        }
        printf("\n");


        h = h-> next;
    }
}  

int main()
{
	int choice, a, b;
	while(1)
    {
        printf("1. Create Vertex \n2. Create Edge \n3. Display \n4. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: createVertex();
            break;
            
            case 2: printf("Enter the Vertices you want to connect: ");
            scanf("%d %d", a, b); 
            createEdge(a , b);
            break;
            
            case 3: display();
            break;
            
            case 4: exit(0);
            
            default: printf("Invalid Choice");
	    }
    }
}
