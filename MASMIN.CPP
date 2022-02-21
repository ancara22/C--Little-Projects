#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main() {
	int v[10],i; 		    //masiv,index
	int min,max;
	int indmin,indmax;
	int r;      		    //peremennaea random
	int t;

	randomize(); 		 	//zadaem znaceniea v[i]
	for(i=0;i<10;i++) {
		r=random(100);
		v[i]=random(2)?r:-r;
	}
	indmin=indmax=0;
	min=max=v[0];
	for(i=1;i<10;i++) {
		if(v[i]>min) {min=v[i];indmin=i;}
		if(v[i]<max) {max=v[i];indmax=i;}
	}
	clrscr();
	textmode(C80);
	textcolor(RED);
	cprintf(" Massive v:\n\r");
	textcolor(WHITE);
	for(i=0;i<10;i++)
		cprintf("%5d",v[i]);
	printf("\n");
	textcolor(YELLOW);
	cprintf(" Results\n\r");
	textcolor(WHITE);
	cprintf("   Min nr= %d    Index nr= %d\n\r", min, indmin);
	cprintf("   Max nr= %d    Index nr= %d\n\r", max, indmax);
	getch();

	t=v[indmin];
	v[indmin]=v[indmax];
	v[indmax]=t;
	for(i=0;i<10;i++)
		cprintf("%5d",v[i]);
		getch();
}