#include<stdio.h>
int main (){
	int side,height,rad;
	const float pi=3.14;
	printf("**volume of ....**\n");
	printf("Enter the value side :");
	scanf("%d",&side);
	
	printf("\nEnter the value height :");
	scanf("%d",&height);
		
	printf("\nEnter the value radius :");
	scanf("%d",&rad);
	
		
	printf("\nThe volume of cube is : %d",side*side*side);
	
	printf("\nThe volume of sphere is : %f",(4*pi*(rad*rad*rad))/3);
	
	printf("\nThe volume of cylinder is : %f",(rad*rad)*height*pi);
	return 0;
}
