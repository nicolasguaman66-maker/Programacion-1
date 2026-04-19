/*
Fecha 
Autor
Descrpcion 
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float p1,p2,p3,c1,c2,c3,m1,m2,m3, total, pesos, descuento;
    printf("\n Ingresar los productos");
    printf("\n ingrese kilos despues la cantidad  ");
    scanf("%f %f", &p1, &c1);
    printf("\n ingrese kilos despues la cantidad ");
    scanf("%f %f", &p2, &c2);
    printf("\n ingrese kilos despues la cantidad ");
    scanf("%f %f", &p3, &c3);

    m1= p1*c1 ;
    m2= c2 *p2 ;
    m3= p3*c3 ;
    total=m1+m2+m3 ;
    pesos=total*17 ;
    
    if (total>= 100)
    {
        printf("\n total producto 1 %.1f dolares", m1);
        printf("\n total producto 2 %.1f dolares", m2);
        printf("\n total producto 3 %.1f dolares", m3);
        printf("\n El total en pesos es %.1f", pesos);
        descuento=total*0.1 ;
        total=total- descuento ;
        printf("\n por la compra de 100 o mas se aplica descuento del 10%");
        printf("\n el total seria %.1f ", total);


    }else
    {
        printf("\n total producto 1 %.1f dolares", m1);
        printf("\n total producto 2 %.1f dolares", m2);
        printf("\n total producto 3 %.1f dolares", m3);
        printf("\n El total en pesos es %.1f", pesos);
       
    }
    
    

    return 0;
}
