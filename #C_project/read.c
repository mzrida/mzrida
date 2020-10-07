# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "array.h"


void read_array(char A[MAXROW][MAXCOL],int *nptr)
{
    int b=0;
    int a=0;
    int c;
    int too=0;
    
    
    printf("Please enter string to read!:\n");
    while((c=getchar())!=EOF)
    {
        switch(c)
        {
            case '\n':
                if(a>=MAXROW)
                {
                    fprintf(stderr,"too many strings entered\n");
                    break;
                    
                }
                
                else
                {
                    
                    if(too==1)
                    {
                      fprintf(stderr,"The string is too long, only the first MAXCOL-1 chars are read\n");  
                    }
                    A[a][b]='\0';
                    printf("enter string :\n");

                    ++a;
                    b=0;
                    too=0;
                    (*nptr)++;
                    break;
                }
                
                
                
            default:
                if(a>=MAXROW || b>=MAXCOL-1)
                {
                    too=1;
                    break; 
                } 
                else  
                {
                    A[a][b]=c;
                    b++;
                    break;
                }    
        }
           
        
    }
    
}