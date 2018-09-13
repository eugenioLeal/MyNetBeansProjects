/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 30 de enero de 2017, 12:36
 */

#include <iostream>

using namespace std;
int indice;

int busquedaBinaria(int E[], int primero, int ultimo, int K){
    if(ultimo < primero)
        return -1;     
    else {
        int medio = (primero + ultimo) / 2;
        if(K == E[medio])
            indice = medio;
        else if (K < E[medio]) {
            indice = busquedaBinaria(E, primero, medio - 1, K);
        } else {
            indice = busquedaBinaria(E, medio + 1, ultimo, K);
        }
        return indice;
    }
}

int main(int argc, char** argv) {
    int arr[7] = {-3,-1,1,3,5,7,9};
    cout << busquedaBinaria(arr,0,6,5) << endl;
    return 0;
}

