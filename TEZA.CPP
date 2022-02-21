#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
	int b[10],i;  //masiv,index
	int s,k;      //summa,index summi
	int x;
	int r;        //peremennaea random

	randomize();		//generatiea masiva
	for(i=0;i<10;i++) {
		r=random(100);
		b[i]=random(2)?r:-r;
	}
	r=random(10);		//generatiea x
	x=random(2)?r:-r;

	clrscr();           //vivod masiva
	printf(" Array b:\n\n");
	for(i=0;i<10;i++)
		printf("%5d",b[i]);
	printf("\n\n");
	getch();
						//vivod x
	printf(" Value x: %d\n\n",x);
						//vicisleam
	s=0;
	for(i=0;i<10;i++)
		if(b[i]==x) {
			for(k=i+1;k<10;k++) s+=b[k];
			printf(" Value s: %d\n",s);
		}
	if(s==0) printf(" No element.\n\n");
	getch();
}




