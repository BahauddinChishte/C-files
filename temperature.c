#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    
    
    printf("\n Is the temperature in (F) or (C)?: ");
    scanf("%c", &unit);
    unit = toupper(unit);

    if(unit == 'C'){
        printf("\n Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\n The temp in Farenheit is: %.1 \n\nf", temp);
    }    
    else if (unit == 'F'){
         printf("\n Enter the temp in Farenheit: \n\n");
        scanf("%f", &temp);
        temp = ((temp -32) * 5) / 9;
        printf("The temp in Celsius is: %.1f \n\n", temp) ;
    }
   
    else{
        printf(" Please enter a valid unit!!");
    }

    return 0;
}