#include<stdio.h>
#include<math.h>
void main(){
	int x;
	printf("enter the value of x:");
	scanf("%d",&x);
	if ((x % 5 == 0) && (x % 11 == 0))
		printf("given number is divisible by both 5 and 11");
	else
		printf("given number is not divisible by both 5 and 11");
}
