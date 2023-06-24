#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = || (OR) checks if at least one codition is true

    float temp = 10;

    if(temp <=0 || temp >=30){
        printf("\n The weather is Bad\n\n ");
    }
    else{
        printf("\n The weather is good \n\n");
    }

    return 0;
}