#include <stdio.h>
#include<stdlib.h>

main(){
    int ch;
    ch = getchar();
    while(ch != 'a'){
        if(ch != '\n'){
            printf("ch was %c, value was %d\n", ch, ch);       
        }
        ch = getchar();
    }
    exit(EXIT_SUCCESS);
}