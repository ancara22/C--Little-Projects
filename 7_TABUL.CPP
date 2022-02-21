#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void main() {
	int mode,n,k;	  //mode
	float x,y;
	do {
		clrscr();
		//vivod menu
		textmode(C80);
		textcolor(YELLOW);
		cprintf("Calculation m in grade n.\n\r\n");
		textcolor(GREEN);
		cprintf("Indicate mode of work:\n\r\n\r");
		cprintf("    1.Cicle while\n\r");
		cprintf("    2.Cicle do-while\n\r");
		cprintf("    3.Cicle for\n\r");
		cprintf("    4.Exit\n\r\n\r");
		//  Proverca corectnosti
		do {
			textcolor(WHITE);
			cprintf("Enter mode value:\n\r");
			scanf("%d",&mode);
			if((mode>=1)&&(mode<=4)) break;
			textcolor(RED);
			cprintf("Error value\n\r");
			textcolor(WHITE);
			cprintf("Press any key...\n\r");
			getch();
		}while(1);
		//  perecesleniea vibora moda
		switch(mode) {
			 case 1:
					x=1;
					n=0;
					while(x<=20){
						y=0.0;
						k=0;
						while(++k<=10){
							y+=x/(x+k);
						}
						printf("%20.2f    %20.2f\n",x,y);
						if((++n%15)==0) {
							printf("Press any key...\n");
							getch();
							n=0;
							clrscr();
						}
						 x+=0.2;
					 }

					printf("Press any key...\n");
					getch();
					break;

			case 2:
					x=1;
					n=0;
					do {
						y=0.0;
						k=1;
						do {
							y+=x/(x+k);
						}while(++k<=10);
							printf("%20.2f    %20.2f\n",x,y);
								if((++n%15)==0) {
								printf("Press any key...\n");
								getch();
								n=0;
								clrscr(); }
									x+=0.2;
					}while(x<=20);
					printf("Press any key...\n");
					getch();
					break;
			case 3:
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
						printf("Press any key...\n");
						getch();
						break;
			case 4:
					exit(0);
		}
	printf("Press repeat...\n");
	getch();
	}while(1);
}