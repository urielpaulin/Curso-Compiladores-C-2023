#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*Declaracion de variables*/
    int i=8, j=5;
    float x=0.005, y=-0.01;
    char c = 'c', d='d';
    char uno;
    int dos,cuatro;
    float tres;

    /*Procedimiento*/
    uno = (3 * i - 2 * j) % (2 * d - c);
    printf("A = %i\n", uno);

    dos = 2 * ((i / 5) + (4 * (j - 3)) % (i + j - 2));
    printf("B = %i\n", dos);

    tres = (i - 3 * j) % (c + 2 * d) / (x - y);
    printf("C = %f\n", tres);

    cuatro = -(i + j);
    printf("D = %i\n", cuatro);

    return 0;
}
