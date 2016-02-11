#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
clrscr();
int x,y,color;
char a=205,b=186,c=201,d=200,e=188,f=187,gal[20];
cout<<"Escoje un color\n";
cout<<"1.-azul\n2.-verde\n3.-azul agua\n4.-rojo\n5.-morado\n6.-naranja\n7.-blanco\n8.-gris\n9.-azul cielo\n10.-verde fosforesente\n11.-verde\n12.-rojo bajo\n13.-rosa\n14.-amarillo\n";
cin>>color;
/*cout<<"dame un valor\n";
cin>>x;
cout<<"dame el otro valor\n";
cin>>y;*/
clrscr();
textcolor(color);
cprintf("%c",c);
for(x=2;x<80;x++)
   {
   for(y=1;y==1;y++)
      {
      textcolor(color);
      gotoxy(x,y);
      cprintf("%c",a);
      }
   }
for(x=1;x==1;x++)
   {
   for(y=2;y<24;y++)
      {
      gotoxy(x,y);
      cprintf("%c",b);
      }
   }
gotoxy(1,24);
cprintf("%c",d);
for(y=24;y==24;y++)
   {
   for(x=79;x>1;x--)
      {
      textcolor(color);
      gotoxy(x,y);
      cprintf("%c",a);
      }
   }
gotoxy(80,24);
cprintf("%c",e);
for(x=80;x==80;x++)
   {
   for(y=2;y<24;y++)
      {
      gotoxy(x,y);
      cprintf("%c",b);
      }
   }
gotoxy(80,1);
cprintf("%c",f);
gotoxy(10,10);
cout<<"hola, dime algo\n";
gotoxy(11,11);
cin>>gal;
getch();
}