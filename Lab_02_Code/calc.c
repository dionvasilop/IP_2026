/* File: calc.c */
#include <stdio.h>
int main() {
    
    int number1;
    int number2;
    
    printf("Please enter the first number: ");
    scanf("%d", &number1);
    printf("Please enter the second number: ");
    scanf("%d", &number2);
    printf("The sum of the two numbers is: %d \n", (number1+number2));

    // printf("%ld %ld %ld", sizeof(int), sizeof(long), sizeof(long long int));


return 0; 

}