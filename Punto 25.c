#include <stdio.h>

int main()
{
    unsigned int hor, anti, suel;
    printf("Bienvenido a nuestro programa para calcular us sueldo \n");
    printf("Por favor, ingrese sus horas trabajadas \n");
    scanf("%d", &hor);
    printf("Ahora, ingrese su antiguedad \n");
    scanf("%d", &anti);
    suel=hor*4500+anti*0.02;
    printf("su sueldo es de %d pesos", suel);

    return 0;
}
