/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,Area,Perimeter;
    printf("enter 2 no:");
    scanf("%d%d",&a,&b);
    printf("enter the area of rectangle:\n");
    Area=a*b;
    printf("%d\n",Area);
    printf("enter the Perimeter of rectangle:\n");
    Perimeter=2*(a+b);
    printf("%d\n",Perimeter);
    

    return 0;
}