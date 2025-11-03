#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n , *p , sum=0 , max;
    printf("enter the value of n: \n");
    scanf("%d",&n);
    
    p= (int*)malloc(n*sizeof(int));
    printf("enter numbers : \n");
    for(int i=0;i<n;i++)
        {scanf("%d",p+i);
        }
    max=*p;
    for(int i=0;i<n;i++)
    {
        sum+=*(p+i);
        if(*(p+i)>max)
            max=*(p+i);
    }
    printf("sum=%d , max=%d\n" ,sum ,max);
    free(p);
}
