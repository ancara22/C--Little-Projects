#include <stdio.h>
#include <conio.h>

void main() {
	float x,y;
	int k,n;
	clrscr();
	for(x=1,n=0;x<=20;x+=0.2) {
		for(y=0.0,k=1;k<=10;k++)
			y+=x/(x+k);
			printf("%20.2f    %20.2f\n",x,y);
			if((++n%15)==0) {
				printf("Press any key...\n");
				getch();
				n=0;
				clrscr();
			}
	}
	getch();
}