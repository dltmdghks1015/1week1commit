#include<stdio.h>

int sum(int x,int y){
	return x + y;
}
int main(void){
	int num1,num2;
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d %d",&num1,&num2);
	printf("%d와 %d의 합은 %d 입니다",num1,num2,sum(num1,num2));
	
	return 0;
}
