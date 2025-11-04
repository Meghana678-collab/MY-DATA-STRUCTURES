//insert at index

#include<stdio.h>
int main()
   #include <stdio.h>
   #define CAP 20   
    int arr[CAP] = {10, 20, 30, 40, 50};
    int n = 5;      
    int pos =5, value= 99, i;

    if(pos < 1 || pos > n + 1) {
        printf("Invalid position! Insertion not possible.\n");
    }
    else {
        if(n == CAP) {
            printf("Array is full! Cannot insert new element.\n");
        }
        else {
            for(i = n; i >= pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos - 1] = value;
            n++; 
        }
    }
            for(i = 0; i < n; i++){
                printf("%d ", arr[i]);
            }
}
