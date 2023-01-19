#include<stdio.h>

int main()
{
	int x=5;

    // declaring and intializing a pointer which holds the address of variable x.
	int *a =&x;

    // printing the address of variable x.
	printf("%d\n", &x);

    // printing the stored value of pointer which is nothing but the address of variable x.
	printf("%d", a);

	return 0;
}