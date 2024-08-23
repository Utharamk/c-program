/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>


   struct user
{
    char name[50];
    int age;
    char place[50];
    int balance;
    int phone;
}; 


int main()
{
    int i=0,j,option,b,a,de,wi,ab;
        


struct user c[100];
  do{
      
  
   printf("1. Create Account\n");
        printf("2. Display Balance\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
switch (option)

{
  
   
        
    case 1:
    
        printf("Enter the details\n");
    
        printf("Enter your name:");
        scanf("%s",c[i].name);
        printf("Enter your age:");
        scanf("%d",&c[i].age);
        printf("Enter your place:");
        scanf("%s",c[i].place);
        printf("Enter the phone:");
        scanf("%d",&c[i].phone);
        for(j=0;j<100;j++)
        {
            if(j!=i&&c[j].phone==c[i].phone)
            {
                    printf("already exits.\nPlease try a new code.");
                    scanf("%d",&ab);
                    c[i].phone=ab;
            }
        }
        printf("Enter the balance:");
        scanf("%d",&c[i].balance);
        
        i=i+1;
        printf("Successfully Created");
        break;
        
    case 2:
    printf("enter your phone number:");
    scanf("%d",&b);
    for(i=0;i<100;i++)
    {
        if(c[i].phone==b)
        {
          printf("\nname%s\n",c[i].name);
          printf("\nage%d\n",c[i].age);
          printf("\nplace%s\n",c[i].place);
          printf("\nbalance%d\n",c[i].balance);
          printf("\nphone%d\n",c[i].phone);
          
        }
    }
         
      break;   
      case 3:
      printf("Enter your phone number:");
      scanf("%d",&a);
      for(i=0;i<100;i++)
      {
          if(c[i].phone==a)
          {
              printf("Enter your deposit:");
                scanf("%d",&de);
                c[i].balance+=de;
                printf("\nbalance%d\n",c[i].balance);
          }
      }
      
    
    

     break;
     case 4:
     printf("Enter your phone number:");
     scanf("%d",&a);
      for(i=0;i<100;i++)
      {
          if(c[i].phone==a)
          {
              printf("Enter your Withdrawal:");
                scanf("%d",&wi);
                if(wi>c[i].balance)
                {
                    printf("insufficient");
                }
                else
                {
                  c[i].balance=c[i].balance-wi;
                printf("\nbalance%d\n",c[i].balance);  
                }
                
          }
          
      }
      break;
    case 5:
    printf("Exit");
    exit(0);
    break;
}
}
    


    
    while(option!=5);
    

    
       

 
   
    return 0;
}