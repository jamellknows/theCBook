#include <stdio.h>

//function declaration
void show_message(void);


main(){
    int count;

    count = 0;
    while(count < 10){
        show_message();
        count = count + 1;
    }

    return(0);
}

//function definition 
void show_message(void){
    printf("hello\n");
}

