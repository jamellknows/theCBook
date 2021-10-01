#include <stdio.h>
#include <stdlib.h>

int abs_val(int num){
    if( num < 0)
    {
        return (-num);
    }
    return num;
}

int main(){
     
    for(int i = -10; i <=10; i++){
        printf("abs value of %d is %d\n", i, abs_val(i));  
    }
    exit(EXIT_SUCCESS);
} 

//OK