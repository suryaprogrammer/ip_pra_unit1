#include<stdio.h>
int main(){
	int num;
	int i;
	printf("Enter the table which yo want ");
	scanf("%d",&num);
	
	printf("The table of %d is below :\n\n",num);
	while(i<=10 ){
		
		printf("%d x %d = %d\n",num,i,i*num);
		i++;
	}
	
	
	
	return 0;
}
