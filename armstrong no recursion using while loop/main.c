/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
#include<math.h> 

 int countDigits(int num) 
 int n,rem,result,count;
 int main()
 {
     
     int count=0;
      while(num>0)
    
       num/10;
        count++;
     
 }int sumOfPowers(int num,int power)
  {
      while(num==0)
      return 0;
      int digit = num%10;
      return pow(digit,power)+sumOfPowers(num/10,power);
      
  }
  int isAmstrong(int num)
  {
      int power = countDigits(num);
      return num ==sumOfPowers(num,power);
      
}
int main(){
int num;

printf("Enter a number:");
scanf("%d",&num);

if(isAmstrong(num))
printf("%d is an isAmstrong number.\n",num);
else
printf("%d is not an Amstrong number,\n",num);

return 0;
}
}

    

