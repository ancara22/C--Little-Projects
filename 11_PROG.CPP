#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void main() {
	int st;          //student
	int ex;          //exames
	int m[15][6];
	int a[15];       //average score
	int i,j;
	int r,t;

	clrscr();
	textmode(C80);

	//Vvod kolvo studentov
	for(r=0;1;r++) {
		textcolor(YELLOW);
		cprintf(" Enter the number of students: ");
		scanf("%d",&st);
		if(r>=2) { r=0; clrscr();}
		if((st>=5)&&(st<=15)) break;
		textcolor(RED);
		cprintf(" Error! Incorrect value\n\r");
	}

	//Vvvod kolvo examenov
	for(r=0;1;r++) {
		textcolor(YELLOW);
		cprintf(" Enter the number of exams: ");
		scanf("%d",&ex);
		if(r>=2) { r=0; clrscr();}
		if((ex>=3)&&(ex<=6)) break;
		cprintf(" Error! Incorrect value\n\r");
	}


	// VVod otenok
	for(i=0;i<st;i++) {
		textcolor(GREEN);
		cprintf("  Student %d:\n\r",i+1);
		for(j=0;j<ex;j++) {
			for(;1;) {
				textcolor(WHITE);
				cprintf("   Examen %d: ",j+1);
				scanf("%d", &m[i][j]);
				if((m[i][j]>=4)&&(m[i][j]<=10)) break;
				textcolor(RED);
				cprintf("   Error! Incorrect value\n\r");
			}
		}
	}

	//rashiot srednei otenki
	for(i=0;i<st;i++) {
		a[i]=m[i][0];
		for(j=1;j<ex;j++) {
			 a[i]+=m[i][j];
		}
		a[i]=(a[i])/ex;
	}
	textcolor(YELLOW);
	cprintf("\n\nContinue?");
	getch();

	//vivod 1
	clrscr();
	textcolor(GREEN);
	cprintf("  Scorecard:");
	printf("\n");
	for(i=0;i<st;i++) {
		textcolor(WHITE);
		cprintf("\n\r");
		for(j=0;j<ex;j++)
			cprintf("%5d",m[i][j]);
		textcolor(YELLOW);
		cprintf("%8d\n\r",a[i]);
	}
	getch();

	//uporeadociti
	for(r=st;r>0;r--)
		for(i=0;i<st;i++)
			if(a[i]<a[i+1]) {
				t=a[i];a[i]=a[i+1];a[i+1]=t;
				for(j=0;j<ex;j++) {
					t=m[i][j];m[i][j]=m[i+1][j];m[i+1][j]=t;
				}
			}
	//vivod 2
	printf("\n\n");
	textcolor(GREEN);
	cprintf("  Scorecard:");
	printf("\n ");
	for(i=0;i<st;i++) {
		textcolor(WHITE);
		cprintf("\n\r");
		for(j=0;j<ex;j++)
			cprintf("%5d",m[i][j]);
		textcolor(YELLOW);
		cprintf("%8d\n\r",a[i]);
	}

	getch();


}