#include <stdio.h>
#include <stdlib.h>

main(){
  int thisChar;

  
    while((thisChar = getchar()) != '\n'){
        printf("%c", thisChar);
    }
    printf("%d", thisChar);

  
  
exit(EXIT_SUCCESS);
}