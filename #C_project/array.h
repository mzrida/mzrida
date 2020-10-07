# include <stdio.h>
# include <string.h>
# include <stdlib.h>

#define MAXROW 10 // can be modified 
#define MAXCOL 10 // can be modified

void read_array(char A[MAXROW][MAXCOL],int *nptr);
void write_array( char A[MAXROW][MAXCOL], int n );
void transpose_array( char A[MAXROW][MAXCOL], int n, int* m);
void get_vector( char A[MAXROW][MAXCOL], char* v[MAXROW], int n );
void write_vector( char* v[MAXROW], int n );