#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numEjercicio;
    char control = 's';

    do
    {
        printf("Seleccione el ejercicio que desea ver:\n1.Mostrar los n%cmeros del 1 al 35\n2.Mostrar los n%cmeros que desee, m%cximo 100.\n3.Mostrar los n%cmeros pares del 200 a 250\n4.Cuenta regresiva para el a%co nuevo\n5.Prestadora de  servicios de internet\n6.Carrera automovilistica\n7.Club\n8.Censo\n\n", 163, 163, 160, 163, 164);
        fflush(stdin);
        scanf("%d", &numEjercicio);

        switch(numEjercicio)
        {
        case 1:

            printf("Realizar un algoritmo que muestre en pantalla los n%cmeros del 1 al 35 (uno abajo del otro). Utilizar para esto alguna estructura repetitiva.\n", 163);

            for(int i = 1 ; i <= 35; i++)
            {
                printf("%d\n", i);
            }

            system("PAUSE");
            system("CLS");
            break;
        case 2:
            printf("Realizar un algoritmo que dado por teclado un l%cmite num%crico (por ejemplo 100) muestre en pantalla todos los n%cmeros hasta ese l%cmite (empezando por 1).\n", 161, 130, 163, 161);

            int limite;
            printf("Ingrese un valor l%cmite: \n", 161);
            fflush(stdin);
            scanf("%d", &limite);

            for( int i = 1 ; i <= limite; i++)
            {
                printf("%d\n", i);
            }
            system("PAUSE");
            system("CLS");
            break;
        case 3:
            printf("Realizar un algoritmo que muestre por pantalla los n%cmeros del 200 al 250 saltando de 2 en dos. La secuencia deber%ca ser: 200%c202%c204%cetc.\n", 163, 161, 95, 95, 95);

            for(int i = 200; i <=250; i+=2)
            {
                printf("%d\n", i);
            }
            system("PAUSE");
            system("CLS");
            break;
        case 4:
            printf("Realizar un algoritmo que lleve a cabo la cuenta regresiva para el a%co nuevo. La cuenta debe comenzar en 10 y terminar en 1.\n", 164);

            for(int i = 10; i >=1; i--)
            {
                printf("%d\n", i);
            }
            system("PAUSE");
            system("CLS");
            break;
        case 5:
            printf("Un gerente de una empresa prestadora de servicios de internet necesita un algoritmo que permita realizar el c%clculo del monto a pagar de la factura de consumo de internet de 5 clientes de una empresa. Para ello,  el algoritmo debe solicitar por teclado dos datos: DNI del cliente y tipo de servicio. Los tipos de servicio son 3:\n", 160);
            printf("1. Internet 30 megas (El servicio cuesta: $750)\n");
            printf("2. Internet 50 megas (El servicio cuesta: $1100)\n");
            printf("3. Internet 100 megas (El servicio cuesta: $1500 %c menos 5%c de descuento por promoci%cn)\n",45, 37, 162);
            printf("El algoritmo debe poder calcular el monto a pagar (dependiendo del tipo de servicio con el que cuente el cliente) e informar por pantalla el dni del mismo junto con el monto a pagar y el n%cmero de servicio con el que cuenta.\n\n", 163);

            int dni, index = 0, tipoDeServicio, montoAPagar;
            float montoConDescuento;

            while( index < 5)
            {
                printf("Ingrese su DNI: \n");
                scanf("%d", &dni);

                printf("Ingrese el tipo de servicio:\n1. Internet 30 megas\n2. Internet 50 megas\n3. Internet 100 megas\n");
                scanf("%d", &tipoDeServicio);

                if( tipoDeServicio == 1)
                {
                    montoAPagar = 750;
                    printf(" DNI = %d\n Tipo de Servicio = %d\n Monto a Pagar = $ %d\n", dni, tipoDeServicio, montoAPagar);
                }
                else if(tipoDeServicio == 2)
                {
                    montoAPagar = 1100;
                    printf(" DNI = %d\n Tipo de Servicio = %d\n Monto a Pagar = $ %d\n\n", dni, tipoDeServicio, montoAPagar);
                }
                else if ( tipoDeServicio == 3)
                {
                    montoAPagar = 1500;
                    montoConDescuento = 1500 - 1500 * 0.05;
                    printf(" DNI = %d\n Tipo de Servicio = %d\n Monto a Pagar = %.2f\n\n", dni, tipoDeServicio, montoConDescuento);
                }

                index++;
            }
            system("PAUSE");
            system("CLS");
            break;
        case 6:
            printf("En una carrera automovil%cstica se desea calcular cu%cl es el menor tiempo realizado entre cada uno de sus 12 competidores. Para ello, se pide un algoritmo que sea capaz de permitir el ingreso por teclado del n%cmero de veh%cculo y el  tiempo (en segundos) de cada participante. Una vez encontrado el que realiz%c el mejor tiempo, se debe informar por pantalla tanto el n%cmero de vehículo que utilizaba como el tiempo que llev%c a cabo.\n", 161, 160, 163, 161, 162, 163, 162);

            int numVehiculo, tiempo, competidores = 12, menorTiempo = -1, menorVehiculo = -1;

            for( int i = 0; i < competidores; i++)
            {
                printf("Ingrese numero de veh%cculo: \n", 161);
                scanf("%d", &numVehiculo);

                printf("Ingrese el tiempo en segundos: \n");
                scanf("%d", &tiempo);

                // primer condicion para inicializar las variables. Segunda condicion para buscar el mejero tiempo que corresponde al menor
                if( menorTiempo == -1 || menorTiempo > tiempo)
                {
                    menorTiempo = tiempo;
                    menorVehiculo = numVehiculo;
                }
            }

            printf("El veh%cculo %d obtuvo el mejor tiempo con %d segundos\n\n", 161, menorTiempo, menorVehiculo);
            system("PAUSE");
            system("CLS");
            break;
        case 7:
            printf("En un club se registran, entre otros datos, para cada uno de los socios: N%mero de socio, edad, tipo de deporte que practica (1 tenis, 2 rugby, 3 voley, 4 hockey, 5 f%ctbol). Realizar un algoritmo que permita informar cuantos socios  practican tenis y cu%cntos f%ctbol y el promedio de edad de los jugadores por deporte\n", 163, 163, 160, 163);

            char mander = 's';
            int numSocio, edad, deporte, tenis = 0,rugby = 0, voley = 0, hockey = 0, futbol = 0, sumaT = 0, sumaR = 0, sumaV = 0, sumaH = 0, sumaF = 0;
            float promEdadTenis, promEdadVoley, promEdadHockey, promEdadRugby, promEdadFutbol;

            while( mander == 's' )
            {

                printf("Ingrese n%cmero de socio/a: \n", 163);
                scanf("%d", &numSocio);

                printf("Ingrese edad: \n");
                scanf("%d", &edad);

                printf("Ingrese el deporte que hace:\n 1.Tenis \n 2.Rugby \n 3.Voley \n 4.Hockey \n 5.F%ctbol\n", 163);
                scanf("%d", &deporte);

                if( deporte == 1)
                {
                    sumaT+= edad;
                    tenis++;
                }
                else if( deporte == 2)
                {
                    sumaR+= edad;
                    rugby++;
                }
                else if ( deporte == 3)
                {
                    sumaV+= edad;
                    voley++;
                }
                else if ( deporte == 4)
                {
                    sumaH+= edad;
                    hockey++;
                }
                else if( deporte == 5)
                {
                    sumaF+= edad;
                    futbol++;
                }
                else
                {
                    printf("Ingrese una opcion valida\n");
                }

                printf("Desea agregar otro socio: S/N\n");
                fflush(stdin);
                scanf("%c", &mander);
            }

            // Tiene un bug -> cuando no se ingresas socios devuelve un numero raro porque no puede calcular promedio de edades
            promEdadTenis = (float)sumaT/(float)tenis;
            printf("Promedio edades socios que juegan tenis: %.2f\n", promEdadTenis);

            promEdadVoley = (float)sumaV/(float)voley;
            printf("Promedio edades socios que juegan voley: %.2f\n", promEdadVoley);

            promEdadRugby = (float)sumaR/(float)rugby;
            printf("Promedio edades socios que juegan rugby: %.2f\n", promEdadRugby);

            promEdadHockey = (float)sumaH/(float)hockey;
            printf("Promedio edades socios que juegan tenis: %.2f\n", promEdadHockey);

            promEdadFutbol = (float)sumaF/(float)futbol;
            printf("Promedio edades socios que juegan tenis: %.2f\n", promEdadFutbol);

            printf("N%cmero de socios que practican tenis: %d\n",163, tenis);
            printf("N%cmero de socios que practican f%ctbol: %d\n",163,163, futbol);

            system("PAUSE");
            system("CLS");
            break;
        case 8:
            printf("Se realiz%c un censo provincial y se desea procesar la informaci%cn obtenida en dicho censo.", 162,162);
            printf("De cada una de las personas censadas se tiene la siguiente informaci%cn: n%cmero de documento, edad y sexo (F o M).", 162, 163);
            printf("Realizar un algoritmo que lea los datos de cada persona censada (para fin de ingreso de datos, ingresar 0 (cero) como numero de documento) e informe: ");
            printf("Cantidad total de personas censadas, cantidad de varones y cantidad de mujeres, porcentaje de varones cuya edad var%ca entre 16 y 65 a%cos respecto del total de varones, mostrar datos de la persona que registra la mayor edad.\n",161, 164);

            int dniPersona, edadPersona, contador = 0, femenino = 0, masculino = 0, count = 0;
            char sexo,controlar ='s';
            float porcentajeVaronesEntre16y65anios;

            while(controlar == 's')
            {
                printf("Ingrese DNI: \n");
                fflush(stdin);
                scanf("%d", &dniPersona);

                printf("Ingrese sexo: F (femenino) o M (masculino)\n");
                fflush(stdin);
                scanf("%c", &sexo);

                printf("Ingrese su edad: \n");
                fflush(stdin);
                scanf("%d", &edadPersona);

                printf("Desea agregar los datos de otra persona: S:si / N: no\n");
                fflush(stdin);
                scanf("%c", &controlar);

                contador++;

                if( sexo == 'F')
                {
                    femenino++;
                }
                else if( sexo == 'M')
                {
                    if(edad >= 16 && edadPersona <= 65)
                    {
                        count++;
                    }
                    masculino++;
                }
            }

            printf("La cantidad de personas censadas en total fue de %d\n", contador);
            printf("Cantidad de mujeres censadas: %d\n", femenino);
            printf("Cantidas de varones censados: %d\n", masculino);
           // printf("coutn %d\n", count);

            porcentajeVaronesEntre16y65anios = ((float)count/(float)masculino)*100;
            printf("El porcentaje de varones que tienen entre 16 y 65 a%cos es: %.2f %c\n", 164, porcentajeVaronesEntre16y65anios, 37);
            system("PAUSE");
            system("CLS");
            break;
        default:
            printf("Debe ingresar un numero del 1 al 8\n\n");
        }
        printf("Si desea ver otro ejercicio presione S, de lo contrario presione cualquier tecla para salir\n\n");
        fflush(stdin);
        scanf("%c", &control);

    }
    while(control == 's');

    return 0;
}
