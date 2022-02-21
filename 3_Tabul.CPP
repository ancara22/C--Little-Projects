#include <stdio.h>
#include <conio.h>

void main()   {
	//obieavleaem peremennie
	float x,y;
	int k;
	//obrabotca
	clrscr();
	x=1;
	do{
		y=0;k=0;
		//sumirovanie po k
		do{
			++k;
			y=y+x/(x+k);
			}while(k<10);

		printf("x=%5.2f    y=%5.3f\n",x,y);
		x+=0.2;
		}while(x<=5);
		//zavershenie
		printf("Press any key...");
		getch();
		}

