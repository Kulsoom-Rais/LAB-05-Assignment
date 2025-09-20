#include<stdio.h>
int main (){
	char color;
	printf("enter the color from the list below: \n 1.Red(R)\n 2.Yellow(Y)\n 3.Green(G) \n");
	scanf("%c", &color);
	if (color=='R'){
		printf("Stop \n");
	}
	else if (color=='Y'){
		printf("Caution \n");
	}
	else if (color=='G'){
		printf("Go \n");
	}
	else{
		printf("incorrect color entered");
	}
	return 0;
}
