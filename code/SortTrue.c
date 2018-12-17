#include <assert.h>
#include <stdio.h>
void insertionSort(int arr[], int n) 
{ 
   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
  
       
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = key; 
   } 
}

/* Driver program to test insertion sort */
int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6}; 
    int n = 5;
    insertionSort(arr, n); 
    int i;
    for(i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
          assert(0);
          break;
        }
    }
    return 0; 
} 
