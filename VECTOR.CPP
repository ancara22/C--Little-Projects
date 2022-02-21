#include <stdio.h>
#include <conio.h>

void main() {
	int b[10],i; //ishodnie dannie,ego index

	//vvod masiva
	clrscr();
	printf("Enter value of elements for aray b:\n");

  /*	for(i=0;i<10;i++) {
		printf("b[%d]= ",i);
		scanf("%d",&b[i]);
	} */

	//vicislenie
	for(i=0;i<10;i++) {
		b[i]=i*i;
	}
	//vivod
	printf("Array b:\n");
	for(i=0;i<10;i++)
		printf("%6d", b[i]);
	printf("\n");
	getch();
	clrscr();
}