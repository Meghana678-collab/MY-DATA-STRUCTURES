#include <stdio.h>
#include <time.h>

int main() {
    int n = 500;  
    int count = 0;

    clock_t start = clock();

    
    for(int i = 1; i <= n; i++) {
        count += i;  // simple operation
    }

    clock_t end = clock(); 

    printf("Total count = %d\n", count);
    printf("Time Complexity: O(n)\n");
    printf("Execution time = %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
