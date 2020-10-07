# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "array.h"


int main()
{
    char *v[MAXROW]; 
    char A[MAXROW][MAXCOL];
    int no_str=0;
    int new_no_str=0;
    
    read_array(A,&no_str);
    printf("constructing vector and writing it:\n\n");
    get_vector( A, v, no_str );
    write_vector( v, no_str );
    printf("\ntransposing the 2D array and writing it:\n\n");
    transpose_array( A,no_str,&new_no_str);
    write_array(A,new_no_str);


    return 0;    
}