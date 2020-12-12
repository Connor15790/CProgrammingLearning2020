#include<stdio.h>

int sum(int a, int b){
	return a+b;
}

int main(){
	
	int a, b, c;
	
	a = 3;
	b = 4;
	c = sum(a, b);
	printf("The sum is %d", c);
	return 0;
}
