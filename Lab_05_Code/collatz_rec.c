/*
Collatz function: Recursive
*/

#include <stdio.h>
#define Starting_Point 950000001
//#define Starting_Point 42

/*
Function isodd 
Find whether an int variable is odd(!) or not 
Two version. Uncomment the one you like, and comment the other
*/

/*
int isodd(int num){

return (num % 2==0)?0:1;

}
*/
int steps=0;

int isodd(int num){

return (num % 2!=0);

}

int collatz(int n){

int term;
if (isodd(n))
    term=n*3+1;
else
    term=n/2;
steps++;
printf("Step No: %d, Term is: %d\n", steps, n);
// Tho methods/ways for recursion. Comment/Uncomment to choose the one you like
// 1st method for recursion 
if (n==1)
    return(steps);  //That's how the recursion ends
else
    collatz(term);
// 2nd method for recursion 
// return (n<=1?1:collatz(term));

}


int main()
{

int term=Starting_Point;

//collatz(term);
printf("Number of steps to find the length of Collatz function: %d\n", collatz(term));

return 0;

}