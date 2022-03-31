#include <stdio.h>

int main(void){

    int i;
    int result;
    int sum = 0;
    float avg;

    for (i=0; i<5; i++)
	{
    	printf("다섯번 정수를 입력해주세요 : ");
        scanf("%d",&result);
        sum = sum + result;
	}
	avg = sum / 5;
	printf("sum = %d\n",sum);
	printf("avg = %f",avg);
    return 0;
}