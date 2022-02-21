#include <stdio.h>
#include <conio.h>
void main() {
	int r;
	float x;
	char symbol;
	clrscr();
	textmode(C80);
	textcolor(RED);
	gotoxy(10,3);
	cprintf("Vvedite dva cisla.\n\r");
	cprintf("Pervoe-teloe cislo,vtoroe-veshestvennoe.\n\r");
	cprintf("Cisla otdelite drug ot druga probelami:\n\r");
	scanf("%d %f",&r,&x);
	getchar();
	cprintf("Vvedite liuboi simvol:\n\r");
	scanf("%c", &symbol);
	cprintf("eto rezulitat slojeniea cisla:\n\r%d+%f=%f\n\r",r,x,r+x);
	cprintf("Eto vvedennii simvol:\n\r%c\n\rDo svidniea!\n\r", symbol);
	cprintf("Press any key...\n\r");
	getch();
 }