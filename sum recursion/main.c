/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int);
void main()
{
    int n,a=0;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    a=sum(n);
    printf("%d",a);
    
}
int sum(int n)
{
    
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+sum(n-1);
      
    }
    
}
