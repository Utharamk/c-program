/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int power(int,int);
int main()
{
    int base,p, res,power;
    printf("\n enter base value:");
    scanf("%d",&base);
    printf("\nEnter power value:");
    scanf("%d",&p);
    res=power(base+p);
    printf("\nResult=%d",res);
    return 0;
}
int power(int base,int p)
{
    if(power==0)
    return 1;
    else
    return base*power(base,p-1);
        
    
}