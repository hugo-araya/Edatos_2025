#include <stdio.h>
#include <string.h>

int main() {
    // Declaración e inicialización de una cadena
    char nombre[20] = "Juan";

    // Imprimir la cadena
    printf("El nombre es: %s\n", nombre);

    // Obtener la longitud de la cadena
    int longitud = strlen(nombre);
    printf("La longitud de la cadena es: %d\n", longitud);

    // Copiar una cadena a otra
    char apellido[20];
    strcpy(apellido, "Perez");
    printf("El apellido es: %s\n", apellido);

    // Concatenar dos cadenas
    strcat(nombre, " ");
    strcat(nombre, apellido);
    printf("Nombre completo: %s\n", nombre);

    printf("%d\n",strcmp("Perez", apellido));

    return 0;
}