/* ejercicio mandando por el licenciado 
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
   int salir, id, nombre, stock, cantidad ;
   char nombre[50];
   int opcion ;
   float valor;

   printf("\n -----------Menu------------");
   do
   {
     printf("\n 1-itrar los datos del producto   ");
     printf("\n 2-Vender las unidades del producto ");
     printf("\n 3-Restablecer el producto(ingresar mas productos ) ");
     printf("\n 4-calcula informacion"); 
     printf("\n 5- calcular ganancias " );
     printf("\n 6- salir del programa ");
     scanf("%d", &opcion);
     switch (opcion)
     {
     case 1:
            printf("\n Ingresar id del producto");
            scanf("%d", &id);
            printf("\n Ingrese el nombre del producto");
            scanf("%s", &nombre );
            printf("\n ingrese el stock del producto ");
            scanf("%d ", &stock);
            printf("ingrese el valor del producto ");
            scanf("%f", &valor);

        break;
     case 2:
            printf("Cuantas unidades desea vender del producto ");

        break;   
     
     
        
     }
   } while (salir=!0);
   
  
   
    

   
    return 0;
}
