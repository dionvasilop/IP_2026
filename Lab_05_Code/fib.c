#include <stdio.h>
#define Iteration 35

int main(){

int term=0;     //Running Fibonacci Term
int n=0;        //Running Fibonacci term Index
int fib_minus1=0, fib_minus2=0;


do {
switch (n) {

case 0: 
        term=0; 
        break;
case 1: 
        term=1; 
        fib_minus1=term;
        break;
default: 
        term=fib_minus1+fib_minus2;
        fib_minus2=fib_minus1;
        fib_minus1=term;
}

printf("Iteration: %d, Term: %d\n", n, term);

n++;

} while (n<Iteration);

return 0;

}