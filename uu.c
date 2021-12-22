#include<stdio.h>
int main(){
	
	int num;
	
	printf("**PROGRAM TO FIND WHETHER THE GIVEN NUMBER IS EVEN OR ODD***");
	
	printf("Emter a number : ");
scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("%d is a even number.",num);
	}
	else{
		printf("%d is a odd number.",num);
	}
	
	return 0;
}
