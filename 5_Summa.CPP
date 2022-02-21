#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void main() {
	int m;		  //mode number
	float s;	  //summa
	int n,k;      //peremennaea summi
	
	//
	do {
		clrscr();
		//vivod menu
		textmode(C80);
		textcolor(YELLOW);
		cprintf("Summa Calculation\n\r\n\r");
		textcolor(GREEN);
		cprintf("Indicate mode of work:\n\r\n\r");
		cprintf("    1.Cicle while\n\r");
		cprintf("    2.Cicle do-while\n\r");
		cprintf("    3.Cicle for\n\r");
		cprintf("    4.Exit\n\r\n\r");
		//  Proverca corectnosti
		do {
			printf("Enter mode value:\n");
			scanf("%d",&m);
			textcolor(WHITE);
			if((m>=1)&&(m<=4)) break;
			clrscr();

			textcolor(RED);
			cprintf("Error value\n\r");
		}while(1);
		//  perecesleniea vibora moda
		switch(m) {
			case 1:
					while(1){
						printf("Enter value k:\n");
						scanf("%d",&k);
						if((k>=1)&&(k<=50)) break;
						textcolor(RED);
						cprintf("Error value\n\r");
					}
					n=0; s=0;
					while(++n<=k)
							s+=n/(n+1.0);
					textcolor(YELLOW);
					cprintf("Summa=%f\n\r",s);
					break;
			case 2:
					do {
						printf("Enter value k:\n");
						scanf("%d",&k);
						if((k>=1)&&(k<=50)) break;
						textcolor(RED);
						cprintf("Error value\n\r");
					}while(1);
					n=1; s=0;
					do
						s+=n/(n+1.0);
					while(++n<=k);
					textcolor(YELLOW);
					cprintf("Summa=%f\n\r",s);
					break;
			case 3:
					for(;;){
						printf("Enter value k:\n");
						scanf("%d",&k);
						if((k>=1)&&(k<=50)) break;
						textcolor(RED);
						cprintf("Error value\n\r");
					}
					s=0;
					for(n=1;n<=k;n++)
							s+=n/(n+1.0);
					textcolor(YELLOW);
					cprintf("Summa=%f\n\r",s); break;
			case 4:
					exit(0);
		}
		textcolor(WHITE);
		cprintf("Press any key...\n\r");
		getch();
	}while(1);
}