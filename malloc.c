#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = (int*) malloc(sizeof(int));
    int *b = (int*) malloc(sizeof(int));
    
    *a = 5;  
    *b = 10; 

    printf("Sum = %d\n", *a + *b);

    free(a);
    free(b);

    return 0;
}
