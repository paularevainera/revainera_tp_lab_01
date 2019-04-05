#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    int opc;
    float x, y;
    int n1;

    do
    {
        menu();
        scanf("%i",&opc);
        //if (opc != 7 || opc>0 )
        //{
            //printf("\n\t-------------------------------------------------------------");
            //printf("\n\t DEBE INGRRESAR NUMEROS DEL 1 A 7. CARACTERES NO SE ADMITEN");
            //printf("\n\t-------------------------------------------------------------\n\n");
       // QUISE VALIDAR PARA CARACTERES PERO NO LO LOGRE. }


    switch(opc)
    {

    case 1:
        printf("\nIntroduce 1er operando A: ");
        scanf("%f", &x);
        printf("\nIntroduce 2do operando B: ");
        scanf("%f", &y);
        printf("\nLa suma de %.2f y %.2f es: %.2f\n\n", x, y, suma(x, y));
        break;
    case 2:
        printf("\nIntroduce 1er operando A: ");
        scanf("%f",&x);
        printf("\nIntroduce 2do operando B: ");
        scanf("%f",&y);
        printf("\nLa resta de %.2f y %.2f es: %.2f\n\n", x, y, resta(x, y));
        break;
    case 3:
        printf("\nIngrese 1er operando: ");
        scanf("%f",&x);
        printf("\nIngrese 2do operando: ");
        scanf("%f",&y);
        if(x==0 && y==0)
            {
                printf("\n\n ERROR NO SE PUEDE DIVIDIR POR CERO! \n\n");
            }
                if(x!=0 && y==0)
            {
                printf("\n\n ERROR NO SE PUEDE DIVIDIR POR CERO! \n\n");

            }
            else
                {
                    printf("\nLa division de %.2f y %.2f es: %.2f\n\n", x, y, dividir(x, y));
                }
                    break;
    case 4:
        printf("\nIntroduce 1er operando A: ");
        scanf("%f",&x);
        printf("\nIntroduce 2do operando B: ");
        scanf("%f",&y);
        printf("\nLa multiplicacion de %.2f y %.2f es: %.2f\n\n", x, y, multiplicar(x, y));
        break;
    case 5:
        printf("\nIngrese valor a factorizar (solo numeros enteros): ");
        scanf("%i",&n1);
        if(n1<0)
            {
                printf("\n\nError, ingrese un numero mayor o igual a 0.\n\n");
            }
                else
                {
                    printf("\nEl factorial de %i es: %i\n\n",n1, factorial(n1));
                }
                break;
    case 6:
        printf("\nIntroduce 1er operando A: ");
        scanf("%f",&x);
        printf("\nIntroduce 2do operando B: ");
        scanf("%f",&y);
        printf("\nLa suma de %.2f y %.2f es: %.2f\n", x, y, suma(x, y));
        printf("\nLa resta de %.2f y %.2f es: %.2f\n", x, y, resta(x, y));
        printf("\nLa division entre %.2f y %.2f es: %.2f\n", x, y, dividir(x, y));
        printf("\nLa multiplicacion de %.2f y %.2f es: %.2f\n\n", x, y, multiplicar(x, y));
        break;
    case 7:
        printf("\t\t-----------\n");
        printf("\t\tHASTA LUEGO.\n");
        printf("\t\t-----------\n\n");
        break;

        default: printf("\t\t----------------------\n");
                 printf("\t\tLA OPCION NO ES VALIDA!\n");
                 printf("\t\t-----------------------\n\n");
        }

    }while (opc != 7);
}


void menu()
{
    printf ("\n\n\t\t-- Bienvenido, seleccione la operacion que desea: --\n");
    printf ("1.- Sumar\n");
    printf ("2.- Restar\n");
    printf ("3.- Dividir\n");
    printf ("4.- Multiplicar\n");
    printf ("5.- Factorial\n");
    printf ("6.- Calcular todas las operaciones\n");
    printf ("7.- Salir\n");
    printf ("8.-Opcion: ");
}

float suma(float x, float y)
{
    return x+y;
}

float resta(float x, float y)
{
    return x-y;
}

float multiplicar(float x, float y)
{
    return x*y;
}

float dividir (float x, float y)
{
    return x/y;
}

int factorial (int n1)
{
    int i;
    int factorial = 1;
    for(i=1; i<=n1; i++)
    {
        factorial *= i;
    }
    return factorial;
}



