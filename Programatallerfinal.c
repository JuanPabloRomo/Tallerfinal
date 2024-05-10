#include <stdio.h>

int main(void) {
    
    float serviciosbasicos, arriendo, sueldo, gastoslogistica, gastosmercadeo, totalgastos;
    float ingresosmes, ventas, inversiones, totalingresos, ingresostotal;
    
    arriendo = 200;
    sueldo = 1500;
    
    totalgastos = serviciosbasicos + arriendo + sueldo + gastoslogistica + gastosmercadeo;

    float primerahorro;
    primerahorro = 0;

    for (int mes = 1; mes <= 6; mes++) {
        
        printf("\nMes %d\n", mes);
        
        printf("Ingrese los gastos de sevicios basicos: ");
        scanf("%f", &serviciosbasicos);

        printf("Ingrese los gastos de logistica: ");
        scanf("%f", &gastoslogistica);

        printf("Ingrese los gastos de mercadeo: ");
        scanf("%f", &gastosmercadeo);

        totalgastos = serviciosbasicos + arriendo + sueldo + gastoslogistica + gastosmercadeo;

        printf("Su total de gastos es: %.2f\n", totalgastos);

        printf("Ingrese los ingresos del mes:");
        scanf("%f", &ingresosmes);
        
        printf("Ingrese las ventas:");
        scanf("%f", &ventas);
        
        printf("Ingrese las inversiones:");
        scanf("%f", &inversiones);

        totalingresos = ingresosmes + ventas + inversiones;
        
        printf("Su ingreso es: %.2f\n", totalingresos);

        ingresostotal = totalingresos - totalgastos;

        printf("Su total de ingresos es. %.2f\n",ingresostotal);

   }

    return 0;
}