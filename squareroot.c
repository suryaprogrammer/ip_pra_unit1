#include<stdio.h>
int main(){
	int num;
	int i;
	printf("Enter a number ");
	scanf("%d",&num);
	
while( i <= num ){
	
	printf("%d square is %d\n",i,i*i);
	i++;
}
	
	
	return 0;
}
