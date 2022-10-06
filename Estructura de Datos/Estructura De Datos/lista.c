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

void mostrarListaRecursivo(nodo * lista)
{
    if(lista!=NULL)
    {
        mostrarUnNodo(lista);
        mostrarListaRecursivo(lista->siguiente);
    }
}

nodo* borrarNodoBuscado(nodo* lista, int num){
    nodo* seg;
    nodo* ante;
    if((lista != NULL) && (lista->dato==num)){
        nodo* aux = lista;
        lista = lista->siguiente;
        free(aux);
    }
    else{
        seg = lista;
        while((seg != NULL) && (seg->dato!=num)){
            ante = seg;
            seg = seg->siguiente;
        }

        if(seg!=NULL){
            ante->siguiente = seg->siguiente;
            free(seg);
        }
    }
    return lista;
}

nodo * borrarTodosLosN(nodo* lista, int num){
    nodo * seg=lista;
    int veces=0;
    while(seg!=NULL){
            veces++;
        seg=seg->siguiente;
    }
    int i=0;
    while(i<veces){
        lista=borrarNodoBuscado(lista,num);
        i++;
    }

    return lista;
}

int verPrimero(nodo * lista)
{
    int rta;
    if(lista)
    {
        rta=lista->dato;
    }
    return rta;

}
nodo * borrarPrimerNodo(nodo * lista)
{
    nodo * aux=lista;
    lista=lista->siguiente;
    free(aux);
    return lista;
}
nodo * IngresarNuevoDato()
{
    int dato;
    nodo * nuevoNodo;
    printf("\nIngrese un numero:");
    scanf("%d", &dato);
    nuevoNodo = crearNodo(dato);
    return nuevoNodo;
}
void recorrerYmostrar(nodo * lista)
{
    nodo * aux=lista;
    while(aux!=NULL)
    {
        mostrarNodo(aux);
        aux=aux->siguiente;
    }
}
void mostrarNodo(nodo * aux)
{
    printf("%d ",aux->dato);
}

