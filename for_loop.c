#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,trinagularnumbers;
    printf("tabla de numeros triangulares\n\n");
    printf("n               suma de 1 a n\n");
    printf("------------    ------------------ \n");
    trinagularnumbers=0;
    for (n=1; n<=10;++n){
        trinagularnumbers+=n;
        printf("%2i                     %2i\n",n,trinagularnumbers);
    }
   return 0;
}
