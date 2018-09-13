/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 24 de febrero de 2017, 18:33
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int t, a, b, c, count = 3;
    vector<int> salaries;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        salaries.push_back(a);
        salaries.push_back(b);
        salaries.push_back(c);
        sort(salaries.begin(),salaries.end());       
        cout << "Case " << i + 1 << ": " << salaries.at(1) << endl;
        for(int j = 0; j < 3; j++) {
            salaries.pop_back();
        }
    }
    return 0;
}

