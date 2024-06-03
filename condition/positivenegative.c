#include<stdio.h>
int main()
{
	int x;
	printf("enter the number:");
	scanf("%d",&x);
	if (x > 0)
		printf("given number is positive");
	else if (x < 0)
		printf("given number is negative");
	else if(x == 0)
		printf("given number is zero");
	return 0;
}

