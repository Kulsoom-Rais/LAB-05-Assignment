#include<stdio.h>
int main(){
	int age;
	printf("enter your age: \n");
	scanf("%d",&age);
	if (age>=1 && age<13){
		printf("child \n");
	}
	else if (age>=13 && age<18){
		printf("teenage \n");
	}
	else if (age>=18 && age<60){
		printf("adult \n");
	}
	else if (age>=60){
		printf("senior");
	}
	else {
		printf("newborn");
	}
	return 0;
}
