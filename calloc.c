#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *a=(int *)calloc(5 ,sizeof(int));
    for(int i=0;i<5;i++)
          printf("%d",a[i]);
    free(a);
}
