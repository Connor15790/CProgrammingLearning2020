#include<stdio.h>

int square(int n){
	return n*n;
}

int main(){
	
	int a, b;
	
	printf("Enter the number : ");
	scanf("%d", &a);
	
	b = square(a);
	printf("The square of the number is %d", b);
}
