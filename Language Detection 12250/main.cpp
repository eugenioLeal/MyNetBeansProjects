/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 24 de febrero de 2017, 20:39
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    string s;
    int count = 1;
    cin >> s;
    while(s != "#") {
        cout << "Case " << count << ": ";
        if(s == "HELLO")
            cout << "ENGLISH" << endl;
        else if(s == "HOLA")
            cout << "SPANISH" << endl;
        else if(s == "HALLO")
            cout <<"GERMAN" << endl;
        else if(s == "BONJOUR")
            cout << "FRENCH" << endl;
        else if(s == "ZDRAVSTVUJTE")
            cout << "RUSSIAN" << endl;
        else if(s == "CIAO")
            cout << "ITALIAN" << endl;
        else
            cout << "UNKNOWN" << endl;
        count++;
        cin >> s;
    }
    return 0;
}

