#include "ArbolBinario.h"


int main(int argc, char** argv) {
    ArbolBinario arbol;
    arbol.crearArbol(arbol.raiz);
    arbol.preorden(arbol.raiz);
    return 0;
}

