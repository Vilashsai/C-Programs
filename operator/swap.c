#include<stdio.h>
void main(){
	int x,y,z;
	printf("enter the x and y values:");
	scanf("%d%d",&x,&y);
	z=x;
	x=y;
	y=z;
	printf("after swapping the numbers are \n%d \n%d",x,y);
}
