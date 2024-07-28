/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
void main()
{
    char c;
    int choice,dummy;
    do{
        printf("\n1.print hello\n2.print javascript\n3.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case1:
            printf("Hello");
            break;
            case2:
            printf("javascript");
            break;
            case3:
            exit(0);
            break;
            default:
            printf("please enter valid choice");
            
        }
            printf("do you want to enter more?");
            scanf("%d",&dummy);
            scanf("%c",&c);
        
    }
    while(c=='y');
}

   
