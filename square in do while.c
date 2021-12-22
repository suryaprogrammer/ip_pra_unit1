#include<stdio.h>
int main(){
	int num;
	int i;
	printf("Enter a number ");
	scanf("%d",&num);


do{
	printf("%d square is %d\n",i,i*i);
	i++;
	
}	while(i <= num);

	
	return 0;
}
