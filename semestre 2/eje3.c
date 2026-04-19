#include <stdio.h>

int main (int argc, char *argv[]) {

    float cal[5][3][3]={0};
    char nombres[5][20];
    char asignaturas[3][20] = {"Matematicas",
                               "Fisica",
                               "Quimica"};
    int opc=0, opc2=0;

    float promedios[5][3];

    int contAlumnos=0;

    do{
        printf("Seleccione una opcion\n");
        printf("1.Registrar alumno\n");
        printf("2.Registrar calificaciones\n");
        printf("3.Promedio por alumno\n");
        printf("4.Promedio por asignatura\n");
        printf("5.Calificacion mas alta y baja por estudiante\n");
        printf("6.Calificacion mas alta y baja por asignatura\n");
        printf("7.Estudiantes aprobados y reprobados por asginatura\n");
        printf(">> ");
        scanf("%d",&opc);

        switch (opc)
        {
            case 1:
                printf("Ingrese el nombre del alumno %d\n",contAlumnos+1);
                getchar();
                fgets(nombres[contAlumnos],20,stdin);
                contAlumnos++;
                break;
            case 2:
                int selA = 0;
                printf("Seleccione el alumno del que desee regitrar las calificaciones:\n");
                for (int i = 0; i < contAlumnos; i++)
                {
                    printf("%d.%s",i,nombres[i]);
                }
                printf(">> ");
                scanf("%d",&selA);

                for (int i = 0; i < 3; i++)
                {
                    printf("Ingrese las notas de la materia: %s\n",asignaturas[i]);
                    for (int j = 0; j < 3; j++)
                    {
                        printf("Nota %d: ",j+1);
                        scanf("%f",&cal[selA][i][j]);
                        promedios[selA][i]+=cal[selA][i][j];
                    }
                    promedios[selA][i]/=3;
                }
                break;
            case 3:
                printf("--------------Calificaciones----------------\n");
                printf("%s\t\t%s\t\t%s\t\tNombre\n",asignaturas[0],asignaturas[1],asignaturas[2]);

                for (int i = 0; i < contAlumnos; i++)
                {
                    printf("%.2f\t\t%.2f\t\t%.2f\t\t%s",promedios[i][0],
                                                        promedios[i][1],
                                                        promedios[i][2],
                                                        nombres[i]);
                }

                break;
        
            default:
                break;
        }






        printf("Desea seleccionar otra opcion 1.Si/2.No: ");
        scanf("%d",&opc2);
    }while(opc2==1);
    





    return 0;
}