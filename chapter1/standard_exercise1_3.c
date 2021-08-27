#include <stdio.h>
#include <stdlib.h>


int getNumber(){
    int c, value;

    value = 0;
    c = getchar();
    while(c != '\n'){
        value = 10 * value + c - '0';
        c = getchar(); 
    }
    return value;
}

main(){
    printf("Type in a string: ");
    printf("The value was: %d\n", getNumber());
    exit(EXIT_SUCCESS);
}

