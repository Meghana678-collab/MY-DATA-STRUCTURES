//delete at position

#include<stdio.h>
int main()
{
    int a[5]={8,9,6,8,7};
    int n, i;
    n=5;
    int pos = 3;
    for(i =pos; i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
     printf("a[%d]=%d  ",i,a[i]);
}
