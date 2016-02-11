#include<conio.h>
#include<stdio.h>
#include<iostream.h>

char nombres[30][100];
char calificaciones[3][100];

void main()
{
clrscr();
int opc,col,fil,n;
char r;
cout<<"1.- Alta de calificaciones\n2.- Mostrar alumnos y sus calificaciones\n3.- Obtener el promedio de cada alumno y sus parciales\n4.- Mostrara los alumnos con una calificacion determinada\n";
cin>>opc;
switch(opc)
      {
      case 1:
	    do
	    {
	    cout<<"Alta de calificaciones\n";
	    cout<<"calificaciones de cuantos alumnos quieres ingresar\n";
	    cin>>n;
	    for(fil=0;fil==(n-1);fil++)
	       {
		cout<<"dame el nombre del alumno\n";
		cin>>nombres[fil];
		for(col=0;col<3;col++)
		  {
		  cout<<"dame una calificacion\n";
		  cin>>calificaciones[fil][col];
		  }
	       }
	    i++;
	    cout<<"deseas ingresar a alguien mas s/n \n";
	    cin>>r;
	    }
	    while(r=='s');
	    break;
     /* case 2:
	    cout<<"mostrar alumnos y sus calificaciones\n";
	    cout<< */



      }

getch();
}

