#include <stdio.h>


int main(){

for (int i=1;i<=6;i++) {
        for (int j=1;j<=i;j++)
            putchar('*');
        putchar(10);        //EOL: End of line to print * to next line
}


}