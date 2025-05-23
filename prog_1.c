#include <stdio.h>

void funcion(int *);

int main(){
    int ejemplo;
    ejemplo = 10;
    printf("%d\n",ejemplo);
    funcion(&ejemplo);
    printf("%d\n", ejemplo);
    return 0;
}

void funcion(int *paso){
    *paso = 20;
    printf("%d\n", *paso);
}