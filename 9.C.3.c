#include<stdio.h>

int product(int a, int b, int c){
	return a*b*c;
}

int main(){
	
	int a, b, c, p;
	
	printf("Enter the first number : ");
	scanf("%d", &a);
	
	printf("Enter the second number : ");
	scanf("%d", &b);
	
	printf("Enter the third number : ");
	scanf("%d", &c);
	
	p = product(a, b, c);
	printf("The product of the three numbers is %d", p);
	return 0;
}
