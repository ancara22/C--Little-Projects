#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
	int m[5][4],i,j;
	int randvalue;
	clrscr();

	// Massiv vvod
	/*
	for(i=0;i<3;i++) {
		for(j=0;j<4;j++) {
			printf("m[%d][%d]= ",i,j);
			scanf("%d", &m[i][j]);
		}
	} */

	// Massiv random generation
	randomize();
	for(i=0;i<5;i++)
		for(j=0;j<4;j++) {
			randvalue=random(100)+1;
			m[i][j]=random(2)?randvalue:-randvalue;
		}
	printf("Generation Compleet\n");
	printf("Press any key to continue...\n");
	getch();
	//vivod
	printf("Matrix m:");
	for(i=0;i<5;i++) {
		printf("\n");
		for(j=0;j<4;j++)
			printf("%5d",m[i][j]);
	}
	printf("\n");
	getch();

}