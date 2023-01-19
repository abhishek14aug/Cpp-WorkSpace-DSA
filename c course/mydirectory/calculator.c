#include<stdio.h>

int main()
{
    while(1)
    {
    int choice,a,b,s,m,n,y;
    printf("\n1.ADDITION");
    printf("\n2.SUBTRACTION");
    printf("\n\nEnter your choice");
    scanf("%d",&choice);
    switch(choice)
    {

    case 1:
       {
           printf("Enter the two numbers");
           scanf("%d%d",&a,&b);
           s=a+b;
           printf("sum of %d and %d is %d",a,b,s);
           break;
       }
    
    case 2:
       {
           printf("Enter the two numbers");
           scanf("%d%d",&m,&n);
           y=m-n;
           printf("subtraction of %d and %d is %d",m,n,y);
           break;
           
        }

        

    }

    }
}