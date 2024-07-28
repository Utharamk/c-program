/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

void sum(int a,int b)
{
    printf("The sum is : %d\n",a+b);
}

void dif(int a,int b)
{
    printf("The difference is : %d\n",a-b);
}

void mul(int a,int b)
{
    printf("The product is : %d\n",a*b);
}

void divi(int a,int b)
{
    if(b==0){
        printf("Error");
    }
    else
    {
    printf("The Quotient is : %d\n",a/b);
    }
}


int main()
{
    int a,b,op,reenter,x;
    
    do{
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        printf("1.Addition \n2.Subraction \n3.Multiplication \n4.Division \n5.Exit\nEnter your choice: ");
        scanf("%d",&op);
        
        switch(op)
        {
            case 1:
                sum(a,b);
                break;
            case 2:
                dif(a,b);
                break;
            case 3:
                mul(a,b);
                break;
            case 4:
                divi(a,b);
                break;
                case 5:
                exit(0);
            default:
                
           
            
            }
        printf("Do you want to continue(1.yes)");
           scanf("%d",&reenter);
           scanf("%d",&x);
            }
    
    while(x==1);
    return 0;
}
