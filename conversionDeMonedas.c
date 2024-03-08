#include <stdio.h>

#define TC_DOLAR_GTQ 7.81  //Tipo de cambio: 1 USD = 7.81 GTQ
#define TC_EURO_GTQ 8.51 //Tipo de cambio 1 Euro = 8.51 GTQ

int main() {
    int opcion;
    float cantidad;

    printf("Bienvenidos al conversor de moneda de Dolares y Euros\n");
    printf("1. Convertir de Dolares a Quetzales\n");
    printf("2. Convertir de Quetzales a Dolares\n");
    printf("3. Convertir de Euros a Quetzales\n");
    printf("4. Convertir de Quetzales a Euros\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Ingrese la cantidad en Dolares: ");
        scanf("%f", &cantidad);
        printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_DOLAR_GTQ);
        break;
    case 2:
        printf("Ingrese la cantidad en Quetzales: ");
        scanf("%f", &cantidad);
        printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_DOLAR_GTQ);
        break;
    case 3:
        printf("Ingrese la cantidad en €uros: ");
        scanf("%f", &cantidad);
        printf("%.2f €uros equivale a %.2f GTQ\n", cantidad, cantidad * TC_EURO_GTQ);
        break;
    case 4:
        printf("Ingrese la cantidad en Quetzales: ");
        scanf("%f", &cantidad);
        printf("%.2f GTQ equivale a %.2f €uros\n", cantidad, cantidad / TC_EURO_GTQ);
        break;
    default:
        //printf("Moneda ingresada invalida, por favor ingrese una cantidad en moenda!!!...");
        break;
    }
}