/*
Una universidad desea evaluar el estado académico de un estudiante considerando
tres notas parciales (0–10) y el porcentaje de asistencia.
Reglas:
 Calcular el promedio de las tres notas.
 Si el promedio es menor a 7, el estudiante reprueba automáticamente.
 Si el promedio es mayor o igual a 7, verificar la asistencia:
o Si la asistencia es menor al 80%, el estudiante reprueba por inasistencia.
o Si la asistencia es mayor o igual al 80%, el estudiante aprueba.
 Mostrar el promedio, el estado final y la causa (nota o asistencia)

*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int notas=0, asistencias, cont=0, promedio;
    while (cont<3)
    {
        printf("\n Ingresar las notas-- ");
        scanf("%d", &notas);
        notas+=notas;
        cont++;
    }
    printf("\n Ingrese las asitencias-- "); 
    scanf("%d", &asistencias);
    promedio=notas/cont;
    if (notas>=7 && asistencias>=80)
    {
        printf("\n aprobado  "); 
    }
    if (notas<7)
    {
        printf("\n rebrobado por nota-- "); 
    }
    if (asistencias<80)
    {
        printf("\n rebrobado por inasistencia-- "); 
    }
    
    
    return 0;
}
