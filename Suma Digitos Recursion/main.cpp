/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 24 de enero de 2017, 15:04
 */

#include <iostream>

using namespace std;

int res = 0;
int temp;

int sumaDigitos(int n) {
    if (n == 0) 
        return res;
    else {
        temp = n % 10;
        res += temp;
        sumaDigitos(n/10);
    }
}

int main(int argc, char** argv) {
    cout << sumaDigitos(12345) << endl;
    return 0;
}