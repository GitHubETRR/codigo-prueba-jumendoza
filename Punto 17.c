#include <stdio.h>

int main()
{
    unsigned int hor1, min1, seg1, hor2, min2, seg2, hor3, min3, seg3;
    printf("Bienvenido a nuestro prorama para sumar horarios \n");
    printf("ingrese su primer horario en horas, minutos y segundos \n");
    scanf("%d %d %d", &hor1, &min1, &seg1);
    printf("Ahora ingrese su segundo horario \n");
    scanf("%d %d %d", &hor2, &min2, &seg2);
    hor3=hor1+hor2;
    min3=min1+min2;
    seg3=seg1+seg2;
    if(seg3>59){
        seg3=seg3-60;
        min3=min3+1;
    }
    if(min3>59){
        min3=min3-60;
        hor3=hor3+1;
    }
    printf("su horario final es de %d hora/s, %d minuto/s y %d segundo/s", hor3, min3, seg3);

    return 0;
}
