# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "array.h"


void write_vector( char* v[MAXROW], int n )
{
    for (int i=0;i<n;i++)
    {
        int j=0;
        
        while(*(v[i]+j)!='\0')
        {
            printf("%c",*(v[i]+j));
            j++;
        }
        printf("\n");
       
    }
}