#include <stdio.h>

int main()
{
    int var1, var2;
    printf("Bienvenido a nuestro programa. Por favor ingrese un número \n");
    scanf("%d", &var1);
    printf("Ahora, ingrese su segundo número \n");
    scanf("%d", &var2);
    if (var1 == var2){
        printf("sus numeros son iguales");
    }
    else{
        printf("sus numeros no son iguales");
    }
    return 0;
}
