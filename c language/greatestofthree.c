#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("enter the value of a, b and c\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is greatest of three",a);
    
    }
    else if(b>a&&b>c)
    {
        printf("%d is greates of three",b);
    }
    else
    {
        printf("%d is greatest of three",c);
    }
    return 0;
}