#include<stdio.h>
int main(){
	unsigned int x;
	int count = 0;
	printf("enter unsigned integer\n:");
	scanf("%d",&x);
	while (x != 0)
	{
		if ((x & 1) == 1)
			count ++;
		x = x >> 1;
	}
	printf("number of one's are:\n%d\n",count);
	return 0;
}
