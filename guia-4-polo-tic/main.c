#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// Prototipado de las funciones
int cargarVectorNotas(int vec[], int dimension);
int buscarMayorNota( int vec[], int validos, int pos);
int sumaElementosVector(int vec[], int validos);
int cantidadDeAprobados( int vec[], int validos);
void cargarVectorSueldoEmpleados(int vec[], int dimension);
void mostrarVectorSueldosEmpleados(int vec[], int dimension);
int buscarMayorSueldo( int vec[], int dimension);
void cargarVectorEdades(int vec[], int dimension);
int buscarMenorEdad(int vec[], int dimension, int pos);
void cargarArregloVendedorProducto(int ventas[], char vendedores[][30]);
int cargarArrayCantidadesCostos( int cantidades[], int costos[], int dimension);
int cargarArrayCantidades( int cantidades[], int dimension);
int cargarArrayCostos ( int costos[], int dimension);


int main()
{
    ///Ejercicio 1
    printf("Un alumno tiene “n” notas (Se ingresa por teclado la cantidad de notas) que se deben cargar en un vector (Se debe definir el vector en base a la cantidad de notas que se van a ingresar, por ejemplo: Si son 5 notas, el vector debe ser de tama%co 5). Luego de cargar las notas se debe mostrar la nota m%cs alta y el promedio de notas.\n", 164, 160);

    int notas[20];
    int validos = cargarVectorNotas(notas,20);
    int notaMayor = buscarMayor(notas, validos,0);
    printf("Nota m%cs alta: %d\n", 160,notas[notaMayor]);

    int totalNotas = sumaElementosVector(notas, validos);
    /// printf("totalNotas: %d", totalNotas);

    float prom = (float)totalNotas/(float)validos;

    printf("Promedio = %.2f\n\n", prom);

    system("pause");
    system("cls");

    /// Ejercicio 2
    /// Trbaja con el vector cargado en el ejercicio 1

    printf("Cargar un vector con N notas e indicar la cantidad de aprobados (Notas mayores o iguales a 6), la cantidad de desaprobados (Notas menores a 6)\n\n");

    int aprobados = cantidadDeAprobados(notas,validos);
    printf("Cantidad de aprobados: %d\n", aprobados);

    int desaprobados = validos - aprobados;
    printf("Cantidad de desaprobados: %d\n", desaprobados);

    system("pause");
    system("cls");

    /// Ejercicio 3

    printf("Se necesita cargar un vector con el sueldo de 10 empleados y luego mostrarlos por pantalla. Informar cu%cl es el mayor sueldo.\n\n", 160);
    int sueldos[10];
    cargarVectorSueldoEmpleados(sueldos, 10);
    mostrarVectorSueldosEmpleados(sueldos,10);
    int posMayorSueldo = buscarMayor(sueldos,10,0);
    printf("\nEl mayor sueldo es %d\n\n", sueldos[posMayorSueldo]);

    system("pause");
    system("cls");

    /// Ejercicio 4

    printf("Se carga por teclado un vector con las edades de 20 personas. Imprimir por pantalla el promedio de edad y la edad de la persona m%cs joven\n", 160);

    int edades[20];
    cargarVectorEdades(edades, 20);
    int sumaEdades = sumaElementosVector(edades,20);
    int totalPersonas = 20;

    float promedio = (float)sumaEdades/(float)totalPersonas;
    printf("El promedio de edades es: %.2f\n", promedio);

    int menorEdad = buscarMenor(edades,20, 0);
    printf("La persona de menor edad tiene %d a%cos\n", edades[menorEdad], 164);

    system("pause");
    system("cls");

    ///Ejercicio 5

    printf("Se tienen 2 vectores, uno llamado vendedores [15] y otro llamado ventas [15], cada posici%cn de cada arreglo corresponde a la venta en d%clares realizada por cada vendedor. Se debe informar cual fue el vendedor que realizó la mayor venta y cu%cl la menor; adem%cs se debe convertir en el informe de d%clares a pesos (Valor del cambio: $140). Informar el valor en d%clares y en pesos.\n", 162,162, 160, 160, 162, 162);

    char vendedores[15][20] = {"Ana","Bruno","Carla","Daniel","Eliana","Facundo","Gonzalo","Juana","Ismael","Juan","Karen","Natalia","Lucia","Marcos","Pedro"};
    int ventas[15] = {45,98,23,49,13,39,100,43,22,189,5,98,70,65,29}; // venta en dolares
    int menorVentaEnPesos, menorVentaEnDolares, mayorVentaEnPesos, mayorVentaEnDolares;

    int posMenorVenta = buscarMenor(ventas,15,0);

    printf("Vendedor/a que realizo la MENOR venta =  %s\n", vendedores[posMenorVenta]);

    menorVentaEnDolares = ventas[posMenorVenta];
    menorVentaEnPesos = menorVentaEnDolares * 140;

    printf("Menor venta en d%clares : %d\n", 162,menorVentaEnDolares);
    printf("Menor venta en pesos : %d\n", menorVentaEnPesos);


    printf("\n\n");

    int posMayorVenta = buscarMayor(ventas,15,0);

    printf("Vendedor/a que realizo la MAYOR venta =  %s\n", vendedores[posMayorVenta]);

    mayorVentaEnDolares = ventas[posMayorVenta];
    mayorVentaEnPesos = mayorVentaEnDolares * 140;

    printf("Menor venta en d%clares : %d\n",162, mayorVentaEnDolares);
    printf("Menor venta en pesos : %d\n", mayorVentaEnPesos);

    system("pause");
    system("cls");

    /// Ejercicicio 6

    printf("Se tienen 2 vectores con “n” productos, uno con las cantidades[n] y el otro con los costos[n]. Determinar el precio total e informar todos aquellos que superen los $1000.\n");

    int vectorCantidades[5] = {2,400,3,5,100};
    int vectorCostos[5] = {10,35,20,15,50};
    int precioTotal[5];

    for( int i = 0; i < 5; i++)
    {
        precioTotal[i] = vectorCantidades[i] * vectorCostos[i];
        //printf("total %d", precioTotal[i]);

        if(precioTotal[i] > 1000)
        {
            printf("Productos que superan los $1000: %d\n", vectorCantidades[i]);
            printf("Costo: %d\n", vectorCostos[i]);
            printf("Total: %d\n", precioTotal[i]);
            printf("\n\n");
        }
    }

    system("pause");
    system("cls");

    /// Ejercicio 7
    printf("Una empresa de camiones necesita un algoritmo para controlar el egreso de sus 30 camiones desde la planta y la carga que transportan. Para ello, se necesita que por cada cami%cn se cargue por teclado su patente, el nombre y apellido del chofer, el tipo de carga que lleva (madera, yerba o t%c) y a qu%c hora egres%c. Adem%cs, la empresa necesita saber cuántos camiones cargaron t%c. Al final, debe mostrar todos estos datos por pantalla al usuario.\n", 162, 130, 162, 130, 160, 130);

    int dim = 30;
    char patentes[dim][10];
    char nombres[dim][20];
    char apellidos[dim][20];
    int cargas[dim]; // 1. Madera 2. Yerba 3. Te
    int horasEgresos[dim];
    int cont = 0;

    for( int i = 0; i < dim ; i++)
    {
        printf("Ingres el la patente: \n");
        fflush(stdin);
        scanf("%s", &patentes[i]);

        printf("Ingrese nombre: \n");
        fflush(stdin);
        scanf("%s", &nombres[i]);

        printf("Ingrese apellido: \n");
        fflush(stdin);
        scanf("%s", &apellidos[i]);

        printf("Indique la carga:\n 1-Madera \n 2-Yerba \n 3-Te\n");
        scanf("%d", &cargas[i]);

        printf("Ingrese hora de egreso: \n");
        scanf("%d", &horasEgresos[i]);

        if( cargas[i] == 3)
        {
            cont++;
        }

    }

    for( int i = 0; i < dim; i++)
    {

        printf("Patente: %s\n", patentes[i]);
        printf("Nombre y Apellido: %s %s \n", nombres[i], apellidos[i]);
        if( cargas[i] == 1)
        {
            printf("Carga: Madera\n");
        }
        else if(cargas[i] == 2 )
        {
            printf("Carga: Yerba\n");
        }
        else if (cargas[i] == 3)
        {
            printf("Carga: Te\n");
        }

        printf("Hora de Egreso: %d Hr\n", horasEgresos[i]);

        printf("\n\n");

    }

    printf("Camiones que cargaron TE: %d\n", cont);

    return 0;
}

///Funciones

/// Ejercicio 1

int cargarVectorNotas(int vec[], int dimension)
{
    char control = 's';
    int i = 0;

    while( control == 's' && i < dimension)
    {
        printf("Ingrese una nota:\n");
        fflush(stdin);
        scanf("%d", &vec[i]);

        printf("Desea agregar otra nota? S/N\n");
        fflush(stdin);
        scanf("%c", &control);

        i++;
    }

    return i; ///Elementos válidos del vector

}

int buscarMayor( int vec[], int validos, int pos)
{
    int posMayor = vec[pos];
    int mayor = vec[pos];
    for(int i = pos; i < validos; i++)
    {
        if( mayor < vec[i])
        {
            posMayor = i;
            mayor = vec[i];
        }
    }
    return posMayor;
}

int sumaElementosVector(int vec[], int validos)
{

    int suma = 0;
    for(int i = 0; i < validos; i++)
    {
        suma += vec[i];
    }
    return suma;
}

/// Ejercicio 2
int cantidadDeAprobados( int vec[], int validos)
{
    int contador = 0;
    for(int i = 0; i < validos; i++)
    {
        if( vec[i] >= 6)
        {
            contador++;
        }
    }
    return contador;
}

/// Ejercicio 3
void cargarVectorSueldoEmpleados(int vec[], int dimension)
{
    for( int i = 0; i < dimension; i++)
    {
        printf("Ingrese el suedo del empleado: \n");
        fflush(stdin);
        scanf("%i", &vec[i]);
    }
}

void mostrarVectorSueldosEmpleados(int vec[], int dimension)
{
    for( int i = 0; i < dimension; i++)
    {
        printf("Sueldo empleado %d: %d\n", i+1, vec[i]);
    }
}

/// Ejercicio 4

void cargarVectorEdades(int vec[], int dimension)
{
    for( int i = 0; i < dimension; i++)
    {
        printf("Ingresar edad: \n");
        fflush(stdin);
        scanf("%i", &vec[i]);
    }
}

int buscarMenor(int vec[], int dimension, int pos)
{

    int posMenor = vec[pos];
    int menor = vec[pos];
    for(int i = pos; i < dimension; i++)
    {
        if( menor > vec[i])
        {
            posMenor = i;
            menor = vec[i];
        }
    }
    return posMenor;
}

/// Ejercicio 5
void cargarArregloVendedorProducto(int ventas[15], char vendedores[15][30])
{

    int i = 0;

    while(i < 3)
    {
        printf("Ingrese nombre del vendedor:\n");
        fflush(stdin);
        scanf("%s", &vendedores[i]);

        printf("Ingrese valor de la venta en dolares: \n");
        fflush(stdin);
        scanf("%d", &ventas[i]);

        i++;
    }
}

/// Ejercicio 6

/*int cargarArrayCantidades( int cantidades[], int dimension)
{
    int i = 0;
    char control = 's';

    while(i < dimension && control == 's')
    {

        printf("Ingrese cantidad del producto: \n"),
               fflush(stdin);
        scanf("%d",&cantidades[i]);

        i++;

        printf("Desea ingresar mas datos? S/N\n");
        fflush(stdin);
        scanf("%c", &control);
    }
    return i;
}

int cargarArrayCostos ( int costos[], int dimension)
{

    int i = 0;
    char control = 's';
    while(i < dimension && control == 's')
    {
        printf("Ingres costo del producto:\n ");
        fflush(stdin);
        scanf("%d", &costos[i]);

        i++;

        printf("Desea ingresar mas datos? S/N\n");
        fflush(stdin);
        scanf("%c", &control);
    }
    return i;

}*/





