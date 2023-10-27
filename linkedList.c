// Program to Implement Linked List (Simplest Form- Linear & Single Linked)
/* Functions Written- Menu,Create,Display,Count,Search,delByPosition,addBefore,
addAfter, main. */
#include <stdio.h>
#include <stdlib.h>

typedef struct linkList //NODE data type
{
    int n;
    struct linkList *next;
}node;

node *head, *t, *h;


void menu(){
    printf("\n\n1. Create \n2. Display \n3. Count \n4. Delete by Position \n5. Add Before \n");
    printf("6. Add After\n 7. Reverse \n 8. Quit");
}

int create() //create function... completed
{
    int x;
    char a;
    do
    {
        printf("\nEnter the Value to be Inserted: ");
        scanf("%d", &x);
        t = (node *) malloc(sizeof(node));
        t -> n = x;

        if (head == '\0'){
            head = t;
            h = t;
            t ->next = '\0';
        }
        else
		{
            h -> next = t;
            h = t;    
            t ->next = '\0';
        }
        
        fflush(stdin); //This is not doing any problem
        printf("3--%d\n", head); //This line is for Testing (No other use)
		printf("Create new Node? (Y/N): ");
        a = getch();
    } while (a == 'Y' || a == 'y');

return 1;
}

void display() //display function... completed
{
	printf("3--%d\n", head); //For Testing
    node *d;
    d = head;
    if(d == '\0'){
        printf("No Elements to Display!");
        return;
    }
    else
    {
    	printf("Elements of the Linked List are:\n");
    	while(d != '\0'){
        	printf("%4d\n", d->n);
        	d = d -> next;
    	}
    	
	}
	
}

int count() //count function... completed
{
    if (head =='\0'){
        printf("No Elements to Count");
    }
    int c=0;
    
    node *p = head;
    while(p != '\0'){
        c++;
        p = p -> next;
    }
    return c;
}

node* search(int x) //Search Function... completed
{
	node *p;
	p = head;
    if (p == '\0'){
        printf("No Elements are present ");
        return p;
    }

	while(p -> n != x){
        p = p->next;
        if(p == '\0'){  
            return p;
        }
	}
	return p;
}

/*delete function..., p is Index to delete, h2 will point the node to be deleted 
& h1 will point its previous node */
int delByPosition(int p) //Problem found during Testing
{
    int i ;
    node *h1, *h2;
    int c = count();
    if (p == 0 || p > c){
        printf("Invalid Index Number");
        return 0;
    }
    if (p == 1){
        h1 = head;
        head = head -> next;
    }
    else{
        h1= head;
        for (i=1 ; i<= p-2; i++ ){
            h2 = h1;
            h2 = h2 -> next;
        } 
    }
    h1 -> next = h2 -> next;
    free(h2);
}

void addBefore(int x, int a) //x to be searched & a to be added... Completed
{
    node *r, *p, *q;
    p = search(x);
    
    q = (node *)malloc(sizeof(node));
    q -> n = a;
    if (p == head) // add before 1st element
    {
        q -> next = head;
        head = q;
    }
    else if (p == '\0')
	{
    	printf("Element not Found ");
	}
    else
	{
		r = head;
		while(r -> next != p) //For finding the node which is before the searched node
		{
			r = r-> next;
		}
		r -> next = q;
		q -> next = p;	
	}
	
}

void addAfter(int x, int a)  //x is searched, a is added... Completed
{
    node *p, *t;
    p = search(x);
    if (p =='\0'){
        printf("Searched element not Found");
        
    }
    else{
    	t = (node *)malloc(sizeof(node));
	    t -> n = a;
	    t -> next = p-> next;
	    p->next = t;
	    printf("Element successfully added after ");
	}
    
}

void rev() //Reverse... Completed
{
    node *p1, *p2, *p3;
    if(head == '\0' || head -> next == '\0'){
        printf("Cannot be Reversed");
        return;
    }
    p1 = head;
    p2 = p1 -> next;
    p3 = p2 -> next;
    p1 -> next = '\0';
    while(p2 != '\0')
    {
        p2->next = p1;
        p1 = p2;
        p2 = p3;
        if (p3 != '\0'){
            p3 = p3 -> next;
        }
    }
    head = p1;
    printf("LiskedList successfully reversed");
    
}

int main()
{
	head = '\0'; // initializing head as Null
    int a, val, data, c; /*val is value to be searched, data is value to be Inserted, a used in switch, 
	c stores return value of count()*/ 

    while(1){
    	menu();
        printf("\nEnter your choice: ");
        scanf("%d", &a);
        switch(a){
            system ("clear");
            menu();
            
            case 1: 
            create();
            break;

            case 2:
            printf("1--%d\n", head); //Testing
            display();
            break;

            case 3: 
            c = count();
            printf("No. of elements in the Linked List: %d ", c);
            break;

            case 4: //Del by Position
            printf("Enter the Position to be Deleted: ");
            scanf("%d", &val);
            delByPosition(val);
            break;

            case 5: //Add Before
            printf("Enter value before which you want to Insert: ");
            scanf("%d", &val);
            printf("Enter value to Insert: ");
            scanf("%d", &data);
            addBefore(val, data);
            break;

            case 6: // Add After
            printf("Enter value after which you want to Insert: ");
            scanf("%d", &val);
            printf("Enter value to Insert: ");
            scanf("%d", &data);
            addAfter(val, data);
            break;
            
            case 7: //reverse
			rev();
            break;
            
            case 8: //Exit
            exit(0);
            break;


            default:
            printf("Invalid Option");
        }
    }
}

/*printf("\n\n1. Create \n2.Display \n3. Count \n4. Delete by Position \n5. Add Before \n");
    printf("6. Add After\n ");*/
