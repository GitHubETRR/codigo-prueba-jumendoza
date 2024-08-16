#include <stdio.h>

int main()
{
    int matriz[6][3]={{1,2,4},{2,3,4},{1,3,9},{3,4,6}};
    int martiz[6][3]={0};
    for (int i=0; i<3; i++){
        for (int j=0; j<6; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf(" \n ");
    }
    return 0;
}
