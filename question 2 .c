#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strdup(char *src) {
    char *dst = (char*)malloc(strlen(src) + 1); 
    char *p = dst;
    while((*p++ = *src++)); 
    return dst;
}

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    char *copy = my_strdup(s);
    printf("Copied string: %s\n", copy);
    free(copy);
}
