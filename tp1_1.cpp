#include <stdio.h>

int main(){
    
    printf("Hola Mundo");

    int a = 5;
    int *pPunt = &a;
    printf("\nEjercicio 3e) \n");
    printf("\nEl contenido del puntero es: %d", *pPunt);
    printf("\nEl direccion de memoria almacenada de la variable es: %d", &a);
    printf("\nEl direccion de memoria almacenada del puntero es: %d", pPunt);
    printf("\nEl  tamanio de la memoria utilizado por la variable es de: %d Bytes", sizeof(a));
    return 0;
}