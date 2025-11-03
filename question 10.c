#include <stdio.h>
#include <stdlib.h>

#define get(img,x,y,w) img[(y)*(w)+(x)]
#define set(img,x,y,w,v) img[(y)*(w)+(x)]=(v)

int main(){
    int w,h,x,y;
    scanf("%d%d",&w,&h);
    int *img=malloc(w*h*sizeof(int));
    for(y=0;y<h;y++)
      for(x=0;x<w;x++)
        scanf("%d",&get(img,x,y,w));
    printf("Image:\n");
    for(y=0;y<h;y++){
      for(x=0;x<w;x++)
        printf("%d ",get(img,x,y,w));
      printf("\n");
    }
    free(img);
}
