/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 24 de febrero de 2017, 14:50
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int t, n, r;
    cin >> t;
    while (t--) {
        cin >> n;
        n = (((((n * 567) / 9) + 7492) * 235) / 47) - 498;
        n = sqrt(pow(n, 2));
        cout << (n / 10) % 10 << endl;
    }
    return 0;
}

