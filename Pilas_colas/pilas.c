#include <stdio.h>
#include <stdlib.h>

// Definición del nodo
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

// Función para verificar si la pila está vacía
int estaVacia(struct Nodo**);

// Función para apilar (push)
void push(struct Nodo**, int);

// Función para desapilar (pop)
int pop(struct Nodo**);

// Función para ver el elemento en el tope sin eliminarlo
int peek(struct Nodo**);

// Función para mostrar todos los elementos de la pila
void mostrarPila(struct Nodo**);

// Función principal
int main() {
    // Puntero al tope de la pila
    struct Nodo* tope = NULL;

    int opcion, valor;

    do {
        printf("\n--- MENÚ ---\n");
        printf("1. Apilar (push)\n");
        printf("2. Desapilar (pop)\n");
        printf("3. Ver tope (peek)\n");
        printf("4. Mostrar pila\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf(" ------------------> Ingrese un valor: ");
                scanf("%d", &valor);
                push(&tope, valor);
                break;
            case 2:
                pop(&tope);
                break;
            case 3:
                valor = peek(&tope);
                if (valor != -1)
                    printf(" ------------------> Elemento en el tope: %d\n", valor);
                break;
            case 4:
                mostrarPila(&tope);
                break;
            case 5:
                printf(" ------------------> Saliendo...\n");
                break;
            default:
                printf(" ------------------> Opción inválida\n");
        }
    } while (opcion != 5);

    return 0;
}

int estaVacia(struct Nodo** tope) {
    return *tope == NULL;
}

// Función para apilar (push)
void push(struct Nodo** tope, int valor) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = *tope;
    *tope = nuevoNodo;
    printf(" ------------------> Elemento %d apilado\n", valor);
}

// Función para desapilar (pop)
int pop(struct Nodo** tope) {
    if (estaVacia(tope)) {
        printf(" ------------------> La pila está vacía\n");
        return -1;
    }
    int valor = (*tope)->dato;
    struct Nodo* temp = *tope;
    *tope = (*tope)->siguiente;
    free(temp);
    printf(" ------------------> Elemento %d desapilado\n", valor);
    return valor;
}

// Función para ver el elemento en el tope sin eliminarlo
int peek(struct Nodo** tope) {
    if (estaVacia(tope)) {
        printf(" ------------------> La pila está vacía\n");
        return -1;
    }
    return (*tope)->dato;
}

// Función para mostrar todos los elementos de la pila
void mostrarPila(struct Nodo** tope) {
    struct Nodo* actual = *tope;
    if (estaVacia(tope)) {
        printf(" ------------------> La pila está vacía\n");
        return;
    }
    printf(" ------------------> Contenido de la pila:\n");
    while (actual != NULL) {
        printf("%d\n", actual->dato);
        actual = actual->siguiente;
    }
}