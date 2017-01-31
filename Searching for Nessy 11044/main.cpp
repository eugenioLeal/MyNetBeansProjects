/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 23 de enero de 2017, 10:53
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int testCase, n, m;
    cin >> testCase;
    for(int i = 0; i < testCase; i++) {
        cin >> n >> m;
        cout << (n/3) * (m/3) << endl;
    }
    return 0;
}