#include<stdio.h>
int main (){
	
	
	int a,b,temp;
	printf("Enter the the value of a : ");
	scanf("%d",&a);
	printf("Enter the the value of a : ");
	scanf("%d",&b);
	
	
	printf("\nThe number before swapping a is %d and b is %d \n",a,b);
	temp = a ;
	a = b  ;
	b = temp  ;
	
	printf("The number after swapping a is %d and b is %d \n",b,temp);
	
	
	return 0;
}
