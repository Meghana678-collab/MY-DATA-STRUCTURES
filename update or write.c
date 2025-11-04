//write ,update of array
#include<stdio.h>
int main()
{
    int a[]={10,22,215,355};
    int n=sizeof(a)/sizeof(a[0]);
    int index=3;
    int newval=22222;
    
    if(index>=0&&index<n){
        a[index]=newval;
    for(int i=0;i<n;i++)
       printf("%d  ",a[i]);
    printf("\n");
    }
    else
      printf("index out of range\n");
}
