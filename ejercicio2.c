/*Ángel Ricardo León Flores 
Práctica 6 
Ejercicio de tipos de variables, entradas y salidas*/

#include <stdio.h>

void main()
{
  int entnum;
  char carac = 65;  //Convierte el número en un caracter ASCII.
  char carac2 = 'a';
  double punto;

  //Asignar valores de teclado en una variable
  printf("Escriba un valor entero: ");
  scanf("%i", &entnum);
  printf("Escriba un valor real: ");
  scanf("%lf", &punto);

  //Imprimir valores de formato 
  printf("\n Imprimiendo las variables \a\n");
  printf("\t Valor de número entero es: %i \n", entnum);
  printf("\t Valor del caracter ASCII es: %c \n", carac);
  printf("\t Valor del caracter es: %c \n", carac2);
  printf("\t Valor del número real es: %lf \n", punto);

}
