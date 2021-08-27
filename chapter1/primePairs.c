#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926
main(){

int count = 0;

//basically for this excersie I have to calculate riemann zeros 
while(count < 10000){
    int first_prime = 6 * count + 1;
    int second_prime = first_prime - 2;
    count = count + 1;

    printf(" first prime %d, second prime %d\n", first_prime, second_prime);
   
    
}
exit(EXIT_SUCCESS);
}