#include <stdio.h>
int main(){
    char nombre[] = { 'G', 'a', 'n', 'd', 'a', 'l', 'f' };
    printf( "Texto: %s\n", nombre );
    printf( "Tamaño de la cadena: %i bytes\n", sizeof nombre );
    return 0;
}