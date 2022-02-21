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
								   exit(1);
									 }
		//Obieavleniea

		int xc, yc;
		char c;
		xc=getmaxx()/2;
		yc=getmaxy()/2;

  do{

		//risovca crug

		setcolor(RED);
		circle(xc,yc,225);

		//glaza i zraciki

		ellipse(xc/0.8,yc/1.7,0,360,65,35);
		ellipse(xc/1.3,yc/1.7,0,360,65,35);
		circle(xc/0.8,yc/1.7,25);
		circle(xc/1.3,yc/1.7,25);

		//nos
		circle(xc/1.07,yc/0.9,5);
		circle(xc/0.90,yc/0.9,5);

		//rot
		ellipse(xc,yc/0.7,0,360,75,30);

			 //Raskraska

			 setfillstyle(1,YELLOW);
			 floodfill(xc/0.7,yc/1.2,RED);
			 setfillstyle(1,MAGENTA);
			 floodfill(xc,yc/0.7,RED);
			 setfillstyle(1,BLUE);
			 floodfill(xc/0.8,yc/1.7,RED);
			 floodfill(xc/1.3,yc/1.7,RED);
			 setfillstyle(1,WHITE);
			 floodfill(xc/0.9,yc/1.7,RED);
			 floodfill(xc/1.5,yc/1.7,RED);
			 setfillstyle(1,YELLOW);
			 floodfill(xc,yc/0.6,RED);

			 //ushi
			// ellipse(xc/3.7,yc,55,310,20,50);
			// ellipse(xc*1.7,yc,0,360,20,50);

			//Yazik
			 setcolor(YELLOW);
			 ellipse(xc,yc/0.65,185,355,25,35);
			 c=getch();
				 if((c=='e')||(c=='E')) break;


			 setcolor(RED);
			 ellipse(xc,yc/0.65,180,0,25,35);
			 setfillstyle(1,MAGENTA);
			 floodfill(xc,yc*1.6,RED);



				//Perekraska glaz
				setfillstyle(1,YELLOW);
				floodfill(xc/0.8,yc/1.7,RED);
				floodfill(xc/1.3,yc/1.7,RED);
				floodfill(xc/0.9,yc/1.7,RED);
				floodfill(xc/1.5,yc/1.7,RED);
				setcolor(YELLOW);
				ellipse(xc/0.8,yc/1.7,0,180,65,35);
				ellipse(xc/1.3,yc/1.7,0,180,65,35);
				circle(xc/0.8,yc/1.7,25);
				circle(xc/1.3,yc/1.7,25);
				getch();
					   if((c=='e')||(c=='E'))break;
	   }while(1);

}



