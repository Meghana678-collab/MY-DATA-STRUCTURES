//delete at the end of array 

#include<stdio.h>
#define CAP 20
int main()
{
    int a[CAP] = {10, 20, 252 , 45 ,55};
    int n=5;
    printf("NAME : MEGHANA BJ\n");
    printf("USN : 1SV24CS074\n");
    
    if(n<CAP)
    {n--;
    }
    else{
        printf("array is empty");
    }
    
    for(int i=0;i<n;i++)
    {
      printf("%d  ",a[i]);  
    }
}
