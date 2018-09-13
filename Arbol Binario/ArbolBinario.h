#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H
#include <bits/stdc++.h>
using namespace std;
struct NodoArbol {
  int info;
  struct NodoArbol *hijoIzq = NULL;
  struct NodoArbol *hijoDer = NULL;
};
class ArbolBinario {
public:
  NodoArbol *raiz;
  ArbolBinario() {
    raiz = NULL;
  }
  ~ArbolBinario() {}
  void crearArbol(NodoArbol *&p) {
    p = new(struct NodoArbol);
    int dato;
    cout << "dame el dato: ";
    cin >> dato;
    p->info = dato;
    char resIzq, resDer;
    cout << "tiene hijo izquierdo? (s/n) ";
    std::cin >> resIzq;
    if (resIzq == 's') {
      crearArbol(p->hijoIzq);
    }
    cout << "tiene hijo derecho? (s/n) ";
    std::cin >> resDer;
    if (resDer == 's') {
      crearArbol(p->hijoDer);
    }
  }
  void preorden(NodoArbol *r) {
      if(r != NULL) {
          cout << r->info << " ";
          preorden(r->hijoIzq);
          preorden(r->hijoDer);
      }
  }
  void inorden(NodoArbol *r) {
      
  }
};

#endif /* ARBOLBINARIO_H */

