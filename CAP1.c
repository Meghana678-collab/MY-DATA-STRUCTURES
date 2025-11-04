#include<stdio.h>
#define CAP 5
void  megs(int a[],int n);
void megs(int a[CAP],int n)
{
    for(int i=0;i<n&&i<CAP;i++){
     a[i]=i;
     printf("%d",a[i]);
    }
}
int main()
{
    int a[CAP] , n=130;
    megs(a,n);
}
