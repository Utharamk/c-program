/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,b,c,largest;
    printf("Enter three no:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            largest=a;
        }
        else
        {
            largest=c;
        }
    }
    else 
    { 
        if(b>c)
        {
            largest=b;
        }
                else
                largest=c;
           
        }
        printf("%d",largest);

    return 0;
}