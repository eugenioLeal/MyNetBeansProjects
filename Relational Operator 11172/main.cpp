/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 30 de enero de 2017, 13:14
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int t, a, b;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> a >> b;
        if (a < b)
            cout << "<" << endl;
        else if (a > b)
            cout << ">" << endl;
        else if (a == b) 
            cout << "=" << endl;
    }
    return 0;
}

