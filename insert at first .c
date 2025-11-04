#include<stdio.h>
#define CAP 100
int main()
{
    int a[CAP]={10,20,30,55};
    int n=4;
    int x=7;
    if(n<CAP)
    { //swift right n is the last index
        for(int i = n;i>0;i--){
            a[i] =a[i-1];
       }
    a[0]=x;
    n++;
    }
    else
       printf("invalid");
       
     for(int i=0;i<n;i++)
       printf("%d ",a[i]);
}
