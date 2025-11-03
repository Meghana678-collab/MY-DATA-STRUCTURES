#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c, i, j;
    printf("Enter rows cols: ");
    scanf("%d%d", &r, &c);
    int *a = malloc(r * c * sizeof(int));

    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
         scanf("%d", a + i*c + j);

    printf("Transpose:\n");
    for(j=0;j<c;j++){
      for(i=0;i<r;i++)
        printf("%d ", *(a + i*c + j));
      printf("\n");
    }
    free(a);
}
