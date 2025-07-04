struct Nodo {
    char dato;
    struct Nodo* siguiente;
};


int estaVacia(struct Nodo** tope) {
    return *tope == NULL;
}

// Función para apilar (push)
void push(struct Nodo** tope, char valor) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = *tope;
    *tope = nuevoNodo;
    printf(" ------------------> Elemento apilado\n");
}

// Función para desapilar (pop)
char pop(struct Nodo** tope) {
    if (estaVacia(tope)) {
        return -1;
    }
    char valor = (*tope)->dato;
    struct Nodo* temp = *tope;
    *tope = (*tope)->siguiente;
    free(temp);
    printf(" ------------------> Elemento desapilado\n");
    return valor;
}