#include <stdio.h>

// 숫자 10개를 입력받고 홀수와 짝수의 개수를 구하는 프로그램

int main(void){
	
	int i;
	int result[10];
	int odd[10];
	int even[10];
	int oddsize=0;
	int evensize=0;
	
	for (i=1;i<11;i++){
		printf("%d번째 숫자 : ",i);
		scanf("%d",&result[i]);
		if (result[i] % 2 == 0){
			odd[i] = result[i];
			oddsize++;
		}
		else{
			even[i] = result[i];
			evensize++;
		}
	}
	
	printf("홀수의 개수는 %d개입니다.\n",evensize);
	printf("짝수의 개수는 %d개입니다.\n",oddsize);	
	
	return 0;
}