#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<iostream.h>

FILE *alias;

struct productividad
     {
     float sem1,sem2,sem3,sem4;
     float mes1,mes2,mes3,mes4,mes5,mes6,mes7,mes8,mes9,mes10,mes11,mes12;
     float anio;
     float bimestre;
     float trimestre;
     };

struct medico
     {
     char nombre[50];
     char apellidos[60];
     char ced[10];
     char turno[15];
     char tipo[20];
     int dias;
     int consultas;
     float sem1,sem2,sem3,sem4;
     float mes1,mes2,mes3,mes4,mes5,mes6,mes7,mes8,mes9,mes10,mes11,mes12;
     float anio;
     struct productividad productividad;
     };
    medico gral[20],odonto[20], psico[10];
    struct medico *respaldo,*posini2;

// fwrite(&medico,sizeof(medico),50,alias);




void main()
{
clrscr();
char tip,r,tip2;
int opc,c1;
medico *doc;
float s1,mes;
int  i,j,k,x,Pos,Fila=0;
//doc=gral; //no se puede convertir medico amedico ? preguntar sobre la asignacion de punteros

respaldo=gral;
posini2=respaldo;

//caracter
    textcolor(100);
    printf("BIENVENIDO\nPROGRAMA HECHO POR:\nAPARICIO BAUTISTA FELIX FERNANDO\nGUZMAN IBA¥EZ GALILEO\nPOBLETE REYES MARCO ANTONIO");
    getch();
    clrscr();
	for(x=1;x<=8;x++)
	   {
	    for(k=1;k<=9;k++)
	      {
	       for(i=1;i<5;i++)
		   {
		    textcolor(12);
		    gotoxy(i+Pos,i+Fila);cprintf("a");
		    delay(15);
		    }
	       for(i=5,j=5;i>=1;i--,j++)
		    {
		     textcolor(10);
		     gotoxy(j+Pos,i+Fila);cprintf("a");
		     delay(15);
		    }
		    Pos+=8;
	      }
	      Fila+=6;
	      Pos=0;
	   }

 clrscr();


do
{

 textcolor(156);
 cprintf("\t\tESTE PROGRAMA ES PARA CALCULAR\n\tLA PRODUCTIVIDAD EN EL CENTRO DE SALUD\t LA JOYA OAX.\n");
 cout<<"elije una opcion\n"<<"\n\n\t1.-INGRESAR DATOS DE UN MEDICO\n\t2.-VER DATOS DE UN MEDICO\n\t3.-PRODUCTIVIDAD\n\t4.-SALIR\n";
 cin>>opc;
 switch(opc)
       {
       case 1:
	     clrscr();
	      cout<<"HAS ELEGIDO LA OPCION DE INGRESAR LOS DATOS DE UN DOCTOR NUEVO\n";
	     do
	     {
			cout<<"dame el nombre del medico\n";
			cin>>respaldo->nombre;
			cout<<"dame los apellidos del medico\n";
			cin>>respaldo->apellidos;
			cout<<"dame la cedula profecional del medico\n";
			cin>>respaldo->ced;
			cout<<"dame el turno del medico\n";
			cin>>respaldo->turno;
			cout<<"dame el tipo de Dr.\ngeneral\npsicologo\nodontologo\n";
			cin>>respaldo->tipo;
			cout<<"dame los dias laborados en este mes por el medico\n";
			cin>>respaldo->dias;
			cout<<"deseas agregar a otro medico s/n\n";
			cin>>r;
			respaldo++;
			clrscr();
			}
		      while(r=='s');
	      break;

       case 2:
	     clrscr();
	     cout<<"mostrar datos de algun doctor\n";
	     respaldo=posini2;

		     do
		     { textcolor(10);
		       cout<<"\nnombre del doctor: "<<respaldo->nombre;
		       cout<<"\napellidos del medico: "<<respaldo->apellidos;
		       cout<<"\ncedula profecional: "<<respaldo->ced;
		       cout<<"\nturno: "<<respaldo->turno;
		       cout<<"\nmedico: "<<respaldo->tipo;
		       cout<<"\ndias trabajados: "<<respaldo->dias;
		       cout<<"\nquieres ver los datos del siguiente medico? s/n";
		       cin>>r;
		       respaldo++;//podria ser gral++ ?
		       clrscr();
		     }
		     while(r=='s');
	   break;


       case 3:
	     do
	     {
	     getch();
	     clrscr();
	     respaldo=posini2;
	     cout<<"MENU PRODUCTIVIDAD DEl MEDICO\n";
	     cout<<"1.-semanas\n2.-mes\n3.-anio\n4.-total\n5.-salir";
	     cin>>opc;
	     switch(opc)
	     {
	     case 1:
		   respaldo=posini2;
		   do
		    {
		    cout<<"\nDATOS DEL MEDICO";
		    cout<<"\n "<<respaldo->tipo<<" "<<respaldo->nombre<<" "<<respaldo->apellidos;
		    cout<<"\nsemana 1: "<<respaldo->sem1;
		    cout<<"\nsemana 2: "<<respaldo->sem2;
		    cout<<"\nsemana 3: "<<respaldo->sem3;
		    cout<<"\nsemana 4: "<<respaldo->sem4;
		    cout<<"\ndame las consultas realizadas en la semana: ";
		    cin>>c1;
		   //problemas con el if no manda a la formula
		    if(respaldo->tipo=="general")
		       {
		// s1=(c1*0.01)*100;
			if(respaldo->sem1==NULL)
			   {
			    respaldo->sem1=(c1*0.01)*100;
			    cout<<"\nla productividad de la primera semana es: "<<respaldo->sem1;
			   }
			else if(respaldo->sem2==NULL)
			   {
			    respaldo->sem2=(c1*0.01)*100;
			    cout<<"\nla productividad de la segunda semana es: "<<respaldo->sem2;
			   }
			else if(respaldo->sem3==NULL)
			   {
			    respaldo->sem3=(c1*0.01)*100;
			    cout<<"\nla productividad de la tercera semana es: "<<respaldo->sem3;
			   }
			else if(respaldo->sem4==NULL)
			   {
			    respaldo->sem4=(c1*0.01)*100;
			    cout<<"\nla produtividad de la cuarta semana es: "<<respaldo->sem4;
			   }
		       }
		    if(respaldo->tipo=="psicologo")
			{
			 if(respaldo->sem1==NULL)
			    {
			     respaldo->sem1=(c1/0.60);
			     cout<<"\nla productividad de la primera semana es: "<<respaldo->sem1;
			    }
			 else if(respaldo->sem2==NULL)
			    {
			     respaldo->sem2=(c1/0.60);
			     cout<<"\nla productividad de la segunda semana es: "<<respaldo->sem2;
			    }
			 else if(respaldo->sem3==NULL)
			    {
			     respaldo->sem3=(c1/0.60);
			     cout<<"\nla productividad de la tercera semana es: "<<respaldo->sem3;
			    }
			 else if(respaldo->sem4==NULL)
			    {
			     respaldo->sem4=(c1/0.60);
			     cout<<"\nla produtividad de la cuarta semana es: "<<respaldo->sem4;
			    }
			}
		     else if(respaldo->tipo=="odontologo")
			{

			 if(respaldo->sem1==NULL)
			    {
			    respaldo->sem1=(c1/0.75)*100;
			    cout<<"\nla productividad de la primera semana es: "<<respaldo->sem1;
			    }
			 else if(respaldo->sem2==NULL)
			    {
			    respaldo->sem2=(c1/0.75)*100;
			    cout<<"\nla productividad de la segunda semana es: "<<respaldo->sem2;
			    }
			 else if(respaldo->sem3==NULL)
			    {
			    respaldo->sem3=(c1/0.75)*100;
			    cout<<"\nla productividad de la tercera semana es: "<<respaldo->sem3;
			    }
			 else if(respaldo->sem4==NULL)
			    {
			    respaldo->sem4=(c1/0.75)*100;
			    cout<<"\nla produtividad de la cuarta semana es: "<<respaldo->sem4;
			    }
			}


		    cout<<"\nquieres ver la productividad del siguiente medico? S/N ";
		    cin>>r;
		    respaldo++;
		   }
		   while(r=='s');
		   getch();
	     case 2:
		   respaldo=posini2;
		   clrscr();
		   cout<<"PRODUCTIVIDAD MES\n";
		   do
		   {
		   cout<<"\nDATOS DEL MEDICO";
		   cout<<"\n "<<respaldo->tipo<<" "<<respaldo->nombre<<" "<<respaldo->apellidos;
		   cout<<"\nSemana 1: "<<respaldo->sem1;
		   cout<<"\nSemana 2: "<<respaldo->sem2;
		   cout<<"\nSemana 3: "<<respaldo->sem3;
		   cout<<"\nSemana 4: "<<respaldo->sem4;
		   if(respaldo->mes1==NULL)
		      {
		       respaldo->mes1=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 1: "<<respaldo->mes1;
		      }
		   if(respaldo->mes2==NULL)
		      {
		       respaldo->mes2=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 2: "<<respaldo->mes2;
		      }
		   if(respaldo->mes3==NULL)
		      {
		       respaldo->mes3=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 3: "<<respaldo->mes3;
		      }
		   if(respaldo->mes4==NULL)
		      {
		       respaldo->mes4=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 4: "<<respaldo->mes4;
		      }
		   if(respaldo->mes5==NULL)
		      {
		       respaldo->mes5=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 5: "<<respaldo->mes5;
		      }
		   if(respaldo->mes6==NULL)
		      {
		       respaldo->mes6=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 6: "<<respaldo->mes6;
		      }
		   if(respaldo->mes7==NULL)
		      {
		       respaldo->mes7=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 7: "<<respaldo->mes7;
		      }
		   if(respaldo->mes8==NULL)
		      {
		       respaldo->mes8=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 8: "<<respaldo->mes8;
		      }
		   if(respaldo->mes9==NULL)
		      {
		       respaldo->mes9=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 9: "<<respaldo->mes9;
		      }
		   if(respaldo->mes10==NULL)
		      {
		       respaldo->mes10=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 10: "<<respaldo->mes10;
		      }
		   if(respaldo->mes11==NULL)
		      {
		       respaldo->mes11=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 11: "<<respaldo->mes11;
		      }
		   if(respaldo->mes12==NULL)
		      {
		       respaldo->mes12=respaldo->sem1+respaldo->sem2+respaldo->sem3+respaldo->sem4;
		       cout<<"\nProductividad total del mes 12: "<<respaldo->mes12;
		      }

		   }
		   while(r=='s');
		   getch();
	     case 3:
		   respaldo=posini2;
		   clrscr();
		   cout<<"\nProductividad del anio";
		   do
		   {
		   respaldo->anio=respaldo->mes1+respaldo->mes2+respaldo->mes3+respaldo->mes4+respaldo->mes5+respaldo->mes6+respaldo->mes7+respaldo->mes8+respaldo->mes9+respaldo->mes10+respaldo->mes11+respaldo->mes12;
		   cout<<respaldo->anio;
		   cout<<"\nquieres ver la productividad del siguiente medico?";
		   cin>>r;
		   }
		   while(r=='s');
	     }

	     }while(opc!=5);
	     break;

       }

}
while(opc!=4);
getch();
}