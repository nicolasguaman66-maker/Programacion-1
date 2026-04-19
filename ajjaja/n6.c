/*
Autor 
Fechas 
Descrpcion 
*/ 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int  año, cuadros, i ;
    int cont=0 ;
    int con=0 ;
    char nombre[50];
    printf("\n cuantos cuadros desea ingresar ");
    scanf("%d", &cuadros);

  for ( i = 0; i < cuadros ; i++)
  {
    printf("\n Ingrese el nombre de los cuadros ");
    scanf(" %99[^\n]", nombre);
    printf("\n Ingrese el año de los cuadros  ");
    scanf("%d", &año);

    if (año<=1901 )
    {
        cont++;
    } 
    if (año>=2016  || año<=2026)
    {
        con++;
    }
  }
  if (con=0)
    {
       printf("\n renovar stock ");
    }else
    {
       printf("\n la cantidad de cuadros de esta decada son %d", con);
    }
    printf("\n la cantidad de cuadros del anterior siglo son %d", cont);
  
   
   

    return 0;
}
