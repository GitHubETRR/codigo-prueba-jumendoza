#include <stdio.h>
#define PI 3.14

int main()
{
    float rad, alt, aret, areb, vol;
    printf("Bienvenido a nuestro programa para calcular area y voumen de un cilindro \n");
    printf("Por favor, ingrese el valor de su radio \n");
    scanf("%f", &rad);
    printf("Ahora, ingrese su altura \n");
    scanf("%f", &alt);
    areb=PI*rad*rad;
    aret=2*PI*rad*(alt+rad);
    vol=areb*alt;
    printf("su area es de %f y su volumen es %f", aret, vol);

    return 0;
}
