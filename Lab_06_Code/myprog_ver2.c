#include <stdio.h>
#include <stdlib.h>
//USE MALLOC: Use pointers, instead of standard int variables

void badf(int, int, int, int);
void goodf(int, int, int *, int *);

int main() {
    int a, b;
    int *sum, *diff;

    //Reserve memory for pointers
    sum = malloc(sizeof(int));
    diff = malloc(sizeof(int));
    if (sum == NULL || diff == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *sum = 10;*diff = 10;

    printf("Give integer a: ");
    scanf("%d", &a);
    printf("Give integer b: ");
    scanf("%d", &b);

    badf(a, b, *sum, *diff);
    printf("Calling BADF, The sum (outside of BADF) a+b is: %d, the difference a-b is: %d\n", *sum, *diff);

    goodf(a, b, sum, diff);
    printf("Calling GOODF, The sum (outside of GOODF) a+b is: %d, the difference a-b is: %d\n", *sum, *diff);

    //Release reserved memory 
    free(sum);
    free(diff);

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