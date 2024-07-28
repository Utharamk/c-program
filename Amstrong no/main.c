/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,num,rem,result;
    printf("Enter a  no:");
    scanf("%d",&num);
    n=num;
    
    while(n!=0)
    {
        rem=n%10;
        result=result+(rem*rem*rem);
        n=n/10;
    }
    if(num==result)
        {
            printf("it is an Amstrong no");
        }
        else
        {
             printf("it is not an Amstrong no");
        }
    
    

    return 0;
}