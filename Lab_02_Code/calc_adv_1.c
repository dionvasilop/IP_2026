/* File: calc_adv_1.c */
#include <stdio.h>

int main() {
    
    long long int number1;
    long long int number2;
/*
    long long number1;          //same as above two lines
    long long number2;
*/    
        
    printf("Please give the first number: ");
    scanf("%lld", &number1);
    printf("\nPlease give the second number: ");
    scanf("%lld", &number2); 

    printf("\nNumber one is: %lld, Number two is: %lld \n", number1, number2);
    printf("\nThe sum of the two numbers is: %lld \n", (number1+number2));

    printf("\nThe size of a variable long long int is:%ld\n",sizeof(number1));

return 0;

}