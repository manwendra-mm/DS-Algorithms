//Program to Implement Merge Sort

#include<stdio.h>
#include<stdlib.h>

void merge(int A[],int p,int q,int r){
    int i, j, k;
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++){
        L[i] = A[p + i];
    }
    for (j = 0; j < n2; j++){
        R[j] = A[q + 1 + j];
        i = 0;
        j = 0;
        k = p;
        while(i < n1 && j < n2){
            if(L[i] <= R[j]){
                A[k] = L[i];
                i++;
            }
            else{
                A[k] = R[j];
                j++;
            }
            k++;
        }
        while(i < n1){
            A[k] = L[i];
            i++;
            k++;
        }
        while(j < n2)
        {
            A[k] = R[j];
            j++;
            k++;
        }
    }
}

void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) { 
        int m = l + (r - l) / 2; 

        // Sorting first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 

        merge(arr, l, m, r); 
    } 
} 

void printArray(int arr[], int size){
    int i;

    for (i = 0; i < size; i++){
        printf("%d", arr[i]);
        printf("\n");
    }

}

int main(){
    int arr[] = { 12, 11, 16, 5, 19, 56, 8, 14};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("Given array is: \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("The Sorted Array is: ");
    printArray(arr, arr_size);
    return 0;

}
