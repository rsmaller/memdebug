#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "memdebug.h"

int main() {
    char *string = (char *)malloc(32);
     if (!string) {
        printf("allocation failed\n");
        return 0;
     }
    strcpy(string, "woahwoahwoah");
    printf("%s\n", string);
}