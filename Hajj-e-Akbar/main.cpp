/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 24 de febrero de 2017, 23:32
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    string s;
    int count = 1;
    cin >> s;
    while(s != "*") {
        cout << "Case " << count << ": ";
        if (s == "Hajj")
            cout << "Hajj-e-Akbar" << endl;
        else if(s == "Umrah")
            cout << "Hajj-e-Asghar" << endl;
        count++;
        cin >> s;
    }
    return 0;
}

