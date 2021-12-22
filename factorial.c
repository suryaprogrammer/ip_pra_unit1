#include<stdio.h>
int main(){
	//factorial
	
	int num,fact;
	printf("Enter a number : ");
	scanf("%d",&num);
	fact =1;
	int *j = num ; 
	while( num > 0 ){
		
		fact=fact*num;
		num--;
	}
	
		printf("Factorial of %u %d  ",j,fact);
	
	
	return 0;
}
