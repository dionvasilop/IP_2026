#include <stdio.h>

//Define prototypes of function calls in main

void badf(int, int,  int,  int);
void goodf(int, int,  int *,  int *);


int main() {

int a=5, b=4, sum=10, diff=10;

printf("Give integer a: ");
scanf("%d", &a);
printf("Give integer b: ");
scanf("%d", &b);

badf(a, b, sum, diff);

printf("Calling BADF, The sum a+b is: %d, the difference a-b is: %d\n", sum, diff);

goodf(a, b, &sum, &diff);

printf("Calling GOODF, The sum a+b is: %d, the difference a-b is: %d\n", sum, diff);

return 0;

}

void badf(int x, int y, int sum, int diff) {

sum = x + y;
diff = x - y;
printf("FROM INSIDE badf: The sum a+b is: %d, the difference a-b is: %d\n", sum, diff);

}

void goodf(int x, int y, int *sum, int *diff) {

*sum = x + y;
*diff = x - y;
printf("FROM INSIDE goodf: The sum a+b is: %d, the difference a-b is: %d\n", *sum, *diff);

}