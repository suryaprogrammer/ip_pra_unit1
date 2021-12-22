#include<stdio.h>
int main(){
	//prime no 
	
	char sury = "hiizhhc";
	int num,fact;
	int i=1;
	int count=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("%c : ",sury);
	while(i<=num){
		
		if(num%i==0){
			count++;
		}
		i++;
		
	}
	if(count==2){
		printf("%d is a prime number.",num);
		}	
		else{
			printf("%d is not a prime number.",num);
		}
	return 0;
}
