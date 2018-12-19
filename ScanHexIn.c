#include <stdio.h>
#include<stdint.h>

int main() 
{
 
   uint32_t wSeed;
   int i;
 
   printf( "Enter a value :");
   scanf("%x",&wSeed);
   //scanf("%", str, &i);
 
   printf( "\nYou entered: %X ", wSeed);
   printf("\n");
   return 0;
}
