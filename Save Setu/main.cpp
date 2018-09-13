/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 24 de febrero de 2017, 23:06
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int t;
    long long k, money = 0;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        if (s == "donate") {
            cin >> k;
            money += k;
        } else if (s == "report") {
            cout << money << endl;
        }  
    }
    return 0;
}

