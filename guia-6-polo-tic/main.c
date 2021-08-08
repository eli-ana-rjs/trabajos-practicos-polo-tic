#include <stdio.h>
#include <stdlib.h>

/// Ejercicio 1
void hermanoMayoroMenor(int edad1, int edad2);
int diferenciaDeEdades(int edad1, int edad2);

/// Ejercicio 2
int sumaNotas(int nota1, int nota2,int nota3);
float promedio(int sumaNotas, int cantidadNotas);
void aproboOnoAprobo(int nota1, int nota2, int nota3, float promedio);

/// Ejercicio 3
void determinarTriangulo( int lado1, int lado2, int lado3);

/// Ejercicio 4
void esBisiesto(int anio);
int main()
{
    int ejercicio;
    char control = 's';
    ///Ejercicio 2


    do
    {
        printf("Seleccione el ejercicio que desee ver:\n1.Comparar edades\n2.Almuno aprobo o no.\n3.Tipo de tria%cngulo\n4.Es o no bisiesto\n5.Ordenar de menor a mayor\n\n", 160);
        scanf("%d", &ejercicio);

        switch(ejercicio)
        {

        case 1:
            printf("Dise%car un algoritmo que solicite la edad de dos hermanos y devuelva un mensaje indicando cu%cl de los dos es mayor y cuantos a%cos de diferencia tiene con el menor,por medio de una funci%cn. Nota: Contemplar que ambos hermanos puedan tener la misma edad.\n", 164,160, 164, 162);
            /**Realizar la prueba de escritorio de los siguientes escenarios:
             Escenario 1: Hermano 1: 25, Hermano 2: 29
             Escenario 2: Hermano 1: 23, Hermano 2: 18
             Escenario 3: Hermano 1: 20, Hermano 2: 20 **/

            printf("Escenario 1\n");
            printf("Hermano 1: 25, Hermano 2: 29\n");
            hermanoMayoroMenor(25,29);
            int difDeEdades = diferenciaDeEdades(25,29);
            printf("La diferencia de edades es %d\n", difDeEdades);

            printf("Escenario 2\n");
            printf("Hermano 1: 23, Hermano 2: 18\n");
            hermanoMayoroMenor(23,18);
            int difDeEdades2 = diferenciaDeEdades(23,18);
            printf("La diferencia de edades es %d\n", difDeEdades2);

            printf("Escenario 3\n");
            printf("Hermano 1: 20, Hermano 2: 20\n");
            hermanoMayoroMenor(20,20);
            int difDeEdades3 = diferenciaDeEdades(20,20);
            printf("La diferencia de edades es %d\n", difDeEdades3);


            system("pause");
            system("cls");
            break;

        case 2:
            printf("Dise%car un algoritmo que solicite las tres notas de la cursada de un alumno e indique si el alumno está aprobado por medio de una funci%cn. Un alumno aprueba la cursada si las notas son todas superiores a 4 y si el promedio de las tres es mayor o igual a 7.\n", 164, 162);

            /**Realizar la prueba de escritorio de los siguientes escenarios:
            Escenario 1: Nota 1: 3, Nota 2: 9, Nota 3: 9
            Escenario 2: Nota 1: 6, Nota 2: 8, Nota 3: 10**/

            int nota1, nota2, nota3;
            int cantidadDeNotas = 3;

            printf("Ingresa nota del 1er Parcial: \n");
            scanf("%d", &nota1);

            printf("Ingresa nota del 2do Parcial: \n");
            scanf("%d", &nota2);

            printf("Ingresa nota del 3er Parcial: \n");
            scanf("%d", &nota3);

            int totalNotas = sumaNotas(nota1, nota2, nota3);
            float promedioNotas = promedio(totalNotas,cantidadDeNotas);
            aproboOnoAprobo(nota1, nota2, nota3, promedioNotas);

            system("pause");
            system("cls");

            break;

        case 3:
            printf("Dise%car un algoritmo que solicite los tres lados de un tri%cngulo y determine qu%c tipo de tri%cngulo es: Equil%ctero, Escaleno o Is%csceles por medio de una funci%cn.\n", 164, 160,130, 160, 160,162,162);

            /** Realizar la prueba de escritorio de los siguientes escenarios:
               Escenario 1: Lado 1: 10, Lado 2: 15, Lado 3: 20
               Escenario 2: Lado 1: 30, Lado 2: 30, Lado 3: 30
               Escenario 3: Lado 1: 20, Lado 2: 20, Lado 3: 30**/

            int lado1, lado2, lado3;

            printf("Ingresar lado 1: \n");
            scanf("%d", &lado1);

            printf("Ingresar lado 2: \n");
            scanf("%d", &lado2);

            printf("Ingresar lado 3: \n");
            scanf("%d", &lado3);

            determinarTriangulo(lado1, lado2, lado3);

            system("pause");
            system("cls");

            break;

        case 4:
            printf("Dise%car un algoritmo que solicite un a%co y determine si es bisiesto por medio de una funci%cn. Nota: Ser%cn bisiestos los a%cos divisibles por 4, exceptuando los que son divisibles por 100 y no divisibles por 400.\n", 164,164,162,160,164);
            /**Realizar la prueba de escritorio de los siguientes escenarios:
            Escenario 1: Bisiestos para los años: 1996, 2004, 2000, 1600 (Elegir uno)
            Escenario 2: NO bisiestos para los años: 1700, 1800, 1900, 2100 (Elegir uno)**/

            int anio;

            printf("Ingresar un a%co; \n", 164);
            scanf("%d", &anio);

            esBisiesto(anio);

            system("pause");
            system("cls");
            break;

        case 5:
            printf("Dise%car un algoritmo que solicite dos n%cmeros: a y b, y que devuelva ambos valores ordenados de menor a mayor en una funcion.\n", 164, 163);
            /**Realizar la prueba de escritorio de los siguientes escenarios:
            Escenario 1: a: 5, b: 9 Escenario 2: a: 8, b: 3**/

            int a,b;

            printf("Ingrese un n%cmero: \n", 163);
            scanf("%d", &a);

            printf("Ingrese otro n%cmero: \n", 163);
            scanf("%d", &b);

            ordenarNumeros(a,b);
            break;
        default:
            printf("Ingrese una opci%cn v%clida\n", 162,160);

        }

        printf("Desea ver otro ejercicio: S/N\n\n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(control == 's');

    return 0;
}

/// Ejercicio 1
void hermanoMayoroMenor(int edad1, int edad2)
{
    if(edad1 > edad2)
    {
        printf("Hermano 1 es mayor a hermano 2\n");
    }
    else if(edad1 == edad2)
    {
        printf("Ambos hermanos tienen la misma edad\n");
    }
    else
    {
        printf("Hermano 1 es menor a hermano 2\n");
    }
}

int diferenciaDeEdades(int edad1, int edad2)
{
    int diferencia;
    if( edad1 > edad2 || edad1 == edad2)
    {
        diferencia = edad1 - edad2;
    }
    else
    {
        diferencia = edad2 - edad1;
    }
    return diferencia;
}



/// Ejerciicio 2

int sumaNotas(int nota1, int nota2,int nota3)
{
    int suma = nota1 + nota2 + nota3;

    return suma;
}

float promedio(int sumaNotas, int cantidadNotas)
{

    float prom = 0;

    prom = (float)sumaNotas/(float)cantidadNotas;

    return prom;
}

void aproboOnoAprobo(int nota1, int nota2, int nota3, float promedio)
{
    if( nota1 > 4 && nota2 > 4 && nota3 > 4 && promedio >=7)
    {
        printf("APROBO la cursada\n");
    }
    else
    {
        printf("NO APROBO la cursada\n");
    }
}

/// Ejercicio 3

void determinarTriangulo( int lado1, int lado2, int lado3)
{
    if((lado1 == lado2) && (lado2 == lado3) && (lado2 == lado3))
    {
        printf("El triangulo es EQUILATERO\n");
    }
    else if((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3))
    {
        printf("El triangulo es ISOSCELES\n");
    }
    else if( lado1 != lado2 != lado3)
    {
        printf("El triangulo es ESCALENO\n");
    }
}

/// Ejercicio 4
void esBisiesto(int anio)
{

    if( anio % 4 == 0 && (anio % 100 != 0) || (anio % 400 == 0) )
    {
        printf("El anio %d es BISIESTO\n", anio);
    }
    else
    {
        printf("El anio %d NO ES BISIESTO\n", anio);
    }
}

/// Ejercicio 5
void ordenarNumeros( int a, int b)
{

    if( a < b)
    {
        printf( "Ordenados de menor a mayor: %d, %d\n", a,b);
    }
    else
    {
        printf( "Ordenados de menor a mayor: %d, %d\n", b,a);
    }
}
