/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mark;
    printf("enter the mark");
    scanf("%d",&mark);
    if(mark>100)
    {
        printf("invalid");
    }
   else if(mark>=90)
    {
        printf("A Grade");
    }
   else if(mark>=75)
    {
        printf("B Grade");
    }
   else if(mark>=60)
    {
        printf("C Grade");
    }
   else if(mark<60)
    {
        printf("Failed");
    }

    return 0;
}

  
