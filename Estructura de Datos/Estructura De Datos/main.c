
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"
#include "pila.h"

#define jump printf("\n");

/*
Listas, Pilas, Colas.
1)Implementar una función que recibe una lista de enteros L y un número entero n de forma
que modifique la lista mediante el borrado de todos los elementos de la lista que tengan este
valor


*/
void ejercicio1()
{
    //Primer punto
    nodo * lista = inicLista();
    int i=0;
    while(i<5)
    {
        /// agrego numeros repetidos a la lista
        lista=agregarPrincipio(lista,crearNodo(9));
        i++;
    }
    i=0;
    while(i<10)
    {
        /// si se cambia el 5 se podra obtener mas datos dentro de la lista si es 10 los datos seran
        /// de 0 a 99
        /// agrego numeros diferentes
        lista=agregarPrincipio(lista,crearNodo(i));
        i++;
    }

    //mostrarListaRecursivo(lista);

    ///lista=borrarNodoBuscado(lista,9); igualo la lista con el dato borrado solo lo hace 1 vez
    //jump;
    //mostrarListaRecursivo(lista);

    lista=borrarTodosLosN(lista,9);/// y aca lo mando a borrar todos los numeros que sean 9 en su caso se puede cambiar
    /// la funcion de este modela un caso en el cual se cuentan cuantos datos tiene la lista y procede ha repetir el proceso de borrado
    /// la misma cantidad de veces.
    jump;
    mostrarListaRecursivo(lista);

}
/*
2)Escribir una función Reemplazar que tenga como argumentos
una pila con tipo de elemento int y dos valores int:
nuevo y viejo de forma que si el segundo valor aparece en algún lugar de
la pila,sea reemplazado por el segundo.
*/

void reemplazar(Pila pilita, int nuevo, int viejo)
{
    Pila pilota;
    inicPila(&pilota);

    while(!pilavacia(&pilita)){
        if(tope(&pilita)==viejo){
            desapilar(&pilita);
            apilar(&pilita,nuevo);
        }else{
            apilar(&pilota,desapilar(&pilita));
        }
    }
    while(!pilavacia(&pilota)){
        apilar(&pilita,desapilar(&pilota));
    }
}
void ejercicio2()
{
    Pila pilita;
    inicPila(&pilita);
    ///cargo la pila con datos
    apilar(&pilita,2);
    apilar(&pilita,3);
    apilar(&pilita,4);
    apilar(&pilita,5);
    apilar(&pilita,6);
    apilar(&pilita,7);
    apilar(&pilita,8);
    apilar(&pilita,9);

    int nuevo=10;
    int viejo=2;
    mostrar(&pilita);

    reemplazar(pilita,nuevo,viejo);

    mostrar(&pilita);


}

//3)Construir una función que sume los elementos de una lista de enteros recursivamente.

int sumaRecursiva(nodo * lista){

    int suma=0;
    if(lista){
        suma=lista->dato + sumaRecursiva(lista->siguiente);
    }
    return suma;
}

void ejercicio3(){
    nodo * lista = inicLista();
    int i=1;
    while(i<20)///con cambiar la carga esta todo bien
    {
        lista=agregarPrincipio(lista,crearNodo(i));
        i++;
    }

    mostrarListaRecursivo(lista);

    int suma=sumaRecursiva(lista);
    printf("La suma de los datos de la lista es:  %d\n",suma);

}
/**
Arboles. General.
1)Responder a las siguientes preguntas sobre el árbol siguiente:

1. ¿Qué nodo es la raíz?
2. ¿Cuántos caminos diferentes de longitud tres hay?
3. ¿Es un camino la sucesión de nodos HGFBACI?
4. ¿Qué nodos son los ancestros de K?
5. ¿Qué nodos son los ancestros propios de N?
6. ¿Qué nodos son los descendientes propios de M?
7. ¿Qué nodos son las hojas?
8. ¿Cuál es la altura del nodo C?
9. ¿Cuál es la altura del árbol?
10. ¿Cuál es la profundidad del nodo C?
11. ¿Cuál es el hermano a la derecha de D?
12. ¿Es I hermano a la derecha de F?
13. ¿Está F a la izquierda de J?
14. ¿Está L a la derecha de J?
15. ¿Qué nodos están a la izquierda y a la derecha de J?
16. ¿Cuántos hijos tiene A?
17. Listar los nodos del árbol en preorden,postorden e inorden.
*/

/*********************************************************
1. El nodo A es la raiz
2. Son 7: ABFG,ACJK,AENP,AENQ,BFGH,CJKL,CJKM
3. No H no es Rama de G
4. A, C y J
5. Son A y E
6. No tiene
7. Serian H,I,L,M, D, P y Q
8. Es de 4
9. Partiendo desde la raiz es de 5
10. Es de 1.
11. es E.
12. No, sus padres son diferentes.
13. Si
14. No, F es un nodo hoja de su ancestro que es J
15. BFGHI y en la derecha DENPQ
16. TIENE 4 B,C,D,E
17. Preorden: ABFGHCIJKLMDENPQ.
    Postorden: HGFBILMKJCDPQNEA.
    Inorden: HGFBAICLKMJDPNQE.
**********************************************************/
int main()
{
    ejercicio1();
    ejercicio2();
    ejercicio3();
    return 0;
}
