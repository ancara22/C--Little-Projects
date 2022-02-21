#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
	int a[10],i; 		    //masiv,index
	int t;
	int n;
	int v;
	//
	clrscr();
	i=0;
	while(i<10) {
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
		i++;
	}
	//
	printf(" Massive a:\n");
	printf("\n");
	i=0;
	while(i<10) {printf("%5d",a[i]);i++;}
	printf("\n");
	getch();

	//
	n=9;
	while(n>0) {
		i=0;
		while(i<n) {
			if(a[i]>a[i+1]) {t=a[i];a[i]=a[i+1];a[i+1]=t;}
			i++;
		}
		n--;
	}
	v=0;
	i=0;
	while(i<10) {
		if(a[i]!=a[i+1]) v++;
		i++;
	}
	printf("v= %d\n",v);
	//
	i=0;
	while(i<10) {printf("%5d",a[i]);i++;}
	printf("\n");
	getch();
	//
	n=9;
	while(n>0) {
		i=0;
		while(i<n) {
			if(a[i]<a[i+1]) {t=a[i];a[i]=a[i+1];a[i+1]=t;}
			i++;
		}
		n--;
	}
	//
	i=0;
	while(i<10) {printf("%5d",a[i]);i++;}
	printf("\n");
	getch();
}