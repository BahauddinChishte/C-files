#include <stdio.h>
#include <stdbool.h>

int main(){

    //logical operator =! (NOT) reverse the state of conditon

    bool sunny = 0;

    if (!sunny){
        printf("\nIt's cloudy outside!");
    }

    else{
        printf("\nIt's sunny outside!");
    }

    return 0;
}