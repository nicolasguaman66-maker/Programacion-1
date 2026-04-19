#include <stdio.h>
#include <string.h>
#include <float.h>

int main(void) {

    float cal[5][3][3];
    char nombres[5][20];
    char asignaturas[3][20] = {"Matematicas", "Fisica", "Quimica"};
    int opc = 0, opc2 = 0;
    float promedios[5][3];
    int calRegistrada[5];
    int contAlumnos = 0;


    do {
        printf("\n========== MENU ==========\n");
        printf("1. Registrar alumno\n");
        printf("2. Registrar calificaciones\n");
        printf("3. Promedio por alumno\n");
        printf("4. Promedio por asignatura\n");
        printf("5. Calificacion mas alta y baja por estudiante\n");
        printf("6. Calificacion mas alta y baja por asignatura\n");
        printf("7. Estudiantes aprobados y reprobados por asignatura\n");
        printf("0. Salir\n");
        printf(">> ");
        scanf("%d", &opc);

        switch (opc) {

            case 1:
                if (contAlumnos >= 5) {
                    printf("No se pueden registrar mas de 5 alumnos.\n");
                    break;
                }
                printf("Ingrese el nombre del alumno %d: ", contAlumnos + 1);
                getchar();
                fgets(nombres[contAlumnos], 20, stdin);
                nombres[contAlumnos][strcspn(nombres[contAlumnos], "\n")] = '\0';
                contAlumnos++;
                printf("Alumno registrado exitosamente.\n");
                break;

            case 2:
                if (contAlumnos == 0) {
                    printf("No hay alumnos registrados.\n");
                    break;
                }
                printf("Seleccione el alumno:\n");
                for (int i = 0; i < contAlumnos; i++) {
                    printf("  %d. %s\n", i + 1, nombres[i]);
                }
                printf(">> ");
                int selA = 0;
                scanf("%d", &selA);
                selA--;

                if (selA < 0 || selA >= contAlumnos) {
                    printf("Alumno invalido.\n");
                    break;
                }

                for (int i = 0; i < 3; i++) {
                    promedios[selA][i] = 0.0f;
                    printf("Ingrese las notas de: %s\n", asignaturas[i]);
                    for (int j = 0; j < 3; j++) {
                        printf("  Nota %d: ", j + 1);
                        scanf("%f", &cal[selA][i][j]);
                        promedios[selA][i] += cal[selA][i][j];
                    }
                    promedios[selA][i] /= 3;
                }
                calRegistrada[selA] = 1;
                printf("Calificaciones registradas.\n");
                break;

            case 3:
                if (contAlumnos == 0) {
                    printf("No hay alumnos registrados.\n");
                    break;
                }
                printf("\n--- Promedio por alumno ---\n");
                printf("%-20s %-12s %-10s %-10s %-10s\n",
                       "Nombre", "Matematicas", "Fisica", "Quimica", "General");
                printf("------------------------------------------------------------\n");
                for (int i = 0; i < contAlumnos; i++) {
                    if (!calRegistrada[i]) continue;
                    float promGeneral = (promedios[i][0] + promedios[i][1] + promedios[i][2]) / 3.0f;
                    printf("%-20s %-12.2f %-10.2f %-10.2f %-10.2f\n",
                           nombres[i],
                           promedios[i][0], promedios[i][1], promedios[i][2],
                           promGeneral);
                }
                break;

            case 4:
                if (contAlumnos == 0) {
                    printf("No hay alumnos registrados.\n");
                    break;
                }
                printf("\n--- Promedio por asignatura ---\n");
                for (int j = 0; j < 3; j++) {
                    float suma = 0.0f;
                    int count = 0;
                    for (int i = 0; i < contAlumnos; i++) {
                        if (!calRegistrada[i]) continue;
                        suma += promedios[i][j];
                        count++;
                    }
                    if (count > 0)
                        printf("  %-15s: %.2f\n", asignaturas[j], suma / count);
                    else
                        printf("  %-15s: Sin datos\n", asignaturas[j]);
                }
                break;

            case 5:
                if (contAlumnos == 0) {
                    printf("No hay alumnos registrados.\n");
                    break;
                }
                printf("\n--- Calificacion mas alta y baja por estudiante ---\n");
                for (int i = 0; i < contAlumnos; i++) {
                    if (!calRegistrada[i]) continue;
                    float alta = -FLT_MAX, baja = FLT_MAX;
                    char materiaAlta[20], materiaBaja[20];
                    for (int j = 0; j < 3; j++) {
                        if (promedios[i][j] > alta) {
                            alta = promedios[i][j];
                            strcpy(materiaAlta, asignaturas[j]);
                        }
                        if (promedios[i][j] < baja) {
                            baja = promedios[i][j];
                            strcpy(materiaBaja, asignaturas[j]);
                        }
                    }
                    printf("  %s\n", nombres[i]);
                    printf("    Alta : %.2f (%s)\n", alta, materiaAlta);
                    printf("    Baja : %.2f (%s)\n", baja, materiaBaja);
                }
                break;

            case 6:
                if (contAlumnos == 0) {
                    printf("No hay alumnos registrados.\n");
                    break;
                }
                printf("\n--- Calificacion mas alta y baja por asignatura ---\n");
                for (int j = 0; j < 3; j++) {
                    float alta = -FLT_MAX, baja = FLT_MAX;
                    char alumnoAlto[20], alumnoBajo[20];
                    int hayDatos = 0;
                    for (int i = 0; i < contAlumnos; i++) {
                        if (!calRegistrada[i]) continue;
                        hayDatos = 1;
                        if (promedios[i][j] > alta) {
                            alta = promedios[i][j];
                            strcpy(alumnoAlto, nombres[i]);
                        }
                        if (promedios[i][j] < baja) {
                            baja = promedios[i][j];
                            strcpy(alumnoBajo, nombres[i]);
                        }
                    }
                    printf("  %s\n", asignaturas[j]);
                    if (hayDatos) {
                        printf("    Alta : %.2f (%s)\n", alta, alumnoAlto);
                        printf("    Baja : %.2f (%s)\n", baja, alumnoBajo);
                    } else {
                        printf("    Sin datos.\n");
                    }
                }
                break;
            case 7:
                if (contAlumnos == 0) {
                    printf("No hay alumnos registrados.\n");
                    break;
                }
                printf("\n--- Aprobados y reprobados por asignatura (nota minima: 6.0) ---\n");
                for (int j = 0; j < 3; j++) {
                    printf("  %s:\n", asignaturas[j]);
                    int aprobados = 0, reprobados = 0;
                    for (int i = 0; i < contAlumnos; i++) {
                        if (!calRegistrada[i]) continue;
                        if (promedios[i][j] >= 6.0f) {
                            printf("    [APROBADO]  %s (%.2f)\n", nombres[i], promedios[i][j]);
                            aprobados++;
                        } else {
                            printf("    [REPROBADO] %s (%.2f)\n", nombres[i], promedios[i][j]);
                            reprobados++;
                        }
                    }
                    printf("    Total aprobados: %d | Reprobados: %d\n", aprobados, reprobados);
                }
                break;
            case 0:
                printf("Saliendo...\n");
                opc2 = 2;
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }
        if (opc != 0) {
            printf("\nDesea seleccionar otra opcion? 1.Si / 2.No: ");
            scanf("%d", &opc2);
        }

    } while (opc2 == 1);

    return 0;
}
