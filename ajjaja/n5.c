/*


*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int caramelos, chupetes, chicles, mayores=0, cont=0, general;
    float incidencia ;
    printf("\n Ingresa la cantidad de caramelos");
    scanf("%d", &caramelos);
    printf("\n Ingrese la cantidad de chupetes ");
    scanf("%d", &chupetes);
    printf("\n Infrese la cantidad de chicles ");
    scanf("%d", &chicles );
    general= chicles+chupetes+caramelos ;
    if (chicles<=10)
    {
        printf("\n verificar stock ");
    }else if (chicles>10 )
    {
        printf("\n cantidad de caramelos es %d", chicles);
        cont+=chicles ;
        mayores++ ;
    }
    if (caramelos<=10)
    {
        printf("\n verificar stock ");
    }else if (caramelos>10 )
    {
        printf("\n cantidad de caramelos es %d", caramelos);
        cont+=caramelos ;
        mayores++ ;
    }
    if (chupetes<=10)
    {
        printf("\n verificar stock ");
    }else if (chupetes>10 )
    {
        printf("\n cantidad de caramelos es %d", chupetes);
        cont+=chupetes ;
        mayores++ ;
    }
    incidencia=((float)cont/general) * 100;
    printf("\n la cantidad mayores a 50 son %d", mayores);
    printf("\n la incidencia es %.1f ", incidencia);

    return 0;
}
