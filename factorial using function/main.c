/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 int sum();
   void main()

{
  
       int result;
       result = sum();
       printf("factorial of numbers tillthe limit is:%d",result);
       
   }
   int sum()
   {
       int i,n,fact=1;
       printf("enter the limit:");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
           fact *= i;
       }
   return fact;
  }