/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int a=1,i,j,k,n=6;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
     for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++){
            printf("  ");
        }
        for(k=1;k<=n-i;k++){
            printf("%d ",a);
        }
        printf("\n");
    }
   
    return 0;
}
