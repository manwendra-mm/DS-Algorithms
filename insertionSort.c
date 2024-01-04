//Program to Implement Insertion Sort
//Not Completed... Some problem found
#include<stdio.h>

int main(){
    int arr[8] = {45, 92, 12, 94, 87, 55, 43, 5};
    int p, i, j, current;
    
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
    for(i=1; i<(sizeof(arr)/sizeof(arr[0])); i++){
        current = arr[i];
        j = i-1;
        while(arr[j]>current && j >= 0){
            arr[i] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    //Display
    printf("Sorted Array: \n");
    for(i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        printf("%5d", arr[i]);
    }
}