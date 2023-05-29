#include <stdio.h>
#include <ctype.h>
//1* prototipo de función *1
void analiza_linea (char linea[], int *pv, int *pc, int *pd, int *pb, int *po);
int main ( ){
    char linea [80];
    int vocales = 0;
    int consonantes = 0;
    int digitos = 0;
    int blancos = 0;
    int otros = 0;
    printf(" Introducir una linea de texto: \n");
    scanf("%[^\n]", linea);
    analiza_linea (linea,&vocales,&consonantes,&digitos,&blancos,&otros);
    printf("\nNº de vocales: %d",vocales);
    printf("\nNº de consonantes: %d",consonantes);
    printf("\nNº de digitos: %d",digitos);
    printf("\nNº de caracteres en blanco: %d",blancos);
    printf("\nNº de otros caracteres: %d",otros);
}
void analiza_linea (char linea[], int *pv, int *pc, int *pd, int *pb, int *po){
    char c; 
    int cont = 0;
    while((c = toupper(linea[cont])) != '\0'){
        if(c=='A'|| c=='E'||c=='I'||c=='O'||c=='U')
            ++ *pv; 
            else if (c>='A'&&c<='Z')
                ++ *pc;
                    else if(c>='0'&& c<='9')
                        ++ *pd;
                            else if (c==' '||c=='\t')
                                ++ *pb;
                                    else 
                                        ++ *po;
    ++cont;
    }
    return;
}