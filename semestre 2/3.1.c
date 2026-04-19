#include <stdio.h>
#include <math.h>

int menu();
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);
float potenciacion(float a, float b);
float raizCuadrada(float a);
float validarFlotante();
int validarEnteroConRango(int a, int b);

int main (int argc, char *argv[]) {

    int opc = 0, opc2 = 0;
    float res = 0, n1 = 0, n2 = 0;

    do
    {
        opc = menu();

        switch (opc)
        {
        case 1:
            printf("Ingrese el numero 1: ");
            //scanf("%f", &n1);
            n1 = validarFlotante();
            printf("Ingrese el numero 2: ");
            n2 = validarFlotante();
            //scanf("%f", &n2);
            res = suma(n1, n2);
            printf("El resultado es: %.2f\n", res);
            break;
        case 2:
            printf("Ingrese el numero 1: ");
            n1 = validarEnteroConRango(0,10);
            printf("Ingrese el numero 2: ");
            n2 = validarEnteroConRango(0,10);
            res = resta(n1, n2);
            printf("El resultado es: %.2f\n", res);
            break;
        case 3:
            printf("Ingrese el numero 1: ");
            scanf("%f", &n1);
            printf("Ingrese el numero 2: ");
            scanf("%f", &n2);
            res = multiplicacion(n1, n2);
            printf("El resultado es: %.2f\n", res);
            break;
        case 4:
            printf("Ingrese el numero 1: ");
            scanf("%f", &n1);
            printf("Ingrese el numero 2: ");
            scanf("%f", &n2);
            res = division(n1, n2);
            printf("El resultado es: %.2f\n", res);
            break;
        case 5:
            printf("Ingrese el numero 1: ");
            scanf("%f", &n1);
            printf("Ingrese el numero 2: ");
            scanf("%f", &n2);
            res = potenciacion(n1, n2);
            printf("El resultado es: %.2f\n", res);
            break;
        case 6:
            printf("Ingrese el numero 1: ");
            scanf("%f", &n1);
            res = raizCuadrada(n1);
            printf("El resultado es: %.2f\n", res);
            break;

        default:
            break;
        }

        printf("Desea seleccionar otra opcion 1.Si/2.No: ");
        scanf("%d", &opc2);
    } while (opc2 == 1);
    return 0;
}

int menu(){
    int opc;
    printf("Seleccione una opcion:\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");
    printf("5.Potenciacion\n");
    printf("6.Raiz cuadrada\n");
    printf(">> ");
    scanf("%d",&opc);
    return opc;
}

float suma(float a, float b){
    float res;
    res = a + b;
    return res;
}

float resta(float a, float b){
    float res;
    res = a - b;
    return res;
}

float multiplicacion(float a, float b){
    float res;
    res = a * b;
    return res;
}

float division(float a, float b){
    float res;
    if (b == 0){
        printf("No se puede dividir para cero\n");
        res = 0;
    }else{
        res =  a / b;
    }
    return res;
}

float potenciacion(float a, float b){
    float res;
    if (a == 0 && b==0){
        printf("Indeterminacion");
        res = 0;
    }else{
        res = pow(a,b);
    }
    return res;
}

float raizCuadrada(float a){
    float res;
    res = sqrt(a);
    return res;
}

float validarFlotante(){
    float n = 0;
    float aux = 0;
    do{
        getchar();
        aux = scanf("%f",&n);
        if (aux != 1){
            printf("El valor ingresado es incorrecto\n");
            printf("\n >>");
        }
    }while(aux != 1);

    return n;
}

int validarEnteroConRango(int a, int b){
    int n = 0;
    float aux = 0;
    do{
        getchar();
        aux = scanf("%d",&n);
        if (aux != 1 || n < a || n > b){
            printf("El valor ingresado es incorrecto\n");
            printf("\n >>");
        }
    }while(aux != 1 || n < a || n > b);

    return n;
}