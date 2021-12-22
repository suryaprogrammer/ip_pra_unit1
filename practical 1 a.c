#include<stdio.h>
int main(){
	
	int a,b,result;
	printf("Enter  number a : ");
	scanf("%d",&a);
	printf("\nEnter  number a : ");
	scanf("%d",&b);
	result=a+b;
	printf("Addition of %d and %d is %d\n",a,b,result);
	result=a-b;
	printf("Substraction of %d and %d is %d\n",a,b,result);
	result=a*b;
	printf("Multiplication of %d and %d is %d\n",a,b,result);
	result=a/b;
	printf("Division of %d and %d is %d\n",a,b,result);
	return 0;
}
