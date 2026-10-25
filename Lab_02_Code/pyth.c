/* File: pyth.c 
   ASSUMING SMALL INTEGER VALUES
*/

#include <stdio.h>
#include <math.h>

int main() {
    
    int side_1;
    int side_2;
    double hypotenuse;
    
    printf("Please give the first vertical side (meters): ");
    
    if (scanf("%d", &side_1)!=1) {             
        printf("Invalid input for first side. Exiting with code 1.\n");
        return 1;  // Exit with code 1 if input is not a number
    }
    
    printf("Please give the second vertical side (meters): ");

    if (scanf("%d", &side_2)!=1) {
        printf("Invalid input for second side. Exiting with code 1.\n");
        return 1;  // Exit with code 1 if input is not a number
    }
    
    printf("\nThe area of the triangle is: %10.2f square meters\n", (float)(side_1*side_2)/2);
    hypotenuse=sqrt((double)(side_1*side_1+side_2*side_2));
    printf("\nThe hypotenuse of the triangle is: %10.2f meters\n", hypotenuse);
    printf("The perimeter of the triangle is: %10.2f meters\n\n", (side_1+side_2+hypotenuse));


return 0;

}