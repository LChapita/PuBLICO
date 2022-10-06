#include "lista.h"
/// funciones
nodo* inicLista()
{
    return NULL;
}

nodo* crearNodo(int dato)
{
    nodo* nuevoNodo = (nodo*) malloc(sizeof(nodo));

    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;

    return nuevoNodo;
}

nodo* agregarPrincipio(nodo* lista, nodo* nuevoNodo)
{
    if(lista == NULL)
        lista = nuevoNodo;

    else
    {
        nuevoNodo->siguiente = lista;
        lista = nuevoNodo;
    }

    //otra forma de hacer lo mismo
    /*
    if(lista != NULL)
        nuevoNodo->siguiente = lista;
    lista = nuevoNodo;
    //*/

    return lista;
}

nodo* buscarUltimo(nodo* lista)
{
    /// seg es seguidor, iterador, buscador, aux, etc.
    nodo* seg = lista;

    if(seg != NULL)
        while(seg->siguiente != NULL)
            seg = seg->siguiente;

    return seg;
}

void mostrarUnNodo(nodo* nodo)
{
    printf("dato: %i \n", nodo->dato);
}
