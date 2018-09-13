/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 25 de febrero de 2017, 11:37
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    unsigned long int a[21] = {
        1,64,729,4096,15625,46656,117649,262144,531441,1000000,1771561,2985984,4826809,7529536,11390625,16777216,24137569,34012224,47045881,64000000,85766121
    };
    vector<unsigned long int> v(a, a + 21);
    unsigned long int n;
    cin >> n;
    while (n != 0) {
        if (binary_search (v.begin(),v.end(),n))
            cout << "Special" << endl;
        else
            cout << "Ordinary" << endl;
        cin >> n;
    }
    return 0;
}

