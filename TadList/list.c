#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "list.h"

struct node{
    type_elem elem;
    list next;
};

list empty(){
    list l;
    l= NULL;
    return l;
}

list addl(type_elem e, list l){
    list p = calloc(1, sizeof(list));
    p -> elem = e;
    p -> next = l;
    l = p;
    return l;
}

void destroy(list l){
    list p;
    while(l != NULL){
        p=l;
        l= l -> next;
        free(p);
    }
}

bool is_empty(list l){
    bool b;
    b=(l == NULL);
    return b;
}

type_elem head(list l){
    assert(!is_empty(l));
    type_elem e;
    e = l-> elem;
    return e;
}

list tail(list l){
    assert(!is_empty(l));
    list p;
    p=l;
    l= l-> next;
    free(p);
    return l;
}

list addr(list l, type_elem e){
    list p;
    list q = calloc(1, sizeof(list));
    q -> elem = e;
    q -> next = NULL;
    if(!(is_empty(l))){
        p=l;
        while(p -> next != NULL){
            p= p -> next;
        }
        p -> next = q;
    }else{
        l=q;
    }
    return l;
}

unsigned int length(list l){
    list p=l;
    unsigned int n=0;
    while(p != NULL){
        n= n+1;
        p= p -> next;
    }
    return n;
}

list concat(list l, list l0){
    while(length(l0)!=0){
        l= addr(l, l0 -> elem);
        l0= tail(l0);
    }
    return l;
}

type_elem index(list l, unsigned int n){
    assert(!(is_empty(l)));
    type_elem e;
    list p=l;
    unsigned int aux=0;
    while (aux < n){
        p= p -> next;
        aux= aux+1;
    }
    e= p -> elem;
    return e;
}

list take(list l, unsigned int n){
    assert(!(is_empty(l)));
    assert(length(l)>=n);
    list q,z;
    list p=l;
    unsigned int aux=0;
    while(aux != (n-1)){
        p= p -> next;
        aux= aux +1;
    }
    q= p -> next;
    p -> next = NULL;
    while(q != NULL){
        z=q;
        q= q -> next;
        free(z);
    }
    free(q);
    return l;
}

list drop(list l, unsigned int n){
    assert(!(is_empty(l)));
    assert(length(l)>=n);
    unsigned int aux=0;
    while(aux != n){
        l= tail(l);
        aux= aux+1;
    }
    return l;
}

list copy_list(list l){
    list l0;
    l0=empty();
    list p=l;
    while(p != NULL){
        l0=addr(l0, p -> elem);
        p= p -> next;
    }
    return l0;
}
