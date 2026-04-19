/*
Fecha
Autor
Descrpicion 
*/ 
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float n1,abcc;
    printf("\ningerese un numero");
    scanf("%f", &n1);

    if (n1>=0)
    {
        n1=sqrt(n1) ;
        printf("\nla raiz del numero es %f ", n1);
    } else
    {
        
        abcc= fabs(n1);
        n1=sqrt(abcc);
        printf("\n el numero es negativo, sacamos el valor absolto que es %f y sacamos la raiz que es %f", abcc, n1);

    }
     
    
    return 0;
}
