/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Enter a sentance: ");
    reverseSentance();
    return 0;
}
void reverseSentance()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        reverseSentance();
        printf("%c",c);
    }
    return 0;
}
