#include<stdio.h>

int fact_i(int);
int fact_r(int);

int cont = 0;

int main(){
    int n = -1, valor;
    //valor = fact_i(n);
    //printf("%d\n", valor);
    valor = fact_r(n);
    printf("%d\n", valor);
    return 0;
}

int fact_i(int n){
    int f, i;
    i = 1;
    f = 1;
    while (i <= n){
        f = f * i;
        i++;
    }
    return f;
}

int fact_r(int n){
    cont ++;
    printf("%d\n", cont);
    if (n == 0){
        return 1;
    }
    else{
        return n * fact_r(n-1);
    }
}