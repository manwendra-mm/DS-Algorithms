//Program to Implement Insertion Sort
//Not Completed... Make it function wise
#include<stdio.h>

int arr[10] = {12,4,8,50,1,9,29,6,7,56};
int p, i, j, current;
int n = sizeof(arr)/sizeof(arr[0]);

void insertionSort() //Here list[] is parameter
{
    for(i=1; i<n; i++)
    {
        current = arr[i];
        j = i-1;
        while(j >= 0 && arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

void display(){
    printf("Sorted Array is: \n");
    for(i=0; i < n; i++){
        printf("%d  ", arr[i]);
    }

}

int main(){
    
    /* printf("1- Sort Already Existing array \n2- Sort Scanned Elements\nEnter your Choice: ");
    scanf("%d", &p);
    switch(p)
    {
        case 1:
        // Array has already been Initialized during Declaration 
        break;

        case 2: 
        //Scanning the Elements
        printf("Enter the Elements: \n");
        for(i=0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        break;
        
        default:
        printf("Invalid Input");
        
    } */

    //Sorting
    insertionSort();
    

    //Display
    display();
    
}