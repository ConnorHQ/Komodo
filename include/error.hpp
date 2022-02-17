#include <stdio.h>

#include <stdlib.h>

static void error(char* msg) {
    printf("\033[0;31m");
    printf("ERROR: %s", msg);
    printf("\033[0m");

    //exit(1);
}   
