/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 19 de enero de 2017, 11:44
 */

#include <iostream>
//#include <vector>

using namespace std;

int arr[5] = {3,1,0,8,6};
int final = 4, inicio = 0;

int mayor(int inicio){
    int maximo = arr[inicio];
    int comparado;
    if((final-inicio) == 1)
        return maximo;
    else {
        comparado = mayor(inicio + 1);
        if(comparado > maximo)
            return comparado;
        else
            return maximo;
    }
}

int main(int argc, char** argv) {
    cout << mayor(inicio) << endl;
}

