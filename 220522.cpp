#include<stdio.h>

int sum(int x,int y){
	return x+y;
}
int min(int x,int y){
	return x-y;
}
int mul(int x,int y){
	return x*y;
} 
float div(float x,float y){
	return x/y;
}
int main(void){
	int num1,num2;
	int i;
	printf("계산할 값을 입력해주세요: ");
	scanf_s("%d %d",&num1,&num2);
	printf("sum = %d \n",sum(num1,num2));
	printf("min = %d \n",min(num1,num2));
	printf("mul = %d \n",mul(num1,num2));
	printf("div = %.2f \n",div(num1,num2));
	
	return 0;
}
