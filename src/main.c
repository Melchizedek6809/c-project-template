#include <stdio.h>
#include "util.h"

int main(int argc, char *argv[]){
    char *name = NULL;
    while(!name){
        printf("What is you name? ");
        name = getInput();
    }
    printf("Hello, %s", name);
}
