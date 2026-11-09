/* File: lowercase.c */
#include <stdio.h>

int main()
{ int ch; 
  ch = getchar();                          
  while (ch != EOF) {        
    
    if (ch >= 'A' && ch <= 'Z') //Find Uppercase Letter characters  
      ch = ch + ('a'-'A');
    else
        if (ch >= 'a' && ch <= 'z') //Find lowercase Letter characters  
            ch = ch - ('a'-'A');

    putchar(ch);                                
    ch = getchar();                              
  }
  return 0;
}
