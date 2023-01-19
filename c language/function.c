// example of take nothing return nothing function.

#include<stdio.h>



int main()
{
 void add(void);
 add();
 return 0;   
}

// function for adding of two no.

void add()
{
    int a,b,c; 
    printf("Enter the number: ");
    scanf("%d\n%d",&a,&b);
    c=a+b;
    printf("sum is %d",c);
}