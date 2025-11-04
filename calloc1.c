#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *a=(int *)calloc(2,sizeof(int));
    a[0]=2,a[1]=7;
    for(int i=0;i<1;i++)
          printf("%d   %d",a[0] ,a[1]);
    free(a);
}
