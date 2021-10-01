#include <stdio.h>
#include <stdlib.h>

void output(char input){
    static int lineNum =1;
    int c;
    if(input !='\n' ){
        putchar(c);
        printf("%c on line %d \n", input, lineNum);
        lineNum++;
    }
    void output(char input2);
    
}

int main(){
    printf("Enter a character: ");
    char c;
    c = getchar();
    output(c);
    output('d');
    output('\n');
    exit(EXIT_SUCCESS);
}