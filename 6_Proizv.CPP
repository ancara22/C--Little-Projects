#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void main() {
	int mode,n,k;	  //mode,stepeni,peremennaea stepeni
	float p,m;	  //proizvedenie,number
	char ch;
	do {
		clrscr();
		//vivod menu
		textmode(C80);
		textcolor(YELLOW);
		cprintf("Calculation m in grade n.\n\r\n\r");
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
					while(1){
						textcolor(WHITE);
						cprintf("Enter value m:\n\r");
						scanf("%f",&m);
						if((m>=-5)&&(m<=5)) break;
						textcolor(RED);
						cprintf("Incorect m value\n\r");
					}
					while(1){
						textcolor(WHITE);
						cprintf("Enter value n:\n\r");
						scanf("%d",&n);
						if((n>=-5)&&(n<=5)) break;
						textcolor(RED);
						cprintf("Incorect n value\n\r");
					}
					p=1;k=n;
					if((m>0)&(m!=0)){
						if(n>0)
							while(--k>=0)
								p=p*m;
						if(n<0)
							while(++k<=0)
								p=p*(1/m);
							if(n==0)
							p=p*1;
					}
					if((m<0)&(m!=0)){
						if(n>0)
							while(--k>=0)
								p=p*(1/m);
						if(n<0)
							while(++k<=0)
								p=p*(1/(1/m));
					   /*	if(n==0)
							p=1;  */
					}
					   /*	if((m==0)&(n!=0))
							p=0;
							if((m==0)&(n==0))
							p=1; */
					textcolor(YELLOW);
					cprintf("%f in grade %d egal to %f\n\r",m,n,p);
					cprintf("Press any key...\n\r");
					ch=getch();
					if((ch!='y')&&(ch!='Y')) break; break;


			case 2:
					do {
						textcolor(WHITE);
						cprintf("Enter value m:\n\r");
						scanf("%f",&m);
						if((m>=-5)&&(m<=5)) break;
						textcolor(RED);
						cprintf("Incorect m value\n\r");
					}while(1);
					do {
						textcolor(WHITE);
						cprintf("Enter value n:\n\r");
						scanf("%d",&n);
						if((n>=-5)&&(n<=5)) break;
						textcolor(RED);
						cprintf("Incorect n value\n\r");
					}while(1);
						p=1; k=n;
					if((m>0)&(m!=0)){
						if(n>0)
							do{
								p=p*m;
							}while(--k>0);
						if(n<0)
							do{
								p=p*(1/m);
							}while(++k<0);
						if(n==0)
							p=1;
					}
					if((m<0)&(m!=0)){
						if(n>0)
							do{
								p=p*(1/m);
							}while(--k>0);
						if(n<0)
							do{
								p=p*(1/(1/m));
							}while(++k<0);
					}
					textcolor(YELLOW);
					cprintf("%f in grade %d egal to %f\n\r",m,n,p);
					cprintf("Press any key...\n\r");
					ch=getch();
					if((ch!='y')&&(ch!='Y')) break; break;
			case 3:
					for(;;){
						textcolor(WHITE);
						cprintf("Enter value m:\n\r");
						scanf("%f",&m);
						if((m>=-5)&&(m<=5)) break;
						textcolor(RED);
						cprintf("Incorect m value\n\r");
					}
					for(;;){
						textcolor(WHITE);
						cprintf("Enter value n:\n\r");
						scanf("%d",&n);
						if((n>=-5)&&(n<=5)) break;
						textcolor(RED);
						cprintf("Incorect n value\n\r");
					}
					p=1;
					if((m>0)&(m!=0)){
						if(n>=0)
							for(k=n;k>0;k--)
								p=p*m;
						if(n<0)
							for(k=n;k<0;k++)
								p=p*(1/m);
						if(n==0)
							p=1;
					}
					if((m<0)&(m!=0)){
						if(n>0)
							for(k=n;k>0;k--)
								p=p*(1/m);
						if(n<0)
							for(k=n;k<0;k++)
								p=p*(1/(1/m));
						if(n==0)
							p=1;
					}
				  /*	if((m==0)&(n!=0))
						p=0;
					if((m==0)&(n==0))
						p=1; */
					textcolor(YELLOW);
					cprintf("%f in grade %d egal to %f\n\r",m,n,p);
					cprintf("Press any key...\n\r");
					ch=getch();
					if((ch!='y')&&(ch!='Y')) break; break;
			case 4:
					exit(0);
		}
		textcolor(WHITE);
		cprintf("Press repeat...\n\r");
		getch();
	}while(1);
}