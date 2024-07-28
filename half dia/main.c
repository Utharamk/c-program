/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n=6,p=1;
    for(i=0;i<n;i++){
        for(j=1;j<=i+1;j++){
            printf("%d ",p);
            p=p+2;
        }
        printf("\n");
        
        }
    int h=p;
        
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf("%d ",h);
            h=h+2;
        }
        printf("\n");
        
        }
    
    
    return 0;
}
