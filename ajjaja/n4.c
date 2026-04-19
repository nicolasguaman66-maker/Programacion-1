/*
Fecha 
Autor
Descripcion
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int nota, edad,i;
    for (i=1 ; i <= 2; i++)
    {
        printf("\n Ingrese las notas y edades de los alumnos ");
        printf("\n Ingrese la nota");
        scanf("%d", &nota);
        printf("\n ingrese la edad ");
        scanf("%d", &edad);

        if (nota>=6 )
        {
            printf("\n Aprobo el examen va al grupo A");

        }else
        {
            printf("\n No aprobo el examen va al grupo 2");

        }
        
        if (edad<10 )
        {
           printf("\n Va al grupo 1");
        }else if (edad>=10 && edad<20)
        {
           printf("\n Va al grupo 2");
        }else
        {
           printf("\n Va al grupo 3");
        }
        
        if (nota>=9)
        {
            printf("\n Recibio una beca por sacar %d en el examen", nota); 
        }
        
        
        
    }
    

    return 0;
}
