# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "array.h"


void get_vector( char A[MAXROW][MAXCOL], char* v[MAXROW], int n )
{
    for (int i=0;i<n;i++)
    {
        v[i]= (char*) calloc(strlen(A[i]),sizeof(char));
        strcpy((v[i]),A[i]);
        if(v[i] == NULL)
        {
            printf("Error! memory not allocated.");
            exit(0);
        }
       
    }
}