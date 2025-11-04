//read operation
#include<stdio.h>
int main()
{ int a[]={1,2,3,4,5};
  int n=sizeof(a)/sizeof(a[0]);
  int index=3;
  //read
  if(index>=3&&index<n)
  {printf("%d",a[index]);
  }
}
