/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 24 de febrero de 2017, 22:56
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int t, l = 20, w = 20, h = 20;
    int x, y, z, count = 1;
    cin >> t;
    while(t--) {
        cin >> x >> y >> z;
        cout << "Case " << count << ": ";
        if(x > l || y > w || z > h)
            cout << "bad" << endl;
        else
            cout << "good" << endl;
        count++;
    }
    return 0;
}

