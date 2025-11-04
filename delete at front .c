//delete at the front of array 

#include <stdio.h>
#define CAP 20   

int main() {
    int arr[CAP] = {10, 20, 30, 40, 50};
    int n = 5; 
    printf("NAME : MEGHANA BJ\n");
    printf("USN : 1SV24CS074\n");
    if(n == 0) {
        printf("\nArray is empty, nothing to delete.");
    } 
    else {
        
        for(int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
    }
    for(int i = 0; i < n; i++)
            printf("%d ", arr[i]);
}
