/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 31 de enero de 2017, 15:42
 */

#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int k, n, m, x, y;
    scanf("%d",&k);
    while(k != 0) {
        scanf("%d %d", &n, &m);
        for (int i = 0; i < k; i++) {
            scanf("%d %d", &x, &y);
            if (x == n) {
                cout << "divisa" << endl;
            } else if (y == m) {
                cout << "divisa" << endl;
            } else if (x < n && y > m) {
                cout << "NO" << endl;
            } else if (x < n && y < m) {
                cout << "SO" << endl;
            } else if (x > n && y < m) {
                cout << "SE" << endl;
            } else if (x > n && y > m) {
                cout << "NE" << endl;
            }
        }
        scanf("%d",&k);
    }
    
    return 0;
}

