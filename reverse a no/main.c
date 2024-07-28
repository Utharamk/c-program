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
    int rem;
    while(n!=0)
    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
        
    }
     printf("\n");
    return 0;
}