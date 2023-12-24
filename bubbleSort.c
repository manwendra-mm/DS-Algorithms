#include <stdio.h>

int main(){
    int arr[8];
    int p, temp; //p points the left element of the Bubble
    for(i=0; i < (sizeof(arr)/sizeof(arr[0]))-1; i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    
    printf("The Sorted Array is:\n");
    for(i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%3d", arr[i]);
    }
}