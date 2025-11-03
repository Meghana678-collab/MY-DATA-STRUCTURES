#include <stdio.h>
#include <time.h>

int main() {
    int n = 5; 
    int count = 0;

    clock_t start = clock(); 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            count++;
        }
    }

    clock_t end = clock(); 
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Total count = %d\n", count);
    printf("Time Complexity: O(n^2)\n");
    printf("Execution time = %f seconds\n", time_taken);

    return 0;
}
