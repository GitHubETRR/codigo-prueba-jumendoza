int main()
{
    int A, B;
    printf("Bienvenido a nuestro programa mayorDeDos. Por favor ingrese su variable A \n");
    scanf("%d", &A);
    printf("Ahora, ingrese su variable B \n");
    scanf("%d", &B);
    mayorDeDos (A, B);

    return 0;
}
int mayorDeDos (int A, int B)
{
    if (A>B){
        printf("Su variable A es mayor que la B");
    }
    else{
        printf("Su variable B es mayor que la A");
    }
    return 0;
}
