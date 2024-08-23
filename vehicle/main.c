/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct vehicle
{
    char a1[100], a2[100], a3[100];
    int a4;
};

int main()
{
    int i = 1, option, tyres,h;
    struct vehicle v[100];

    do
    {
        x:
        printf("\n 1.Vehicle registration\n");
        printf("\n 2.Display vehicle\n");
        printf("\n 3.Exit\n");
        printf("Enter your option:\n");
        scanf("%d", &option);

switch (option)
        {
        
        case 1:
            printf("Vehicle owner name:");
            scanf("%s", v[i].a1);
            printf("Vehicle name:");
            scanf("%s", v[i].a2);
            printf("Vehicle model:");
            scanf("%s", v[i].a3);
            printf("Enter the number of tyres:");
            scanf("%d", &v[i].a4);
            if(v[i].a4>4||v[i].a4<2)
            {
                q:
                printf("invalid number\n");
                printf("valid number:");
                scanf("%d",&h);
                if(h>4||h<2)
                {
                    goto q;
                }
                v[i].a4=h;
            }
            printf("Successfully registered\n");
            i++;
            break;

  case 2:
    y:
            printf("\n2tyres \n3tyres \n4tyres \n5exit\n ");
            printf("Enter the number of tyres:");
            scanf("%d", &tyres);
            
                if (tyres==2)
                {
                    for (int j = 1; j < i; j++)
                    {
                        if(tyres==v[j].a4)
                        {
                        printf("Vehicle owner name:%s\n", v[j].a1);
                        printf("Vehicle name:%s\n", v[j].a2);
                        printf("Vehicle model:%s\n", v[j].a3);
                        printf("Number of tyres:%d\n", v[j].a4);
                        }
                    }
                }
                else if(tyres==3)
                {
                    for(int j=1;j<i;i++)
                    {
                        if(tyres==v[j].a4)
                        
                    {
                    printf("Vehicle owner name:%s\n", v[j].a1);
                    printf("Vehicle name:%s\n", v[j].a2);
                    printf("Vehicle model:%s\n", v[j].a3);
                    printf("Number of tyres:%d\n", v[j].a4);
                    }
                }
                }
        
                else if(tyres==4)
                {
                    for(int j=1;j<i;j++)
                    {
                        if(tyres==v[j].a4)
                    {
                    
                    printf("Vehicle owner name:%s\n", v[j].a1);
                    printf("Vehicle name:%s\n", v[j].a2);
                    printf("Vehicle model:%s\n", v[j].a3);
                    printf("Number of tyres:%d\n", v[j].a4);
                    }
                   }
                }
                if(tyres==5)
                {
                    goto x;
                }
                goto y;
            
            break;
             case 3:
            exit(0);
            
            // break;

        default:
            printf("please try again\n");
        
        goto x;
        }
        } while (1);
        
        
        
         
    
    return 0;
}