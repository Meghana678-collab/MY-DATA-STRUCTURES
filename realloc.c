#include<stdio.h>
#include<stdlib.h>
int main()
{    int *a;
    a=(int *)calloc(2,sizeof(int));
    a[0]=8;
    a[1]=9;
    printf("Before realloc: %d %d\n", a[0], a[1]);

    a = (int *)realloc(a, 4 * sizeof(int));
    a[2]=8;
    a[3]=99;
    
    printf("After realloc: ");
    for (int i = 0; i < 4; i++)
        printf("%d ", a[i]);

    free(a);
    return 0;
}
