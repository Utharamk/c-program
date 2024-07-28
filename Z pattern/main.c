/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   
     int i,j,n=6;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=6;j++)
        {
            if(i==0||i==n||j==n-i)
            {
               printf("* "); 
            }
        else
        {
        printf("  ");
        }
        }
        printf("\n");
    } ;

    return 0;
}
