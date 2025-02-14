#include<stdio.h>

void printArray(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }  
    printf("\n");
}
void bubbleSortAdaptive(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j < n-1-i; j++) // For comparison in each pass
        {
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        }  
        if(isSorted) return;    
    }  
}
void bubbleSort(int *A, int n){
    int temp;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1);
        for (int j = 0; j < n-1-i; j++) // For comparison in each pass
        {
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }   
    }  
}
int main(){
    // int A[] = {12, 54, 65, 7, 23, 9};
    // int A[] = {1, 2, 3, 4, 5, 6};
    int A[] = {1,77, 23, 12, 5, 6, 25, 87, 45, 33, 27};
    int n = 11;

    printArray(A, n); // Printing the array before sorting
    bubbleSort(A, n); // Function to perform bubble sorting
    printArray(A, n); // Printing the array after sorting

    return 0;
}