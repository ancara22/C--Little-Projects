#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(){
	int *v,i;   //ukazateli,
	int k;		//Kolvo elem.
	clrscr();
	puts(" Enter value of elements.\n");
	scanf("%d",&k);

	//zahvat pameti
	v=new int[k];

	if(v==NULL) {
		puts(" Net Pameti");
		puts(" Press any key.");
		getch();
		exit(1);
	}

	//obrabotka
	randomize();
	for(i=0;i<k;i++)
		v[i]=random(100);

	//Vivod
	puts(" Array initial.\n");
	for(i=0;i<k;i++)
		printf("%5d",v[i]);

   getch();










}