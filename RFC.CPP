#include <iostream.h>
#include <conio.h>
// RFC
void main()
{clrscr();
	char cap[10],cam[10],cno[10];
	int idia,imes,iano;
        cout<<"introduce tu apellido paterno: "; 
            cin>>cap;
	cout<<"introduce tu apellido materno: "; 
            cin>>cam;
	cout<<"introduce tu nombre: "; 
            cin>>cno;
	cout<<"introduce los dos digitos de tu dia de nacimiento: "; 
            cin>>idia;
        cout<<"introduce los dos digitos de tu mes de nacimiento: "; 
            cin>>imes;
	cout<<"introduce los digitos de tu año de nacimiento: "; 
            cin>>iano;
	cout<<"El RFC es:"<<cap[0]<<cap[1]<<cam[0]<<cno[0]<<iano<<imes<<idia;
	getch();
}
