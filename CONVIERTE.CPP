#include<conio.h>
#include<stdio.h>
#include<iostream.h>

int convierte(int num,int base1,int base2)
	     {
	     int alg,mult=1,num2=0;
	     while(num>0)
		  {
		  alg=num%base1;
		  num /=base1;
		  num2+=(alg*mult);
		  mult*=base2;
		  }
	     return num2;
	     }


void main()
{
clrscr();
int num,opc;
cout<<"menu para conversiones\n";
cout<<"1.-decimal binario\n2.-binario decimal\n3.-binario hexadecimal\n4.-hexadecimal binario\n";
cin>>opc;
cout<<"dame el numero a convertir\n";
scanf("%lx",&num);
switch(opc)
      {
      case 1:
	    cout<<"decimal------>binario\n";
	    cout<<"numero en binario es:\n";
	    cout<<convierte(num,2,10);
	    break;

      case 2:
	    cout<<"binario------>decimal\n";
	    cout<<"el numero en decimal es\n";
	    cout<<convierte(num,10,2);
	    break;

      case 3:
	    cout<<"binario------>hexadecimal\n";
	    cout<<"le numero en hexadecimal es:\n";
	    cout<<convierte(num,10,2);
	    break;
      case 4:
	    cout<<"hexadecimal-------->binario\n";
	    cout<<"el numero en binario es:\n";
	    printf("%lu",convierte(num,2,10));
	    break;
      }
getch();
}
