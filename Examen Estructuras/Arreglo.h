#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>

using namespace std;

class Arreglo {
private:
    int tamano;
    int *datos;
    
public:
    Arreglo() { tamano = 0; }
    Arreglo(int tam) {
        datos = new int[tamano];
    }
    ~Arreglo() { delete[] datos; }
    int busquedaSaltandoN(int n, int K);
    int busquedaSecuencial(int inicio, int final, int K);
    void lectura();
};

int Arreglo::busquedaSaltandoN(int n, int K) {
    
}
int Arreglo::busquedaSecuencial(int inicio, int final, int K) {
    for (int indice = 0; indice < final; indice++) {
    //cout << "si " << datos[indice] << " = " << K << endl;
    if (datos[indice] == K) {
      return indice;
    }
  }
}

void Arreglo::lectura() {
    for (int indice = 0; indice < tamano; indice++) {
      std::cout << "Ingresa Dato" << '\n';
      std::cin >> datos[indice];
    }
}

#endif /* ARREGLO_H */

