/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n, sum=0;
    printf("Enter the numbers:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    sum=sum+i;
    }
    printf("sum:%d",sum);
    return 0;
}