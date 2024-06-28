#include <stdio.h>

int main()
{
    int cel, far;
    printf("Bienvenido a nuestro programa para pasar celcius a fahrenheit. Por favor, ingrese su temperatura en Celcius");
    scanf("%d", &cel);
    far=cel*1.8+32;
    printf("su temperatura equivale a %d grados Fahrenheit", far);

    return 0;
}
