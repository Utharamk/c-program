/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void reverse(int);
int main()
{
    int num;
    printf("Enter a no:");
    scanf("%d",&num);
    reverse(num);
    return 0;
}

void reverse(int num)
{
    int d,r=0;
    while(num!=0)
    {
      d=num%10;
      r=r*10+d;
      num=num/10;
      
      
    }
    printf("%d",r);
    
}
