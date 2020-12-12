#include<stdio.h>
#include<math.h>

double squareroot(int a){
	return sqrt(a);
}

int main(){
	
	int b;
	float s;
	
	printf("Enter the number : ");
	scanf("%d", &b);
	
	s = squareroot(b);
	
	printf("The square root of the number is %f", s);
}
