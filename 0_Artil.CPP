#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
	//Obiavlenie peremennih
	float s, sH, sV;
	float t, d, h;
	float alpha;

	//obrabotka
	clrscr();
	printf("Enter initial speed:\n");
	scanf("%f", &s);
	printf("Enter angle alpha:\n");
	scanf("%f", &alpha);

	//perevod ugla v radiani
	alpha=3.14/180*alpha;
	sH=s*cos(alpha);
	sV=s*sin(alpha);

	//rashiot
	t=0.01;

	do{
		d=sH*t;
		h=sV*t-4.9*t*t;
		printf("%5.2f  %8.3f  %8.3f\n", t, d, h);
		t+=0.8;

	}while(h>0);
	//finish
	getch();
 }