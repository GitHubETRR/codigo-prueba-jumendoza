#include <stdio.h>

int main()
{
    int num, sal;
    printf("Bienvenido a nuestro programa, Por favor, ingrese un número entero de dos o mas cifras \n");
    scanf("%d", &num);
    sal=num%10;
    printf("su ultima cifra es %d", sal);

    return 0;
}
