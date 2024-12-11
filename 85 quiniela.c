#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define QUINIELA 10

int main() {
    int qui[QUINIELA];
    int posicion, i;
    srand(time(NULL));
    for (i = 0; i < QUINIELA; i++) {
        qui[i] = rand() % 100;
    }
    do {
        printf("por favor, ingrese la posición del número que quiere (0-9): ");
        scanf("%d", &posicion);

        if (posicion < 0 || posicion >= QUINIELA) {
            printf("Posición no válida. Debe ser entre 0 y 9.\n");
        }
    } while (posicion < 0 || posicion >= QUINIELA);
    printf("El número en la posición %d es: %d\n", posicion, qui[posicion]);

    return 0;
}
