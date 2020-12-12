#include<stdio.h>

int diff(int a, int b){
	return a-b;
}

int main(){
	
	int a, b, c;
	
	a = 5;
	b = 6;
	c = diff(a, b);
	printf("The differernce is %d", c);
	return 0;
}
