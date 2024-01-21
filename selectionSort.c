//Program to Implemet Selection Sort
//Not working properly & make the program function wise
#include<stdio.h>

int arr[8] = {9,8,7,6,5,4,3,2};
int i;

void display(){
    printf("The Sorted Array is: ");
    for (i = 0; i < (sizeof(arr)/ sizeof(arr[0])); i++){
        printf("%3d", arr[i]);
    }
    
}

void scanElements(){
    for (i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");

}

int main(){
    int j, min;
    int temp;
    
    /*printf("Enter 8 Elements: ");
	scanElements(); */
    

    for(i = 0; i < (sizeof(arr)/sizeof(arr[0]))-1 ; i++){
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

    display();
    
    
}
