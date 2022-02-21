#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
	int b[10],i;  //masiv,index
	int p,sp;     //kolvo positiv,suma positiv
	int n,sn;     //kolvo negativ,suma negtiv
	int z;        //kolvo 0
	int r;        //peremennaea random

	randomize();  	//zadaem znaceniea b[i]
	for(i=0;i<10;i++) {
		r=random(100)+1;
		b[i]=random(2)?r:-r;
	}
	p=sp=n=sn=z=0;	//vicisleam
	for(i=0;i<10;i++) {
					//kolvo i suma positiv
		if(b[i]>0) {
			p++;
			sp+=b[i];
			continue;
		}
					//kolvo i suma negativ
		if(b[i]<0) {
			n++;
			sn+=b[i];
			continue;
		}
		z++;
	}
					//vivod
	clrscr();
	printf("Array b:\n");
	printf("b[i]:");
	for(i=0;i<10;i++)
		printf("%5d",b[i]);
	printf("\n");
	printf("   p= %d  sp= %d\n",p,sp);
	printf("   n= %d  sn= %d\n",n,sn);
	printf("   z= %d",z);
	getch();
}