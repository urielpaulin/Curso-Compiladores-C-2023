#include <stdio.h>
int main () {
    int n, cont;
    float media, d, suma=0;
    float lista[100];
/* leer el valor de n */
    printf (" \n¿Cuantos números para calcular la media?");
    scanf ("%d",&n);
    printf (" \n");
    /* leer los números y calcular su suma */
    for (cont = 0; cont < n; ++cont) {
    printf("i =%d   x =",cont + 1);
    scanf ("%f", &lista [cont]) ;
    suma += lista[cont];
    }
    /* calcular la media y escribir la respuesta */
    media = suma / n;
    printf("\nLa media es %5.2f\n\n", media);
    //calcular y escribir las desviaciones respecto de la media */
for (cont = 0; cont <n; ++cont) {
    d = lista[cont] - media,
    printf("i = %d x = %5.2f d= %5.2f\n", cont + 1, lista[cont], d);
    }
}