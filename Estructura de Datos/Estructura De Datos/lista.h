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
void mostrarListaRecursivo(nodo * lista);
nodo* borrarNodoBuscado(nodo* lista, int num);
nodo * borrarTodosLosN(nodo* lista, int num);
int verPrimero(nodo * lista);
nodo * borrarPrimerNodo(nodo * lista);
nodo * IngresarNuevoDato();
void recorrerYmostrar(nodo * lista);
void mostrarNodo(nodo * aux);

#endif // LISTA_H_INCLUDED
