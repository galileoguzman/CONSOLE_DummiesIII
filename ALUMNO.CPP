/*cree un programa usando registros y arreglos para capturar
hasta 50 alumnos con sus 7 materias para registro de calificaciones.
menu
1.- registro de datos(abierto)
2.- registro de calificaciones(abierto)
3.- mostrar alumno y sus calificaciones(matricula)
4.- salir*/

#include<conio.h>
#include<iostream.h>

struct fecha
       {
       int dia;
       int mes;
       int anio;
       };

struct calificacion
       {
       char materia[30];
       float calif[3];
       };

struct alumno
       {
       char matricula[10];
       char nombre[30];
       char apellidos[50];
       fecha fecha_nac;
       fecha fecha_reg;
       char direccion[40];
       char telefono[20];
       calificacion califs[7];
       };
       alumno estudiante[50];

void main()
{
clrscr();
int opc,r;
do{
cout<<"REGISTRANDO ALUMNO\n";
cout<<"1.-REGISTRO DE DATOS(ABIERTO)\n2.-REGISTRO DE CALIFICACIONES(ABIERTO)\n3.-MOSTRAR ALUMNO Y SUS CALIFICACIONES(MATRICULA)\n";
cin>>opc;
switch(opc)
	{
	case 1:
	clrscr();
	do
	{
	cout<<"has elegido registrar un alumno\n";
	cout<<"dame la matricula del alumno\n";
	cin>>estudiante[1].matricula;
	cout<<"dame el nombre del alumno\n";
	cin>>estudiante[1].nombre;
	cout<<"dame los apellidos del alumno\n";
	cin>>estudiante[1].apellidos;
	cout<<"dame la fecha de nacimiento\n";
	cout<<"dame el dia\n";
	cin>>estudiante[1].fecha_nac.dia;
	cout<<"dame el mes\n";
	cin>>estudiante[1].fecha_nac.mes;
	cout<<"dame el anio\n";
	cin>>estudiante[1].fecha_nac.anio;
	cout<<"dame la fecha de registro\n";
	cin>>estudiante[1].fecha_reg.dia;
	cout<<"dame el mes\n";
	cin>>estudiante[1].fecha_reg.mes;
	cout<<"dame el anio\n";
	cin>>estudiante[1].fecha_reg.anio;
	cout<<"dame la direccion\n";
	cin>>estudiante[1].direccion;
	cout<<"dame el telefono\n";
	cin>>estudiante[1].telefono;
	cout<<"deseas agregar a otro alumno s/n \n";
	cin>>r;
	}
	while(r=='s');
	break;

	case 2:
	clrscr();
	do
	{
	cout<<"dame el nombre de la materia\n";
	cin>>estudiante[1].califs[1].materia;
	cout<<"dame la calificacion\n";
	cin>>estudiante[1].califs[1].calif[1];
	cout<<"deseas agregar otra calificacion s/n \n";
	cin>>r;
	}
	while(r=='s');
	break;

	case 3:


	break;
	}
}
while(opc!=3);
getch();
}
