#include<stdio.h>

int sum(int x,int y){
	return x + y;
}
int main(void){
	int num1,num2;
	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d %d",&num1,&num2);
	printf("%d�� %d�� ���� %d �Դϴ�",num1,num2,sum(num1,num2));
	
	return 0;
}
