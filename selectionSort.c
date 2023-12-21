//Program to Implemet Selection Sort
//Completed
#include<stdio.h>

int main(){
    int i, j, min;
    int temp;
    int arr[8];
    printf("Enter 8 Elements: ");

    for (i = 0; i < 8; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for(i = 0; i < (sizeof(arr)/sizeof(arr[0]))-1; i++){
        min = i;
        for(j = i+1; j < (sizeof(arr)/sizeof(arr[0])); j++){
            if(arr[j]< arr[i]){
                min = j;
            }
        }
        
        //Here min variable will be having index of smallest Element
        if(min != i){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("The Sorted Array is: ");
    for (i = 0; i < (sizeof(arr)/ sizeof(arr[0])); i++){
        printf("%3d", arr[i]);
    }
    
}