/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 25 de enero de 2017, 12:33
 */

#include <iostream>
#include <string>

using namespace std;

string s = "(())";
bool res;
int inicio = 0;
int balance = 0;
int final = s.size();
char substitutoAlErrorDeCompilacion;

bool anidacionCorrecta(string s) {
    if ((inicio - final) == 1)
        return res;
    else 
        if (s[inicio] == '(') {
            substitutoAlErrorDeCompilacion = ')';
            balance += 1;
        } else if (){
            
        }
}

int main(int argc, char** argv) {
    cout << anidacionCorrecta(s) << endl;
    return 0;
}

