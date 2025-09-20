#include<stdio.h>
int main(){
	int num1, num2;
	printf("enter num1: \t");
	scanf("%d", &num1);
	printf("enter num2: \t");
	scanf("%d", &num2);
	(num1>num2)? printf("Num1 is greater than Num2") : printf("Num2 is greater than Num1");
	return 0;
}
