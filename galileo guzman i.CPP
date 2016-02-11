//MATERIA: SOFTWARE DE SISTEMAS
//CREADOR: GALILEO GUZMAN IBA¥EZ
//PROGRAMA: AREA DE UN TRIANGULO CON SEMIPERIMETROS
//FECHA: 30 DE AGOSTO DEL 2009

//**********************************//
//**********************************//
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>


void main()
{
clrscr();
int x,y;
char d='/';
//declaramos variables del perimetro y de resultado
int a,b,c;
float area,p,p2;

cout<<"\tPROGRAMA PARA CALCULAR EL AREA DE UN TRIANGULO EN BASE A SU PERIMETRO";

//pedimos lo valores de los lados o el perimetro y lo guardamos en sus respectivas
//variables
cout<<"\ndame el lado A";
cin>>a;
cout<<"dame el lado B";
cin>>b;
cout<<"dame el lado C";
cin>>c;

//empesamos la operacion con la formula del semiperimetro
p=(a+b+c)/2;//usamos P para guardar el perimetro
//utilizo una variable para P2 para solo mandarle un prototipo a
//la funcion SQRT
p2=p*((p-a)*(p-b)*(p-c));
area=sqrt(p2);//funcion SQRT para sacar la raiz de un num

//condicion para saber que triangulo es
//en base a sus lados usare IF

if(a==b && a==c)
  //equilatero
  {
  cout<<"\n\t\tTRIANGULO ISOCELES\n\n";
  cout<<"                         \n ";
  cout<<"		   *      \n";
  cout<<"		  * *     \n";
  cout<<"		 *   *    \n";
  cout<<"		*     *   \n";
  cout<<"	       *********   \n";
  }
else if(a!=b && a!=c && b!=c)
  //escaleno
  {
  cout<<"\n\t\tTRIANGULO ESCALENO\n\n\n";
  cout<<"		*              \n";
  cout<<"		**             \n";
  cout<<"		* *            \n";
  cout<<"		*  *           \n";
  cout<<"		*   *          \n";
  cout<<"		*    *         \n";
  cout<<"		*     *        \n";
  cout<<"		*      *       \n";
  cout<<"		*       *      \n";
  cout<<"		*        *     \n";
  cout<<"		*         *    \n";
  cout<<"		************   \n";
  }
else
  //isoceles   */
  {
  cout<<"\n\t\tTRIANGULO ISOCELES\n\n";
  cout<<"		    *       \n";
  cout<<"		   * *      \n";
  cout<<"		  *   *     \n";
  cout<<"		 *     *    \n";
  cout<<"		*********   \n";
  }
/*cout<<"\n\t\tTRIANGULO ISOCELES";
for(x=15;x<=5;x--)
   {
   for(y=12;y<=20;y++)
      {

      gotoxy(x,y);
      cout<<d;
      //cout<<" \";

      }
   }*/

cout<<"\n\n\tel AREA del triangulo es: "<<area;
getch();
}

