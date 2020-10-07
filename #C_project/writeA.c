# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "array.h"


void write_array( char A[MAXROW][MAXCOL], int n )
{
   int j;
   int i;
   for(i=0;i!=n;i++)
   {
      j=0;
      while(A[i][j]!='\0')
      {
          //putchar(A[i][j]);
          printf("%c",A[i][j]);//I guess both work
          j++;

      } 
      printf("\n");
   } 
   
}