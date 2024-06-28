#include <stdio.h>
#include <math.h>

int main()
{
    float tri, ang, ulo, are, sus;
    printf("Bienvenido a nuestro programa para calcular area de triangulos, por favor ingrese el valor de su primer lado \n");
    scanf("%f", &tri);
    printf("Ahora, ingrese su segundo lado \n");
    scanf("%f", &ang);
    printf("Ingrese el valor de su tercer lado \n");
    scanf("%f", &ulo);
    sus=(tri+ang+ulo)/2;
    are=sqrt(sus*(sus-tri)*(sus-ang)*(sus-ulo));
    printf("su area es de %f", are);

    return 0;
}
