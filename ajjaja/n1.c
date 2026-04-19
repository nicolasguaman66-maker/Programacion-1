/* 
Fecha 
Autor 
descrpcion
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float banco, alumnos, faltan ;
    printf("\n Ingresar el nunero de bancas  ");
    scanf("%f", &banco);
    printf("\n Ingrese el nnumero de estudiantes ");
    scanf("%f", &alumnos);
    
    if (banco <alumnos)
    {
        faltan= alumnos- banco ;
        printf("\n el numero de bancas que faltan es %.1f", faltan );
    }
    else
    {
        printf("\n si alcanzan los bancos ");
    }
    

    return 0;
}
