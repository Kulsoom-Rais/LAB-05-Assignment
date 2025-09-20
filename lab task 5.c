#include<stdio.h>
int main(){
	int num;
	printf("enter the number: \n");
	scanf("%d",&num);
	if (num %3 ==0 && num %5==0){
		printf("number is divisible by both 3 and 5 \n");
	}
	else {
		printf("number is not divisible by both 3 and 5");
	}
	return 0;
}
