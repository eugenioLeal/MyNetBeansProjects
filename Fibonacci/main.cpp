/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 21 de enero de 2017, 5:25
 */

#include <iostream>

using namespace std;

int res, count;

// f(n+1) = f(n) + f(n-1)
// f(n) = f(n-1) + f(n-2) es probable que esta formula funcione tambien.
// Ejemplo: si quieres f3, n tiene que valer 2.
int fib(int n) {
    count += 1;
    if (n == 1 || n == 2) {
        return 1;
    } else {
        n -= 1;
        res = fib(n) + fib(n-1);
    }
    return res;
}

int main(int argc, char** argv) {
    cout << fib(1) << '\t';
    cout << fib(2) << '\t';
    cout << fib(3) << '\t';
    cout << fib(4) << '\t';
    cout << fib(5) << '\t';
    cout << fib(6) << '\t';
    cout << fib(7) << '\t';
    cout << "entre a la funcion " << count << " veces.";
    return 0;
}

