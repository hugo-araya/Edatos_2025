#include <stdio.h>

int main(){
    char nombre[20];
    printf( "Introduzca su nombre (20 letras máximo): " );
    scanf( "%s", nombre );
    printf( "\nEl nombre que ha escrito es: %s\n", nombre );
    return 0;
}