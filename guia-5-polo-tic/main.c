#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numEjercicio;
    char control = 's';
    ///Ejercicio 1
    int matriz[4][4] = {{0,0,0,0}, {0,0,0,0}};
    /// Ejercicio 2
    int mat[4][4] = {0};
    /// Ejercicio 3
    int mat2[40][5] ;
    int suma1;
    float prom1;
    /// Ejercicio 4
    int cant[50][15];
    int total[15];
    int suma;
    ///Ejercicio 5
    float alumnos[4][4] ;
    float suma2 = 0;
    float prom;

    do
    {
        printf("Seleccione un ejercicio:\n1.Matriz nula\n2.MAtriz diagonal\n3.Promedio de notas\n4.Comercio mayorista\n5.Notas y promedios\n\n");
        scanf("%d", &numEjercicio);
        switch(numEjercicio)
        {

        case 1:
            printf("Se dispone de una matriz de 4 x 4. Rellenar con 0 (ceros) toda la matriz (como muestra el gráfico) y luego mostrar por pantalla.\n");

            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    printf("[%i]", matriz[i][j]);
                }
                printf("\n");
            }

            system("pause");
            system("cls");
            break;
        case 2:
            printf("Se dispone de una matriz de 4 x 4. Rellenar con 1 (unos) la diagonal (como muestra el gr%cfico) y el resto con 0 (ceros). Mostrar por pantalla la matriz.\n",160);

            for(int i = 0; i < 40; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    mat[i][i] = 1;
                    printf("[%i]", mat[i][j]);
                }
                printf("\n");
            }
            system("pause");
            system("cls");
            break;
        case 3:
            printf("Se dispone de las notas correspondientes a una materia de los 40 alumnos de un curso. Cada alumno tiene 5 notas, donde las notas de un alumno corresponden a una fila de una matriz. Elaborar un algoritmo que calcule e imprima el promedio de cada alumno.\n");

            for( int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    printf("Ingrese una nota para el alumno\n");
                    scanf("%d", &mat2[i][j]);
                }
            }

            for(int i = 0; i < 40; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    printf("[%i]", mat2[i][j]);
                }
                printf("\n");
            }

            printf("\n\n");

            for( int i = 0; i < 40 ; i++)
            {
                suma1 = 0;
                for(int j = 0; j < 5; j++)
                {
                    suma1 += mat2[i][j];
                    prom1 = suma1/5;
                }

                printf("El promedio del alumno es %.2f\n\n",prom1);
            }

            system("pause");
            system("cls");

            break;
        case 4:
            printf("Un comercio mayorista trabaja con 50 articulos. Dispone de un plantel de 15 vendedores para su venta, los cuales est%cn numerados del 1 al 15 inclusive. El algoritmo deber%c cargar y manejar una matriz llamada CANT de 50 x 15, en donde cada fila representa un art%cculo o producto, cada columna un Vendedor y cada componente de la matriz CANT [i, j]    la cantidad del artículo i vendida por el vendedor j. El algoritmo tambi%cn deber%c cargar un vector llamado TOTAL con las cantidades totales de artículos vendidas por cada Vendedor. Luego informar cual fue el vendedor que realiz%c la mayor venta.\n", 160, 160, 161, 130,160, 162);

            for( int i = 0; i < 5; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    printf("Ingrese cantidad de articulos vendidos\n");
                    scanf("%d", &cant[i][j]);
                }
            }

            printf("Vector CANT: \n\n");
            for(int i = 0; i < 5; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    printf("[%i]", cant[i][j]);
                }
                printf("\n");
            }

            printf("\n");

            printf("Vector TOTAL: \n\n");

            for( int i = 0; i < 5 ; i++)
            {
                suma = 0;
                for(int j = 0; j < 5; j++)
                {
                    suma += cant[i][j];

                }
                // printf("%d\n", suma);

                total[i] = suma;
                printf("[%d]", total[i]);

            }

            int posMayor = 0;
            int mayor = total[0];
            /// buscar el mayor numero de ventas dentro del arreglo total e indicar en que posicion de dicho arreglo se encuentra
            for (int i = 1; i < 5 ; ++i)
            {
                if (total[i] > mayor)
                {
                    posMayor = i;
                    mayor = total[i];
                }
            }
            printf("\nEl vendedor que realizo la mayor venta es el %d \n", posMayor + 1);

            system("pause");
            system("cls");
            break;
        case 5:
            printf("En una tabla de 4 filas y 4 columnas se guardan las notas de 4 alumnos de secundario. Cada fila corresponde a las notas y al promedio de cada alumno.\n");
            printf("Se necesita un programa que permita a un profesor cargar en las 3 primeras posiciones de cada fila las notas del alumno y que en la última columna se calculen los promedios.\n");
            printf("Una vez realizados los cálculos, se desea mostrar las 3 notas de cada alumno y el promedio correspondiente recorriendo la matriz. Ejemplo:\n");

            for( int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    printf("Ingrese una nota para el alumno\n");
                    scanf("%f", &alumnos[i][j]);

                    suma2 += alumnos[i][j];

                }
                alumnos[i][3]= suma2/3;

                suma2 = 0;

            }

            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    printf("[%.2f]", alumnos[i][j]);

                }
                printf("\n");
            }

            printf("\n\n");
            system("pause");
            system("cls");
            break;
        default:
            printf("Ingrese una opci%cb v%clida\n",162,160);

        }

        printf("Desea ver otro ejercicio: S/N\n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(control == 's');

    return 0;
}
