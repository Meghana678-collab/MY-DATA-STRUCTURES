#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *a=(int *)calloc(2,sizeof(int));
    int *b=(int *)calloc(2,sizeof(int));
    int *c=(int *)calloc(2,sizeof(int));
    *a=2,*b=7,*c=5;
    printf("%d\n",*a+*b+*c);
    free(a);
    free(b);
    free(c);
}
