#ifndef _LIST_H
#define _LIST_H

#include <stdbool.h>

typedef struct node * list;
typedef float type_elem;

list empty();
// Crea una lista vacia

list addl(type_elem e, list l);
// Agrega el elemento e al comienzo de la lista l

void destroy(list l);
// libera memoria en caso de ser necesario

bool is_empty(list l);
// Devuelve True si l es vacia

type_elem head(list l);
// Devuelve el primer elemento de la lista l
// PRE : !is_empty(l)

list tail(list l);
// Elmina el primer elemento de la lista l
// PRE: !is_empty(l)

list addr(list l, type_elem e);
// Agrega el elemento e al final de la lista l

unsigned int length(list l);
// Devuelve la cantidad de elementos de la lista l

list concat(list l, list l0);
// Agrega al final de l todos los elementos de l0 en el mismo orden

type_elem index(list l, unsigned int n);
// Devuelve el n-esimo elemento de la lista l
// PRE: length(l) > n

list take(list l, unsigned int n);
// Elimina todos los elemntos de l ubicados en las posiciones mayores o iguales a n

list drop(list l, unsigned int n);
// Elimina todos los elementos de l ubicados en las posiciones menores a n

list copy_list(list l);
// Copia todos los elementos de l1 en la nueva lista l2

#endif