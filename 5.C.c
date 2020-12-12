#include<stdio.h>

int main(){
	
	int a, b, c;
	char o;
	
	printf("Enter the first number, operator and second number : ");
	scanf("%d%c%d", &a, &o, &b);
	
	switch (o) {
		case '+':
			c = a + b;
			printf("Addition of a and b is : %d", c);
			break;
			
		case '-':
			c = a - b;
			printf("Subtraction of a and b is : %d", c);
			break;
			
		case '*':
			c = a * b;
			printf("Multiplication of a and b is : %d", c);
			break;
			
		case '/':
			c = a / b;
			printf("Division of a and b is : %d", c);
			break;
			
		case '%':
			c = a % b;
			printf("Modulus of a and b is : %d", c);
			break;	
			
		default :
			printf("Enter a valid operator.");
		
	}
	
}
