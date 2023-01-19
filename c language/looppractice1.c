// program to display the first n natural number and their sum.

#include <stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Plz Enter the value of n\n");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;
        
    }
    printf("\nSum of first %d natural no is %d",n,sum);
    return 0;
}