#include<stdio.h>


// For both sorted and unsorted array (tc=O(n))
int linearSearch(int arr[], int size, int  element){
    for (int i =0; i< size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

// Only for sorted array (tc=O(logn))
int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;

    // keep  searching until low is less than equal to high 
    while(low <= high){    
        mid = (low+high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid -1 ;
        }
    }
    return -1;
}


int main(){

    // unsorted array for linear search
    // int arr[]={1,2,45,6,7,8,45,67,88};
    // int size =sizeof(arr)/sizeof(int);
    // int element = 67;
    // int element = 88;
    // int element = 99;
    // int searchIndex = linearSearch(arr, size, element );
    

    // sorted array for binary search
    int arr[]={1, 2, 5, 56, 73, 123, 225, 444};
    int size = sizeof(arr)/sizeof(int);
    int element = 225;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found a index %d \n", element, searchIndex);
    return 0;
}