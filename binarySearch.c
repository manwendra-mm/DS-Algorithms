//Program to Implement Binary Search
//Not Completed Yet

#include<stdio.h>
#include<stdlib.h>

int static arr[10] = {1, 2, 32, 43, 45, 49, 50, 67, 90, 100};

int binarySearch(int a) //a is searched element
//Func returns 1 if found and 0 if not found
{
    int f, r, m;
    f = 0;
    r = (sizeof(arr)/sizeof(arr[0]))-1;
    printf("Value of r: %d\n", r); //printing size of array
    m = (f+r)/2;
    while(f<=r){
        if (a == arr[m])
        {
            return 1;
        }
        if (a > arr[m])
        {
            f = m +1;
        }
        else{
            r = m -1;
        }
        
    }
    return 0;
}



int main(){
    int a;
    int flag = '\0';
    
    printf("The Elements are:\n");
    for (int i =0; i< sizeof(arr)/sizeof(arr[0]); i++) //Printing elements
    {
        printf("%d\n", arr[i]);

    }

    printf("Enter the Value to be Searched: ");
    scanf("%d", &a);
    flag = binarySearch(a);
    if (flag == 1){
        printf("Element Found");
    }
    else{
        printf("Element not found");
    }


    return 0;
}



















/*............    
void display(){
    int i;
    for(i=0; i<= sizeof(arr)/sizeof(arr[0])-1; i++)
    {
        printf("%d Element: ", i+1);
        printf("%d\n", arr[i]);

    }
}

int binarySearch(int list[], int a) //a is searched element
//Func returns 1 if found and 0 if not found
{
    int f, r, m;
    f = 0;
    r = (sizeof(list)/sizeof(list[0]))-1;
    printf("%d", r);
    m = (f + r) / 2;

    while(f <= r)
    {
        if (a < list[m]){
            printf("Test1");
            r = m-1;
        }
        else if(a > list [m]){
            printf("Test2");
            f = m+1;
        }
        else{
            printf("Test3");
            return 1;
        }
    }
    //if control is here that means Element was not found
    return 0;
}

int main(){
    int arr[10] = {1, 2, 32, 43, 45, 49, 50, 67, 90, 100};

    int s, val, flag = 0; //s if choice selected 
    //Val is value to be searched
    while(1){
        printf("1. Number of Items in List\n2. Search using Binary Search\n3. Exit\n");
        printf("Enter your Choice: ");
        scanf ("%d", &s);
        switch(s)
        {
            case 1:
                printf("No. of Elements in List are: %d", sizeof(arr)/sizeof(arr[0]));
                break;

            case 2:
                printf("Enter the Value to be Searched: ");
                scanf("%d", &val);
                flag = binarySearch(arr, val);
                if (flag == 1){
                    printf("Element is present in List");
                }
                else{
                    printf("Element was not found");
                }
                break;
            
            case 3:
                exit(0);
                break;
            
            default:
                continue;

        }
        return 0;
    }
}
.................*/