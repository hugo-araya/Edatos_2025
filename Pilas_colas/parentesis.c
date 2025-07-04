#include<stdio.h>
#include<stdlib.h>
#include"PILA.h"

int main(){
    struct Nodo* tope = NULL;
    char elem, sale;
    FILE *ent;
    ent = fopen("pilas.c","rt");
    while (!feof(ent)){
        elem = fgetc(ent);
        if (elem =='{'){
            push(&tope, elem);
        }
        else{
            if (elem =='}') {
                if (estaVacia(&tope)) {
                    printf("\n<< Error 1: Falta { >>\n");
                    exit(0);
                }
                sale = pop(&tope);
            }
        }
    }
    if (estaVacia(&tope)){
        printf("\n<< No hay Error >>\n\n");
    }
    else{
        printf("\n<< Error 2: Falta } >>\n");
    }
    fclose(ent);
    return 0;
}
