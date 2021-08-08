#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numEjercicio;
    char control = 's';
    do
    {
        printf("Seleccione el n%cmero de ejerciccio:\n", 163);
        printf("1. Mostrar 3 n%cmeros por pantalla\n2. Ingresar 2 n%cmeros y sumarlos\n3. Calcular potencia\n4. Es par o impar\n5. Intercambiar valores de dos variables\n6. Indice masa corporal\n7. Calcular porcentaje\n8. Calcular IVA\n9. Calcular promedio\n10. Calcular %crea de un tri%cngulo\n\n", 163, 163,160, 160);
        scanf("%d", &numEjercicio);
        switch(numEjercicio)
        {
        case 1:
            printf("Ejercicio 1: Una persona decidio realizar un algoritmo para mostrar 3 n%cmeros por pantalla. Decidio llamar a las variables num1, num2, num3 y colocarles los valores 5, 3 y 7.\nSin embargo no sabe de que tipos de datos deber%can ser sus tres vaiables ni tampoco como asignar dichos valores.Realizar un algoritmo que declare las variables, les asigne los valores que se necesitan y mostrar por pantalla\n\n", 163, 161);

            int num1 = 5, num2 = 3, num3 = 7 ;
            printf(" num1 = %d \n num2 = %d \n num3 = %d \n\n", num1, num2, num3);

            system("pause");
            system("cls");

            break;

        case 2:
            printf("Ejercicio 2: Escribir un algoritmo que permita ingresar por teclado dos n%cmeros e imprima su suma\n\n", 163);

            int valor1;
            int valor2;
            int suma = 0;

            printf("Ingrese un n%cmero: \n", 163);
            fflush(stdin);
            scanf("%d", &valor1);

            printf("Ingrese otro n%cmero: \n", 163);
            fflush(stdin);
            scanf("%d", &valor2);

            suma = valor1 + valor2;
            printf("El resultado de la suma de los dos n%cmeros ingresados es: %d\n\n", 163,suma);

            system("pause");
            system("cls");
            break;

        case 3:
            printf("Ejercicio 3: Realizar un  algoritmo que permita a un usuario ingresar por teclado la BASE y el EXPONENTE de una potencia y que el resultado sea mostrado por pantalla \n\n");

            int base, exponente, acum = 1;

            printf("Ingrese un n%cmero (BASE de la potencia):\n", 163);
            fflush(stdin);
            scanf("%d", &base);

            printf("Ingrese el valor del EXPONENTE:\n");
            fflush(stdin);
            scanf("%d", &exponente);

            for(int i = 1; i <= exponente; i++)
            {
                acum = acum * base;
            }

            printf("El resultado de la potencia es: %d\n\n", acum);

            system("pause");
            system("cls");

            break;

        case 4:
            printf("Ejercicio 4: Realizar un algoritmo que permita a un usuario ingresar por teclado un n%cmero del 1 al 100 y que determine si es un numero par o impar \n\n", 163);

            int number;
            printf("Ingrese un n%cmero entre 1 y 100\n\n", 163);
            scanf("%d", &number);

            if( number >= 1 && number <= 100)
            {
                if ( number % 2 == 0 )
                {
                    printf("El n%cmero %d es PAR\n\n", 163, number);
                }
                else
                {
                    printf("El n%cmero %d es IMPAR\n\n", 163, number);
                }
            }
            else
            {
                printf("N%cmero no valido. Debe ingreser un n%cmero entre 1 y 100\n\n", 163, 163);
            }

            system("pause");
            system("cls");
            break;
        case 5:
            printf("Ejercicio 5: Realizar un algoritmo que permita intercambiar el valor de dos variables. Por ejemplo, si la variable1 vale 5 y la variable2 vale 12, hacer que la variable1 valaga 12 y la variable2 valga 5. (Tener en cuenta que al asignar un valor a una variable se sobrescribe el valor anterior\n\n");

            int var1 = 12,var2 = 5, aux;

            printf("\nAntes del intercambio:\nvar1 = %d\nvar2 = %d\n", var1, var2);
            aux = var1;
            var1 =  var2;
            var2 = aux;
            printf("\nDespu%cs del intercambio:\nvar1 = %d\nvar2 = %d\n", 130, var1, var2);


            system("pause");
            system("cls");
            break;
        case 6:
            printf("\nEjercicio 6: Una cl%cnica de obesidad necesita un porgrama que sea capaz de calcular el %cndice de masa corporal de una persona que requiera atenci%cn. Para ello, tener en cuenta que la f%crmula para el IMC es Peso/(estatura)%c\n\n", 161, 161, 162, 162, 253);

            float altura, peso, IMC;

            printf("\nIngrese su peso en Kilogramos: \n\n");
            fflush(stdin);
            scanf("%f", &peso);
            printf("\nIngrese su altura en m. Ej: 1.65 m\n\n");
            fflush(stdin);
            scanf("%f", &altura);

            IMC = (float)peso/(float)(altura*altura);

            printf("\nSu IMC es: %.2f\n", IMC);

            system("pause");
            system("cls");
            break;
        case 7:
            printf("\nEjercicio 7: Una estudiante esta dando sus primeros pasos en la programaci%cn y quiere realizar un algoritmo que permita calcular cualquier porcentaje de un n%cmero. Para ello necesita que el usuario ingrese por teclado el n%cmero a calcular el porcentaje (por ejemplo 2500) y tambien el porcentaje que se desea calcular (por ejemplo, si quiere calcular 10%c deberia ingresar 0,10). A partir de estos valores, necesita que el algoritmo calcule el porcentaje (multiplicar el primer numero por el valor del porcentaje), lo guarde en una variable y se muestre por pantalla. %cPodrias ayudarla a realizar el algoritmo? \n", 162,163,163, 37, 168);

            int numero, porcentaje;
            float resultado;

            printf("\nIngresar un n%cmero: \n\n", 163);
            fflush(stdin);
            scanf("%d", &numero);
            printf("\nIngrese el porcentaje de desea calcular: \n");
            fflush(stdin);
            scanf("%d", &porcentaje);

            resultado = (numero * porcentaje) / 100;

            printf("\nEl %d %c de %d es = %.2f\n\n", porcentaje, 37, numero, resultado);

            system("pause");
            system("cls");
            break;
        case 8:
            printf("\nEjercicio 8: Realizar un algoritmo que calcule el IVA de un producto. Para esto, el usuario debe poder ingresar por teclado el valor del producto y el algoritmo debe informarle por pantalla que monto equivale al IVA. Recordar que el IVA es igual al 21% (0,21). \n");

            float precioProducto, ivaFinal, iva = 0.21;

            printf("\nIngresar el precio del producto: \n");
            fflush(stdin);
            scanf("%f", &precioProducto);

            ivaFinal = precioProducto * iva;

            printf("\nEl IVA del producto es: %.f\n\n", ivaFinal);

            system("pause");
            system("cls");
            break;
        case 9:
            printf("\nEjercicio 9: Realizar un algoritmo que permita a un profesor calcular el promedio de un alumno. Para esto, el algoritmo debe permitir ingresar las 4 notas de un alumno (por ejemplo, 8, 7, 9.50 y 10), luego calcular el promedio de las mismas y mostrar el resultado por pantalla \n");

            float nota1, nota2,nota3,nota4,sumaNotas, promedio;

            printf("\nIngrese la primer nota: \n");
            fflush(stdin);
            scanf("%f", &nota1);

            printf("\nIngrese la segunda nota: \n");
            fflush(stdin);
            scanf("%f", &nota2);

            printf("\nIngrese la tercer nota: \n");
            fflush(stdin);
            scanf("%f", &nota3);

            printf("\nIngrese la cuarta nota: \n");
            fflush(stdin);
            scanf("%f", &nota4);

            sumaNotas = nota1 + nota2 + nota3 + nota4;
            promedio = sumaNotas / 4;

            printf("\nEl promedio de notas del alumno es: %.2f\n\n", promedio);

            system("pause");
            system("cls");
            break;
        case 10:
            printf("\nEjercicio 10: Realizar un algoritmo que permita calcular el %crea de un tri%cngulo. Se recuerda que la f%crmula para calcular el %crea de un tri%cngulo es: (base * altura) / 2. Se debe permitir al usuario ingresar la base y la altura, mientras que el algoritmo debe calcular el %crea y mostrar el resultado por pantalla.  \n", 160, 160, 162, 160,160, 160 );

            float baseT, alturaT, area;

            printf("Ingrese el valor de la BASE del tri%cngulo: \n", 160);
            fflush(stdin);
            scanf("%f", &baseT);

            printf("Ingrese el valor de la ALTURA del tri%cngulo: \n", 160);
            fflush(stdin);
            scanf("%f", &alturaT);

            area = (baseT*alturaT)/2;

            printf("El %crea del tri%cngulo es: %.2f\n\n",160, 160, area);

            system("pause");
            system("cls");
            break;

        default:
            printf("La opcion ingresada no es valida. Debe ingresar un numero entre 1 y 10\n\n");

        }

        printf("\nDesea ver otro ejercicio? S/N\n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(control == 's');

    return 0;
}
