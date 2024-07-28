/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
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
            if(i==0||i==n||j==0||j==n)
            {
               printf("* "); 
            }
        else
        {
        printf("  ");
        }
        }
        printf("\n");
    }
   
    return 0;
}