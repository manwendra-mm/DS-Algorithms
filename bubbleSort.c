//Program to Implement Bubble Sort
//Completed.....

#include <stdio.h>

int main(){
    int arr[8] = {23, 45, 654 ,1 ,67 ,23, 78, 12};
    int p, temp, i, j;
    
    printf("1- Sort Already Existing array \n2- Sort Scanned Elements\nEnter your Choice: ");
    scanf("%d", &p);
    switch(p){
        case 1:
        // Array has already been Initialized during Declaration 
        break;

        case 2: 
        //Scanning the Elements
        printf("Enter the Elements: \n");
        for(i=0; i < (sizeof(arr)/sizeof(arr[0])); i++)
        {
            scanf("%d", &arr[i]);
        }
        break;
        
        default:
        printf("Invalid Input");
        
    }

    //Sorting 
    for(i=0; i < (sizeof(arr)/sizeof(arr[0]))-1; i++){
        for (j = 0; j < (sizeof(arr)/sizeof(arr[0])-1); j++ ){
            if(arr[j]>arr[j+1]) //If Right Element of Bubble is smaller then Swap
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    //Display
    printf("The Sorted Array is:\n");
    for(i=0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d  ", arr[i]);
    }
}