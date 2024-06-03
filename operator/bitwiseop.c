#include<stdio.h>
void main(){
	int x,y;
	printf("enter x and y values:");
	scanf("%d%d",&x,&y);
	printf("\n bitwise and is %d",x&y);
	printf("\n bitwise or is %d",x|y);
	printf("\n bitwise xor is %d",x^y);
	printf("\n bitwise complement is %d %d",~x,~y);
}
