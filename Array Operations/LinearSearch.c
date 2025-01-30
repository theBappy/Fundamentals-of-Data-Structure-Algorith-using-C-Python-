#include<stdio.h>

int linearSearch(int arr[], int size, int targetVal);

int linearSearch(int arr[], int size, int targetVal){
    for(int i = 0; i<size; i++){
        if(arr[i]== targetVal){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]= {3,7,18,2,9,5};
    int targetVal = 18;
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = linearSearch(arr, size, targetVal);

    if(result != -1){
        printf("Value %d found at index %d\n", targetVal, result);
    }else{
        printf("Value %d is not found", targetVal);
    }
    return 0;
}