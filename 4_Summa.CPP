#include <stdio.h>
#include <conio.h>

void main() {
	//obieavlenie peremennih
	float s;
	int k,n;
	clrscr();
	do {
		printf("Enter value k:");
		scanf("%d",&k);
		if((k>=2)&&(k<=50)) break;
		printf("Error:\n Repeat enter\n");
	}while(1);
	s=0;n=0;
	do {
		++n;
		s=s+n/(n+1.0);
	}while(n<=k);
	printf(" s=%f\n",s);
	getch();
   }
