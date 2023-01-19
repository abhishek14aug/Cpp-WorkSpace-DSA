#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++) //loop for rows
    {
        for(int j=1;j<=5;j++) //loop for columns where * and null will be displayed
        {
            if(j<=i) // condition where star must be printed
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); //to send the cursor at new line.
    }
    return 0;
}