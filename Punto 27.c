#include <stdio.h>

int main()
{
    int num, cif1, cif2, cif3;
    printf("Bienvenido a nuestro programa. Por favor ingrese un numero entero de tres cifras \n");
    scanf("%d", &num);
    if (num>999 || num<100){
        printf("Número no permitido \n");
    }
    else{
        cif3=num%10;
        cif2=((num%100)-cif3)/10;
        cif1=(num-cif2-cif3)/100;
        printf("Su primera cifra es %d, su segunda cifra es %d y su tercera cifra es %d", cif1, cif2, cif3);
    }

    return 0;
}
