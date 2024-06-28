#include <stdio.h>

int main()
{
    float var1, var2, var3, var4;
    printf("Bienvenido a nuestro programa para calular e angulo que le falta a su triangulo \n");
    printf("Por favor, ingrese el valor de su primer angulo \n");
    scanf("%f", &var1);
    printf("Ahora, ingrese el valor de su segundo angulo \n");
    scanf("%f", &var2);
    if((var1+var2)>180){
        printf("sus angulos no forman un triangulo");
    }
    else{
        var3=var1+var2;
        var4=180-var3;
        printf("su tercer angulo es de %f grados", var4);
    }

    return 0;
}
