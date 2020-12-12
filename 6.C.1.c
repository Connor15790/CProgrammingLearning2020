#include<stdio.h>

int main(){
	int score [5] = {100, 50, 0, 10, 25};
	/*
	int score [] = {100, 50, 0, 10, 25};

	int score [5];
	
	score[0] = 100;
	score[1] = 50;
	score[2] = 0;
	score[3] = 10;
	score[4] = 25;
	*/
	int i;
	for (i; i<5; i++){
		printf("%d\n", score[i]);
	}
}
