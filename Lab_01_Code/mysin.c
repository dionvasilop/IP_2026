/* File: mysin.c */
#include <stdio.h>
#include <math.h>

int main(void)
{ double x;
  for (x = 0.0 ; x < 6.3 ; x=x+0.1)
    printf("x = %3.1f  sin(x) = %11.8f\n", x, sin(x));
}
