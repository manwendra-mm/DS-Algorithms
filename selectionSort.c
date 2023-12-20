//Program to Implemet Selection Sort
//Program not complete yet.........
#include<stdio.h>

int main(){
    int i, j, smallIndex;
    int temp, smallest;
    int arr[8];
    printf("Enter 8 Elements: ");

    for (i = 0; i < 8; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for(i = 0; i < 8; i++){
        smallest = arr[i];
        for(j = i+1; j < 8; j++){
            if(arr[j]< smallest){
                smallest = arr[j];
                smallIndex = j;
            }
        }
        //Here 'smallest' has the Smallest element of the array
        temp = arr[i];
        arr[i] = smallest;
        arr[j] = arr[smallIndex];
    }
    printf("The Sorted Array is: ");
    for (i = 0; i < (sizeof(arr)/ sizeof(arr[0])); i++){
        printf("%5d", arr[i]);
    }

}