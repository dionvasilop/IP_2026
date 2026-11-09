/* 
File: decode.c 
usage example:

a)
decode <decoded_text 

b)
decode <decoded_text >decoded.txt
*/

#include <stdio.h>

int main()
{ 

unsigned int ascii_value; // Ascii decimal value

int scan_return=0;

// 1st Solution

/*
scan_return=scanf("%2x", &ascii_value); // Read first two hex characters 

while (scan_return!=-1) // Keep reading unless we reached end of file 
{

printf("%c",ascii_value);

//printf("%c %d %d \n", ascii_value, ascii_value, scan_return); //Just for testing purposes

scan_return=scanf("%2x", &ascii_value); // Read two hex characters 

} 
*/

 
 //2nd Solution
/*
do {


scan_return=scanf("%2x", &ascii_value); // Read two hex characters 
printf("%c",ascii_value);

//printf("%c %d %d \n", ascii_value, ascii_value, scan_return); //Just for testing purposes


} while (scan_return!=-1); 


*/

// 3rd Solution

while (scanf("%2x", &ascii_value)==1) // Keep reading (two hex numbers) unless we reached end of file 
{

printf("%c",ascii_value);

} 

 printf("\nEnd of conversion\n");   //Just for testing purposes
 return 0;

}

//gcc -o decode decode.c