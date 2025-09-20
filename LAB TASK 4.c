#include<stdio.h>
int main(){
	int amount;
	int withdrawallimit=500;
	printf("enter your amount: \n");
	scanf("%d",&amount);
	if (amount <= withdrawallimit && amount %20 ==0){
		printf("withdrawal approved \n");
	}
	else {
		printf("withdrawal denied \n");
	}
	return 0;
}
