#include <stdio.h>
#include <stdlib.h>

// Definición del nodo
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

int estaVacia(struct Nodo**);
void encolar(struct Nodo **, struct Nodo**, int);
int desencolar(struct Nodo **, struct Nodo**);
int elemento_inicio(struct Nodo **);
void mostrarCola(struct Nodo **); 

// Función principal
int main() {
    // Punteros al frente y al final de la cola
    struct Nodo* frente = NULL;
    struct Nodo* final = NULL;  
    int opcion, valor;

    do {
        printf("\n--- MENÚ ---\n");
        printf("1. Encolar \n");
        printf("2. Desencolar \n");
        printf("3. Ver Inicio de la cola \n");
        printf("4. Mostrar cola\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf(" ------------------> Ingrese un valor a encolar: ");
                scanf("%d", &valor);
                encolar(&frente, &final, valor);
                break;
            case 2:
                desencolar(&frente, &final);
                break;
            case 3:
                valor = elemento_inicio(&frente);
                if (valor != -1)
                    printf(" ------------------> Elemento en el frente: %d\n", valor);
                break;
            case 4:
                mostrarCola(&frente);
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

// Función para verificar si la cola está vacía
int estaVacia(struct Nodo **frente) {
    return *frente == NULL;
}

// Función para encolar
void encolar(struct Nodo **frente, struct Nodo **final, int valor) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));

    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;
    
    if (estaVacia(frente)) {
        *frente = nuevoNodo;
        *final = nuevoNodo;
    } else {
        (*final)->siguiente = nuevoNodo;
        (*final) = nuevoNodo;
    }
    printf(" ------------------> Elemento %d encolado\n", valor);
}

// Función para desencolar
int desencolar(struct Nodo **frente, struct Nodo **final) {
    if (estaVacia(frente)) {
        printf(" ------------------> La cola está vacía\n");
        return -1;
    }
    int valor = (*frente)->dato;
    struct Nodo* temp = *frente;
    *frente = (*frente)->siguiente;
    if (frente == NULL) {
        final = NULL;
    }
    free(temp);
    printf(" ------------------> Elemento %d desencolado\n", valor);
    return valor;
}

// Función para ver el frente sin eliminarlo
int elemento_inicio(struct Nodo **frente) {
    if (estaVacia(frente)) {
        printf(" ------------------> La cola está vacía\n");
        return -1;
    }
    return (*frente)->dato;
}

// Función para mostrar todos los elementos de la cola
void mostrarCola(struct Nodo **frente) {
    struct Nodo* actual = *frente;
    if (estaVacia(frente)) {
        printf(" ------------------> La cola está vacía\n");
        return;
    }
    printf(" ------------------> Contenido de la cola:\n");
    while (actual != NULL) {
        printf("%d\n", actual->dato);
        actual = actual->siguiente;
    }
}