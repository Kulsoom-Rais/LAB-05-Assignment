#include<stdio.h>
int main(){
	int rating;
	printf("rate the movie 'The Lion King' from scale 1 to 5 \n");
	scanf("%d",&rating);
	if (rating==1){
		printf("Terrible");
	}
	else if (rating==2){
		printf("Poor");
	}
	else if (rating==3){
		printf("Average");
	}
	else if (rating==4){
		printf("Good");
	}
	else if (rating==5) {
		printf("Excellent");
	}
	else {
		printf("incorrect rating entered");
	}
	return 0;
}
