#ifndef PREGUNTA_H
#define PREGUNTA_H

#include <iostream>

using namespace std;

class Rectangulo {
public:
    Rectangulo(float b, float a) {
        base = b;  altura = a;
    }
    ~Rectangulo() {}
    float area(float b, float a) {
        return b * a;
    }
    float perimetro(float b, float a) {
        return (2 * a) + (2 * b);
    }
    void imprimirRect() {
        cout << base << endl;
        cout << altura << endl;
    }
private:
    float base;
    float altura;
};

#endif /* PREGUNTA_H */

