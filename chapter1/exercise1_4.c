#include <stdio.h>
#include <stdlib.h>
#define ARRSIZE 10

/*This is how you would get numbers but....
It doesn't work for sorts as it's not an array */
/*The answer is example 4*/
getnum(){
    int character, value;
    value = 0;
    character = getchar();
    while(character != '\n'){
        value = 10 * value + character - '0';
        character = getchar();

    }
    return value;
}

main(){
    int arr[ARRSIZE], count, x2, x1;
    /*INPUT */
    count = 0;
    printf("Type in a string: \n ");
    while(arr[count] != '\n'){
        arr[count] = getchar();

        count = count + 1;
    }
    /*SORT */
    x1 = 0;
    while(x1 < ARRSIZE - 1){
        x2 = x1 + 1;
        while(x2 < ARRSIZE){
            int temp;
            if(arr[x1] > arr[x2]){
                temp = arr[x1];
                arr[x1] = arr[x2];
                arr[x2] = temp;
            }
            x2 = x2 + 1;
        }
        x1 = x1 + 1;
    }
    /* PRINT*/
    count = 0;
    while(count < ARRSIZE){
        printf("%d\n", arr[count]);
        count = count +1;
    }


    exit(EXIT_SUCCESS);

}




/* This would be good but the number isn't an array
bubbleSort(){
    int count1, count2;
    count1 = 0;
    count2 = 0;
    int string = getNumber();

    if(string != 0){
    int nDigits = floor(log10(abs(string))) + 1; 
    while(count1 < nDigits){
        count2 = count1 + 1;
        while(count2 <= nDigits){
            if(string[count1] > string[count2]){
                int temp;
                temp = string[count1];
                string[count1] = string[count2];
                string[count2] = temp;
            }
            count2 = count2 + 1;
        }
        count1 = count1 + 1;
    }

    }
}

*/

