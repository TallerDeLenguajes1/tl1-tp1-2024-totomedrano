#include <stdio.h>

void cuadradoNumero();
void Invertir(int a, int b);
void orden(int a,int b);
int main(){

    int a,b;

    printf("\n--- ELEVACION AL CUADRADO ---\n");
    cuadradoNumero();
    
    printf("\n---Puntos D y E ---\n");

    printf("Ingrese el valor de a: \n");
    scanf("%d", &a);

    printf("Ingrese el valor de b: \n");
    scanf("%d", &b);

    Invertir(a, b);
    orden(a,b);
    return 0;
}


void cuadradoNumero(){
    int numero;
    printf("Ingrese el numero que desea elevar al cuadrado: \n");
    scanf("%d", &numero);

    int cuadrado = numero * numero;

    printf("\nEl cuadrado de %d es: %d.", numero, cuadrado);
    printf("\nLa direccion de %d es %d.", numero,&numero);
}

void Invertir(int a, int b){

     printf("\n--- INVERTIR ---\n");
    int aux;
    aux = a;
    a = b;
    b = aux;

    printf("\nEl valor de a es: %d", a);
    printf("\nEl valor de b es: %d", b);
}

void orden(int a, int b){
    int aux;
     printf("\n--- ORDEN ---\n");
    if (a>b)
    {
        aux = a;
        a = b;
        b = aux;
        printf("\nEl valor mas chico (a) es: %d",a);
        printf("\nEl valor mas grande (b) es: %d", b);
    }else
    {
        printf("\nEl valor mas chico (a) es: %d",a);
        printf("\nEl valor mas grande (b) es: %d", b);
    }
    
    
}