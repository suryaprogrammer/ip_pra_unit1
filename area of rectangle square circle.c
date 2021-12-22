#include<stdio.h>
int main (){
	
	int l,b,rad,side;
	printf("Enter lenght anfd  breath :");
	scanf("%d,%d",&l,&b);
	printf("\nEnter side :");
	scanf("%d",&side);
	printf("\nEnter radius of circle  :");
	scanf("%d",&rad);
	
	const float pi = 3.14 ;
	printf("\nArea of rectangle is : %d",l*b);
	printf("\nArea of square is : %d",side*side);
	printf("\nRadius of circle is : %d",pi*rad*rad);
	return 0;
}
