#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
	int st,ex;       //student,exams
	char **name;     //family
	char *tn;        //temp. name
	int **m;		 //matritx otenoc
	int *tm;         //temp. m
	float *av;       //average score
	float *tav;      //t average
	int i,j;		 //index

	clrscr();
	textmode(C80);

						//Vvod kolvo studentov
	printf(" Enter the number of students: ");
	scanf("%d",&st);

						//Vvvod kolvo examenov
	printf(" Enter the number of exams: ");
	scanf("%d",&ex);

						//zapros pamti familii
	name=new char * [st];
	for(i=0;i<st;i++)
		name[i]= new char[15];
	tn=new char [st];

						//zahvat p.dlea otenok
	m=new int * [st];
	for(i=0;i<st;i++)
		m[i]= new int[ex];
	tm=new int [st];

						//zahvat p. average score
	av=new float [st];
	tav=new float [st];

						//vvod otenok
	for(i=0;i<st;i++) {
		printf(" Enter date of %d stufdent: \n",i+1);
		printf(" Lastname: ");
		getchar();
		gets(name[i]);
		for(j=0;j<ex;j++) {
			for(;1;) {
				printf(" Examen %d: ",j+1);
				scanf("%d", &m[i][j]);
				if((m[i][j]>4)&&(m[i][j]<=10)) break;
				printf(" Eror! Incorect value\n");
			}
		}
		clrscr();
	}

						//rashiot srednei otenki
	for(i=0;i<st;i++) {
		av[i]=m[i][0];
		for(j=1;j<ex;j++) {
			av[i]+=m[i][j];
		}
		av[i]=(av[i])/ex;
	}
	printf("\n Continue?");
	getch();
	clrscr();

						//Vivod 1
	textcolor(YELLOW);
	cprintf(" Group PR-1924\n\r Number of students - %d, Number of exams - %d.\n\r",st,ex);
	cprintf("\n\r Scorecard:\n\n\r");
	for(i=0;i<st;i++) {
		textcolor(GREEN);
		cprintf("   %-15s",name[i]);
		for(j=0;j<ex;j++) {
			printf("%5d",m[i][j]);
		}
		textcolor(BLUE);
		cprintf("     %5.2f\n\r",av[i]);
	}
	getch();

						//sortirovka
	for(i=0;i<st;i++) {
		if(av[i]<av[i+1]) {
			tav[i]=av[i];av[i]=av[i+1];av[i+1]=tav[i];
			tn=name[i];name[i]=name[i+1];name[i+1]=tn;
			tm=m[i];m[i]=m[i+1];m[i+1]=tm;
		}
	}

						//vivod 2
	textcolor(YELLOW);
	cprintf("\n\r Scorecard:\n\n\r");
	for(i=0;i<st;i++) {
		textcolor(GREEN);
		cprintf("   %-15s",name[i]);
		for(j=0;j<ex;j++) {
			printf("%5d",m[i][j]);
		}
		textcolor(BLUE);
		cprintf("     %5.2f\n\r",av[i]);
	}

						//osvoboditi pameti
	for(i=0;i<st;i++) delete [] name[i];
	delete [] name;
	delete [] tn;

	for(i=0;i<st;i++) delete [] m[i];
	delete [] m;
	delete [] tm;

	delete [] av;
	delete [] tav;

	textcolor(RED);
	cprintf("\n\r To exit press any key!");
	getch();

}