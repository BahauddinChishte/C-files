#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = && (AND) checks if two conditions are true

    float temp = 20;
    bool sunny = false;
    
    if(temp >=0 && temp <=30 && sunny == true){
        printf("The Weather is good");
    }
    else{
        printf("The Weather is Bad");
    }

    return 0;
}