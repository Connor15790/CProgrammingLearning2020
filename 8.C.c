#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	struct book{
		int ID;
		char Name[20];
		char Publisher_Name[30];
		int year;
	};
		struct book book1 = {1233, "Physics", "Oxford", 2014};
		struct book book2 = {1563, "Chemistry", "Cambridge", 2020};
		
		//using strcpy
		struct book book3;
		book3.ID = 1340;
		strcpy(book3.Name, "Assamese");
		strcpy(book3.Publisher_Name, "Hiren Gohain");
		book3.year = 2019;
		
		printf("Book1 details\n\n");
		printf("Book1 ID : %d\n", book1.ID);
		printf("Book1 Name : %s\n", book1.Name);
		printf("Publisher Name : %s\n", book1.Publisher_Name);
		printf("Book1 Year : %d\n\n", book1.year);
		
		printf("Book2 ID : %d\n", book2.ID);
		printf("Book2 Name : %s\n", book2.Name);
		printf("Publisher Name : %s\n", book2.Publisher_Name);
		printf("Book2 Year : %d\n\n", book2.year);
		
		printf("Book3 ID : %d\n", book3.ID);
		printf("Book3 Name : %s\n", book3.Name);
		printf("Publisher Name : %s\n", book3.Publisher_Name);
		printf("Book3 Year : %d", book3.year);
		
	
}
