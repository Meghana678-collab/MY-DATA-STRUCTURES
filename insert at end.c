//insert at end
#include<stdio.h>
#define CAP 10
int main()
{
    int a[CAP]={0,9,9,999};
    int n=3;
    int x=8;
    if(n<CAP)
    {
        a[n]=x;
         n++;
    }
    else
      printf("array is full\n");
    
    for(int i=0;i<n;i++)
       printf("%d  ", a[i]);
}
