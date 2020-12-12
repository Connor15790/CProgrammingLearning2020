#include<stdio.h>

int main(){

	int i, number, sum = 0;
	
	for (i = 1; i<=10; i++){
		printf("Enter the number %d : ", i);
		scanf("%d", &number);
		
		if (number<0){
			break;
		}
		sum += number;
	}
	
	printf("Sum = %d", sum);
}
