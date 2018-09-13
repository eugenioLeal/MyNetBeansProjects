#ifndef PREGUNTA2_H
#define PREGUNTA2_H

#include <iostream>
#include <string>

using namespace std;

int inicio = 0;
int termina;
int i = 0;

bool palindromo(string s) {
    termina = (s.size()) - i;
    if (termina == inicio)
        return true;
    else {
        if (s[inicio] == s[(s.size())-1]) {
            inicio += 1;
            termina -= 1;
            return palindromo(s);
        }
            
            
    }
}


#endif /* PREGUNTA2_H */

