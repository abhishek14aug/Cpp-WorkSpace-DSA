#include <stdio.h>

int main()
{
    int arr[5];
    int sum=0;
    float avg=0;
    printf("Enter the numbers");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }

    

    avg=sum/5.0;

    printf("avg is %f",avg);

    return 0;
}