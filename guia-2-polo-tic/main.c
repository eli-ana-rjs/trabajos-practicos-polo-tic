#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numEjercicio;
    char control = 's';

    do
    {
        printf("Ingrese el n%cmero de ejercicio que desea realizar:\n1.Calcular sueldos de empleados\n2.Venta de canutillos y mostacillas al por mayor\n3.Calcular total de venta por kilo\n4.Calcular sueldo de empleado de una empresa\n", 163);
        scanf("%d", &numEjercicio);

        switch(numEjercicio)
        {
        case 1:
            printf("Una peque%ca despensa desea calcular los sueldos de sus empleados. Los puestos de los mismos pueden tener 3 categor%cas:\n1-repositor,\n2-cajero y\n3-supervisor.\n\n", 164, 161);
            printf("a. Los repositores cobran $32.335.\n");
            printf("b. Los cajeros cobran $38.630,89.\n");
            printf("c. Los supervisores cobran $45.560,20.\n\n");
            printf("Todos son sueldos en bruto, para cada uno de ellos hay que calcular las deducciones del 11%c de jubilaci%cn y 3%c de Obra Social.\n", 37,162, 37);
            printf("-Se necesita un algoritmo que, dependiendo el tipo de empleado del que se trate, calcule y muestre en pantalla el correspondiente Sueldo Neto (Con las deducciones) e informe tambi%cn los descuentos por jubilaci%cn y obra social.\n", 130, 162);

            int tipoDeEmpleado;
            float sueldoRepositor = 32335, sueldoCajero = 38630.89, sueldoSupervisor = 45560.20;
            float porcentajeJubilacion1 = 0.11, descuentoJubilacion1, porcentajeObraSocial1 = 0.03, descuentoObraSocial1, sueldoNeto1;

            printf("\n\nIngrese un numero de acuerdo la opcion correspondiente segun su puesto:\n 1. Repositor\n 2.Cajero\n 3.Supervisor\n\n");
            fflush(stdin);
            scanf("%d", &tipoDeEmpleado);

            if( tipoDeEmpleado == 1)
            {
                descuentoJubilacion1 = sueldoRepositor * porcentajeJubilacion1;
                descuentoObraSocial1 = sueldoRepositor * porcentajeObraSocial1;

                sueldoNeto1 = sueldoRepositor - descuentoJubilacion1 - descuentoObraSocial1;
                printf("Sueldo Neto: %.2f\nDescuento para la jubilaci%cn: %.2f\nDescuento de la Obra Social:%.2f\n\n", sueldoNeto1, 162, descuentoJubilacion1, descuentoObraSocial1);
            }
            else if( tipoDeEmpleado == 2)
            {
                descuentoJubilacion1 = sueldoCajero * porcentajeJubilacion1;
                descuentoObraSocial1 = sueldoCajero * porcentajeObraSocial1;

                sueldoNeto1 = sueldoCajero - descuentoJubilacion1 - descuentoObraSocial1;
                printf("Sueldo Neto: %.2f\nDescuento para la jubilaci%cn: %.2f\nDescuento de la Obra Social:%.2f\n\n", sueldoNeto1,162, descuentoJubilacion1, descuentoObraSocial1);
            }
            else if( tipoDeEmpleado == 3)
            {
                descuentoJubilacion1 = sueldoSupervisor * porcentajeJubilacion1;
                descuentoObraSocial1 = sueldoSupervisor * porcentajeObraSocial1;

                sueldoNeto1 = sueldoSupervisor - descuentoJubilacion1 - descuentoObraSocial1;
                printf("Sueldo Neto: %.2f\nDescuento para la jubilaci%cn: %.2f\nDescuento de la Obra Social:%.2f\n\n", sueldoNeto1,162, descuentoJubilacion1, descuentoObraSocial1);
            }

            system("pause");
            system("CLS");
            break;
        case 2:

            printf("2- Una mercer%ca vende canutillos y mostacillas al por mayor mediante su p%cgina web. Como se trata de una mercer%ca mayorista, solicita la cantidad de paquetes en cada venta y dependiendo de esta realiza los siguientes controles:\n\n",161, 160);
            printf("a. Si la cantidad de productos es menor a 5: Se debe emitir un mensaje indicando que no se permiten compras inferiores a 5 productos.\n");
            printf("b. Si la cantidad de productos es mayor o igual a 5 pero menor o igual a 15: Se debe emitir un mensaje que el costo de env%co es de $200.\n", 161);
            printf("c. Si la cantidad de productos es mayor o igual a 5 y es mayor a 15: Se debe emitir un mensaje de que el env%co es gratuito.\n", 161);
            printf("\n-Realizar el algoritmo necesario para llevar a cabo los 3 controles citados. \n\n");

            int cantidadDePaquetes;

            printf("Ingrese la cantidad de paquetes que desea comprar: \n");
            fflush(stdin);
            scanf("%d", &cantidadDePaquetes);

            if( cantidadDePaquetes > 0 && cantidadDePaquetes < 5)
            {
                printf("No se permiten compras inferiores a 5 productos\n");
            }
            else if( cantidadDePaquetes > 5 && cantidadDePaquetes <= 15)
            {
                printf("El costo de env%co es de $200\n", 161);
            }
            else if( cantidadDePaquetes > 15)
            {
                printf("El env%co es gratuito\n", 161);
            }
            system("pause");
            system("CLS");
            break;
        case 3:
            printf("Realizar un algoritmo que, al ingresar por teclado el precio por Kg y la cantidad en Kg adquirida por el cliente de tres productos (6 variables) muestre:\n\n");
            printf("a.- El monto total en pesos correspondiente a la compra de cada producto.\n");
            printf("b.- El total en pesos de la compra realizada por el cliente.\n");
            printf("c.- Si el total es superior a $100, hacer un descuento del 10%c. Informar el nuevo monto.\n\n", 37);

            int cantidadProd1, cantidadProd2, cantidadProd3 ;
            float precioProd1, precioProd2, precioProd3,montoProd1, montoProd2, montoProd3, totalCompra,descuento = 0.1, totalConDescuento;

            printf("Ingrese precio por kg del producto: \n");
            fflush(stdin);
            scanf("%f", &precioProd1);
            printf("Ingrese cantidad en Kg del producto: \n");
            fflush(stdin);
            scanf("%d", &cantidadProd1);

            printf("Ingrese precio por kg del producto: \n");
            fflush(stdin);
            scanf("%f", &precioProd2);
            printf("Ingrese cantidad en Kg del producto: \n");
            fflush(stdin);
            scanf("%d", &cantidadProd2);

            printf("Ingrese precio por kg del producto: \n");
            fflush(stdin);
            scanf("%f", &precioProd3);
            printf("Ingrese cantidad en Kg del producto: \n");
            fflush(stdin);
            scanf("%d", &cantidadProd3);

            montoProd1 = (float)cantidadProd1 * (float) precioProd1;
            printf("Valor total del producto 1: %.2f\n", montoProd1);
            montoProd2 = cantidadProd2 * precioProd2;
            printf("Valor total del producto 2: %.2f\n", montoProd2);
            montoProd3 = cantidadProd3 * precioProd3;
            printf("Valor total del producto 3: %.2f\n\n", montoProd3);

            totalCompra = montoProd1 + montoProd2 + montoProd3;

            printf("\n\n");

            if ( totalCompra > 100 )
            {
                totalConDescuento = totalCompra - (totalCompra * descuento);
                printf("Su compra es mayor a $100, tiene un 10 %co de descuento. El total a pagar es: %.2f\n\n",37,  totalConDescuento);
            }
            else
            {
                printf("Total de la compra: %.2f\n\n", totalCompra);
            }
            system("pause");
            system("CLS");
            break;
        case 4:
            printf("\nRealizar un algoritmo que permita calcular el sueldo de un determinado empleado de una empresa. Se debe permitir ingresar por teclado el DNI del empleado y la categor%ca a la que pertenece; el programa deber%c mostrar el sueldo NETO\n",161, 160);
            printf("(el bruto menos todos los descuentos) del empleado, su DNI y la categor%ca a la que pertenece (Debe imprimir el nombre de la categor%ca a la que pertenece). Tener en cuenta que las categor%cas tienen las siguientes cuestiones:\n\n", 161, 161, 161);
            printf("a. Categor%ca 0: Maestranza. Sueldo Bruto de $23600. Descuento de jubilaci%cn 11%c. Descuento de Obra Social 3 %c.\n", 161,162, 37, 37);
            printf("b. Categor%ca 1: Administraci%cn. Sueldo Bruto de $35800. Descuento de Jubilaci%cn 11 porciento. Descuento de Obra social 5 %c.\n",161, 162, 162, 37);
            printf("c. Categor%ca 2: Gerencia. Sueldo Bruto de $60420. Descuento de Jubilaci%cn 11 %c. Descuento de Obra Social 5 %c. Descuento de club 4 %c.\n\n",161, 162, 37, 37, 37);

            int opcion,DNI;
            float descuentoJubilacion, descuentoObraSocial, descuentoClub, sueldoNeto,sueldoBruto;

            printf("Ingrese su DNI: \n");
            fflush(stdin);
            scanf("%d", &DNI);

            printf("Indique la categor%ca a la que perteneces: \n1. Maestranza\n2. Adminitraci%cn\n3. Gerencia\n\n",161, 162);
            fflush(stdin);
            scanf("%d", &opcion);

            printf("\n");

            switch(opcion)
            {
            case 1:

                sueldoBruto = 23600;
                descuentoJubilacion = sueldoBruto * 0.11;
                descuentoObraSocial = sueldoBruto * 0.03;
                sueldoNeto = sueldoBruto - descuentoJubilacion - descuentoObraSocial;
                printf("DNI: %d\n", DNI);
                printf("Categor%ca 0\n", 161);
                printf("Sueldo Neto: %.2f\n", sueldoNeto);
                break;
            case 2:
                sueldoBruto = 35800;
                descuentoJubilacion = sueldoBruto * 0.11;
                descuentoObraSocial = sueldoBruto * 0.05;
                sueldoNeto = sueldoBruto - descuentoJubilacion - descuentoObraSocial;
                printf("DNI: %d\n", DNI);
                printf("Categor%ca 1\n", 161);
                printf("Sueldo Neto: %.2f\n", sueldoNeto);
                break;
            case 3:
                sueldoBruto = 60420;
                descuentoJubilacion = sueldoBruto * 0.11;
                descuentoObraSocial = sueldoBruto * 0.05;
                descuentoClub = sueldoBruto * 0.04;
                sueldoNeto = sueldoBruto - descuentoJubilacion - descuentoObraSocial - descuentoClub;
                printf("DNI: %d\n", DNI);
                printf("Categor%ca 2\n", 161);
                printf("Sueldo Neto: %.2f\n", sueldoNeto);
                break;
            default:
                printf("No existe la categor%ca seleccionada. Ingrese una opci%cn válida. \n", 161, 162, 160);
            }
            system("pause");
            system("CLS");

            break;
        default:
            printf("Ingrese un n%cmero de ejercicio v%clido\n\n",163,  160);

        }
        printf("Desea ver otro ejercicio? S/N\n\n");
        fflush(stdin);
        scanf("%c", &control);

        system("pause");
        system("CLS");
    }
    while(control == 's');

    return 0;
}
