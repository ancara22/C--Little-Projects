#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main() {
	int a[10],i; 		    //masiv,index
	int t;
	int n;
	//
	clrscr();
	for(i=0;i<10;i++) {
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
	//
	printf(" Massive a:\n");
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
	getch();
	//
	for(n=9;n>0;n--) {
		for(i=0;i<n;i++) {
			if(a[i]>a[i+1]) {t=a[i];a[i]=a[i+1];a[i+1]=t;}
		}
	}
	//
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
	getch();
	//
	for(n=9;n>0;n--) {
		for(i=0;i<n;i++) {
			if(a[i]<a[i+1]) {t=a[i];a[i]=a[i+1];a[i+1]=t;}
		}
	}
	//
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
	getch();
}