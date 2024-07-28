/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int gcd();
int main()
{
    int result,n1,n2;
    printf("enter two numbers :");
    scanf("%d%d", &n1, &n2);
    result = gcd();
    printf("%d", result);
    return 0;
}
int gcd()
{
    int i, n1, n2, value;
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)

            value = i;
    }
    return gcd(value);
}
