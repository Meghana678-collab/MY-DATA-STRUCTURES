#include<stdio.h>
int main()
{ int s , m , sum;
  int *p , *p1;
  printf("enter values of s and m : \n");
  scanf("%d %d" , &s , &m);
  
  p=&s;
  p1=&m;
  
  sum=*p+*p1;
   
  printf("SUM =  %d\n", sum);
  return 0;
}
