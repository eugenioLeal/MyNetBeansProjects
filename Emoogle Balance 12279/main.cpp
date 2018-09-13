/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 24 de febrero de 2017, 21:32
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int n, e, count = 1, res;
    cin >> n;
    while(n != 0) { 
        res = 0;
        while (n--) {  
            cin >> e;  
            if (e > 0)
                res += 1;
            else
                res -= 1;
        }
        cout << "Case " << count << ": ";
        cout << res << endl;
        count++;
        cin >> n;
    }
    return 0;
}

