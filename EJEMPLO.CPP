#include <stdio.h>
#include <conio.h>

char ci[50];
char cf[50];
char abc[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' ,'j' ,'k' ,'l' ,'m' ,'n' ,'o' ,'p' ,'q' ,'r' ,'s' ,'t' ,'u' ,'v' ,'w' ,'x' ,'y' ,'z'};

int n=0, x=0;

int buscar(char letra) {

	for(int x=0; x<26; x++){
		if(letra == abc[x]) {
			return x;
		}
	}

}

void main() {

	clrscr();
	cprintf("Dato:\n");

	while(x<9) {
		kbhit();
		n =  buscar(getch());
		ci[x] = abc[n];
		cf[x] = abc[n+1];
		x++;
	}

	printf("%s", cf);
	printf("\n\n");
	printf("%s", ci);

	getch();

}

