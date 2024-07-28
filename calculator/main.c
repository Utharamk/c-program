/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int choice;
    float num1,num2,c;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
     scanf("%d" ,&choice);
     printf("enter the first no\n enter the second no\n");
     scanf("%f%f",&num1,&num2);
     switch(choice){
        case 1:
        c=num1+num2;
            printf("%f",c);
            break;
        case 2:
        c=num1-num2;
           printf("%f",c);
           break;
        case 3:
        c=num1*num2;
            printf("%f",c);
            break;
        case 4:
        c=num1/num2;
            printf("%f",c);
            break;
            
     }
     
   

    return 0;
}
