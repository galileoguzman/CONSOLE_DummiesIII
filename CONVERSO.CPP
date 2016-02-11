#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char menu()
      {
      char c;

      printf("1 - Decimal -> Binario\n");
      printf("2 - Decimal -> Octal\n");
      printf("3 - Decimal -> Hexadecimal\n");
      printf("4 - Binario -> Decimal\n");
      printf("5 - Binario -> Octal\n");
      printf("6 - Binario -> Hexadecimal\n");
      printf("7 - Octal -> Decimal\n");
      printf("8 - Octal -> Binario\n");
      printf("9 - Octal -> Hexadecimal\n");
      printf("A - Hexadecimal -> Decimal\n");
      printf("B - Hexadecimal -> Binario\n");
      printf("C - Hexadecimal -> Octal\n");
      printf("S - Salir\n");

      printf("\nSeleccione opcion: ");
      c = getche();
      return c;
      }


unsigned long conversor(unsigned long n1,int base1,int base2)
      {
      unsigned long alg,mult=1,n2=0;
      while (n1 > 0)
      {
      alg = n1 % base1;
      n1 /= base1;
      n2 += (alg*mult);
      mult *= base2;
      }
      return n2;
      }

void main()
{
clrscr();
unsigned long n;
char op;


for(;;)
{
op = menu();
clrscr();

switch(op)
{
case '1':
printf("Conversor Decimal -> Binario\n");
printf("Introduza un numero Decimal: ");
scanf("%lu",&n);
printf("Numero Binario correspondente: ");
printf("%lu",conversor(n,2,10));
break;

case '2':
printf("Conversor Decimal -> Octal\n");
printf("Introduza um numero Decimal: ");
scanf("%lu",&n);
printf("Numero Octal correspondente: ");
printf("%lo",n);
break;

case '3':
printf("Conversor Decimal -> Hexadecimal\n");
printf("Introduza um numero Decimal: ");
scanf("%lu",&n);
printf("Numero Hexadecimal correspondente: ");
printf("%lx",n);
break;

case '4':
printf("Conversor Binario -> Decimal\n");
printf("Introduza un numero Binario: ");
scanf("%lu",&n);
printf("Numero Decimal correspondente: ");
printf("%lu",conversor(n,10,2));
break;

case '5':
printf("Conversor Binario -> Octal\n");
printf("Introduza un numero Binario: ");
scanf("%lu",&n);
printf("Numero Octal correspondente: ");
printf("%lo",conversor(n,10,2));
break;

case '6':
printf("Conversor Binario -> Hexadecimal\n");
printf("Introduza un numero Binario: ");
scanf("%ld",&n);
printf("Numero Hexadecimal correspondente: ");
printf("%lx",conversor(n,10,2));
break;

case '7':
printf("Conversor Octal -> Decimal\n");
printf("Introduza un numero Octal: ");
scanf("%lo",&n);
printf("Numero Decimal correspondente: ");
printf("%lu",n);
break;

case '8':
printf("Conversor Octal -> Binario\n");
printf("Introduza un numero Octal: ");
scanf("%lo",&n);
printf("Numero Binario correspondente: ");
printf("%lu",conversor(n,2,10));
break;

case '9':
printf("Conversor Octal -> Hexadecimal\n");
printf("Introduza un numero Octal: ");
scanf("%lo",&n);
printf("Numero Hexadecimal correspondente: ");
printf("%lx",n);
break;

case 'A':
case 'a':
printf("Conversor Hexadecimal -> Decimal\n");
printf("Introduza un numero Hexadecimal: ");
scanf("%lx",&n);
printf("Numero Decimal correspondente: ");
printf("%lu",n);
break;

case 'B':
case 'b':
printf("Conversor Hexadecimal -> Binario\n");
printf("Introduza un numero Hexadecimal: ");
scanf("%lx",&n);
printf("Numero Binario correspondente: ");
printf("%lu",conversor(n,2,10));
break;

case 'C':
case 'c':
printf("Conversor Hexadecimal -> Octal\n");
printf("Introduza un numero Hexadecimal: ");
scanf("%lx",&n);
printf("Numero Octal correspondente: ");
printf("%lo",n);
break;

case 'S':
case 's':
exit(0);
break;

default:
printf("Opcion invalida!");
}
getch();
}
}