#include<stdio.h>

void printStar(int n){
	int i;
	for(i=0; i<n; i++){
		printf("%c", '*');
	}
}

int main(){
	
	printStar(10);
	return 0;
}
