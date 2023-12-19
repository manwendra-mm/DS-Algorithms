//Program to Implemet Bubble Sort
//Program not complete yet.........
#include<stdio.h>

int main(){
    int i, j;
    int temp;
    int arr[8];
    printf("Enter 8 Elements: ");

    for (i = 0; i < 20; i++){
        scanf("\n%d", &arr[i]);
    }
    printf("\n");

    for(i = 0; i < 8; i++){
        for(j = i; j < 8; j++){
            if(arr[j]< temp){
                temp = arr[j];
            }
            
        }

    }

}