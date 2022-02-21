#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
	int m[5][6],i,j;
	int v[5];
	int t,k;			//uporeadociti v
	int randvalue;
	clrscr();

	// Massiv random generation
	randomize();
	for(i=0;i<5;i++)
		for(j=0;j<6;j++) {
			randvalue=random(100)+1;
			m[i][j]=random(2)?randvalue:-randvalue;
	}
	//Vector calcull
	for(i=0;i<5;i++) {
		v[i]=m[i][0];
		for(j=1;j<6;j++)
			if(m[i][j]>v[i]) v[i]=m[i][j];
	}
	getch();
	printf("\n");
	printf(" Matrix and vector initial value:");
	for(i=0;i<5;i++) {
		printf("\n");
		for(j=0;j<6;j++) printf("%5d",m[i][j]);
		printf("\t%8d",v[i]);
	}
	printf("\n");
	//uporeadociti v
	for(k=4;k>0;k--)
		for(i=0;i<k;i++)
			if(v[i]<v[i+1]) {
				t=v[i];v[i]=v[i+1];v[i+1]=t;
				//obmen znacenii v stroke
				for(j=0;j<6;j++) {
					t=m[i][j];m[i][j]=m[i+1][j];m[i+1][j]=t;
				}
			}

	getch();
	//vivod  m and v
	printf("\n");
	printf(" Matrix and vector view after process:");
	for(i=0;i<5;i++) {
		printf("\n");
		for(j=0;j<6;j++) printf("%5d",m[i][j]);
		printf("\t%8d",v[i]);
	}
	printf("\n");
	getch();

}