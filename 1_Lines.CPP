#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>

void main() {
			//Initiatiea graphiki
			 int gdriver=DETECT,gmode,errorcode;
			 initgraph(&gdriver,&gmode,"c:\\borlandC\\BGI");
			  errorcode=graphresult();
			  if(errorcode!=grOk){
					 printf("GRAPHICS ERROR!!!\n");
					 printf("pree any key to exit");
						   getch();
						   exit(1); }
//Obieavleniea
	int xmax, ymax,xc,yc;
	char c;
	xmax=getmaxx();
	ymax=getmaxy();
	xc=getmaxx()/2;
	yc=getmaxy()/2;

 do{
 	setcolor(YELLOW);
	line(0,ymax,0,0);
	line(0,0,xmax,0);
	line(xmax,0,xmax,ymax);
	line(xmax,ymax,0,ymax);
	line(0,0,xmax/4,ymax);
	line(xmax/4,ymax,xc,0);
	line(xc,0,xc*1.5,ymax);
	line(xc*1.5,ymax,xmax,0);
	circle(xc/2,yc/2,50);
	circle(xc,yc*1.5,50);
	circle(xc*1.5,yc/2,50);

	setfillstyle(1,GREEN);
	floodfill(xc/4,yc*1.5,YELLOW);

	setfillstyle(1,RED);
	floodfill(xc/2,yc,YELLOW);

	setfillstyle(1,BLUE);
	floodfill(xc,yc,YELLOW);

	setfillstyle(1,MAGENTA);
	floodfill(xc*1.5,yc,YELLOW);

	setfillstyle(1,BROWN);
	floodfill(xc*1.7,yc*1.7,YELLOW);







	if((c=='e')||(c=='E'))break;
	c=getch();

	}while(1);

}



