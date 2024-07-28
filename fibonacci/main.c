/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    
    int i,fib0=0,fib1=1,fibn;
    for(i=1;i<=n;i++)
    {
        printf("%d",fib0);
        fibn=fib0+fib1;
        fib0=fib1;
        fib1=fibn;
    }

    return 0;
}