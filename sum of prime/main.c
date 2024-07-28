/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


    int isprime(int n);
    
        int main()
        {
        int n, i,flag=0;
        printf("enter a no:");
        scanf("%d",&n);
        
        for(i=2;i<=n/2;i++)
        {
            if(isprime(i)==1)
            
            {
                if(isprime(n-i)==1)
                {
                printf("%d=%d+%d\n",n,i,n-i);
                flag=1;
            }
        }
        }
    
   if(flag==0)
   printf("%d cannot be expressed as the sum of 2 prime no.",n);
   
   return 0;
    }

   
int isPrime(int n)
{
    int i,isPrime=1;
    if(n==0||n==1)
    {
        checkPrime==0;
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                checkPrime=0;
                break;
            }
        }
    }
    return checkPrime;
}
        
   



