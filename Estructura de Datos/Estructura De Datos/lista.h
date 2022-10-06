#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct
{
    int dato;
    struct nodo * siguiente;
}nodo;

nodo * inicListas();
nodo * crearNodo(int dato);
nodo * agregarPrincipio(nodo *lista, nodo *nuevoNodo);
nodo * buscarUltimo(nodo *lista);
void mostrarUnNodo(nodo *nodo);


#endif // LISTA_H_INCLUDED
