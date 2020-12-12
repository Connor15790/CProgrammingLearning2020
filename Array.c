#include<stdio.h>

int main(){
	
	int r, c;
	
	int arr [3][4] = {
						{3, 5, 1, 9}
						{10, 15, 3, 0}
						{1, 11, 31, 9}
	};
	
	for (r=0; r<3; r++) {
		for (c=0; c<4; c++) {
			printf("%d", arr[r][c]);
		}
		printf("\n");
	}
}
