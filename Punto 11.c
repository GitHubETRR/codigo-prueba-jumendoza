#include <stdio.h>

int main()
{
    float var1, pulg, pie;
    printf("Bienvenido a nuestro programa para pasar de centimetros a pies y pulgadas.");
    printf("Por favor, ingrese su numero en centimetros \n");
    scanf("%f", &var1);
    pie=var1/30,48;
    pulg=var1/2,54;
    printf("Su numero vale %f pulgadas y %f pies.", pulg, pie);
    return 0;
}
