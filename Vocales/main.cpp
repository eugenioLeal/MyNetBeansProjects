/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 19 de enero de 2017, 12:43
 */

#include <iostream>
#include <string>

using namespace std;

string s = "Eugenio";

int vocal(int inicio) {
    if(((s.size()) - inicio) == 0) {
        return 0;
    } else {
        if(s[inicio] == 'a' || s[inicio] == 'e' || s[inicio] == 'i' || s[inicio] == 'o' || s[inicio] == 'u' || s[inicio] == 'A' || s[inicio] == 'E' || s[inicio] == 'I' || s[inicio] == 'O' || s[inicio] == 'U') {
            return 1 + vocal(inicio + 1);
        } else {
            return 0 + vocal(inicio + 1);
        } 
    }
}
int main(int argc, char** argv) {
    cout << s.size() << endl;
    cout << vocal(0);
    return 0;
}

