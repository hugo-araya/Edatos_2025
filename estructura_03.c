#include <stdio.h>

typedef struct {
    int a,b;
} PAREJA;

void f1(PAREJA *);

int main(){
    PAREJA p = { 13, 17};
    /* inicialización de los miembros*/
    f1(&p);
    printf("valor de a:%d valor de b:%d\n",p.a,p.b);
    /* escribe 14 y 18 */
    return 0;
}

void f1(PAREJA *q){
    q->a++; /* equivalente a (*q.a)++ pero más usado */
    q->b++;
    return;
}