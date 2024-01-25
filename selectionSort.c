//Program to Implemet Selection Sort
//Completed...

#include<stdio.h>

int arr[10] = {12,98,11,87,10,97,24, 14, 56, 42};
int i, n = sizeof(arr)/sizeof(arr[0]);

void display(){
    printf("The Sorted Array is: ");
    for (i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }
    
}

void scanElements(){
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");

}

void selectionSort(){
    int j, min;
    int temp;
    
    /*printf("Enter 8 Elements: ");
	scanElements(); */
    

    for(i = 0; i < n-1 ; i++) //Probably mistake is over here.................
    {
        min = i;
        for(j = i+1; j < n; j++){
            if(arr[j]< arr[min]){
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

}

int main(){

    selectionSort();
    
    display();
    
}
