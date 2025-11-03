#include<stdio.h>
int main()
{
  int a , b, temp;
  int *ptr1,*ptr2;
  
  printf("enter a and b value : \n");
  scanf("%d %d",&a,&b);
  
  ptr1=&a;
  ptr2=&b;
  
  temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
    
  printf("after swapping\n");
  printf(" a=%d\n", a);
  printf("b=%d\n" ,b);
   
  return 0;
}
