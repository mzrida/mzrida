# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "array.h"


void transpose_array( char A[MAXROW][MAXCOL], int n, int* m)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        int b=0;
        while(A[i][b]!='\0')
        {
            b++;
        }
        if (*m<=b)
        {
            *m=b;
        }
        
    }
    if(*m>MAXROW || n> MAXCOL-1)
    {
        fprintf(stderr,"the transpose fails!\n");
        exit(0);
        
        
    }
    else if(*m<=MAXROW && n<= MAXCOL-1)
    {
        
        for(int j=0;j<n;j++)
        {
            int l=0;
            while(A[j][l]!='\0')
            {
                l++;
            }
            for(int t=l;t<*m;t++)
            {
                A[j][t]=' ';
                
            }

        }

        if(*m>n)
        {
            for(int k=0;k<n;k++)
            {
                for(int d=k+1;d<*m;d++)
                {
                    if(d<n)
                    {
                      temp=A[d][k];
                      A[d][k]=A[k][d];
                      A[k][d]=temp;  
                    }
                    else
                    {
                        A[d][k]=A[k][d];
                    }
                    
                }
            }
        }
        else
        {
            for(int k=0;k<*m;k++)
            {
                for(int d=k+1;d<n;d++)
                {
                    if(d<*m)
                    {
                      temp=A[d][k];
                      A[d][k]=A[k][d];
                      A[k][d]=temp;  
                    }
                    else
                    {
                        A[k][d]=A[d][k];
                    }
                    
                }
            }
        }
        
       
        for(int q=0;q<*m;q++)
        {
            A[q][n]='\0';
        }
        
    }
    
    
}