#include<stdio.h>
int main()
{ 
    int a = 9;
    int *p=&a;
    printf("before update : %d\n",*p);
    *p=5;
    printf("after update: %d",*p);
    return 0;
}
