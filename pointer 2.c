#include<stdio.h>
int main()
{
 int arr[5]={10,210,223,1215,23156};
 int *ptr;
 ptr = arr;
 printf("first element = %d\n",*ptr);
 printf("second element = %d\n" , *(ptr+1));
 printf("third element = %d\n" , *(ptr+2));
 printf("fourth element = %d\n" , *(ptr+3));
 printf("fifth element = %d\n" , *(ptr+4));
 return 0;
 }
