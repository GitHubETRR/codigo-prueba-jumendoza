#include <stdio.h>
#include <math.h>

int main()
{
    float cat1, cat2, hip;
    printf("Bienvenido a nuestro prgrama, por favor ingrese el valor de su primer cateto \n");
    scanf("%f", &cat1);
    printf("Ahora, ingrese el valor de su segundo cateto \n");
    scanf("%f", &cat2);
    hip=sqrt(cat1*cat1+cat2*cat2);
    printf("su hipotenusa es de %f", hip);
    
    return 0;
}
