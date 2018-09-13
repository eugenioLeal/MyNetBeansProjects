/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 24 de febrero de 2017, 21:58
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int n;
    string s;
    cin >> n;
    while(n--) {
        cin >> s;
        if ((s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e')|| (s[1] == 'n' && s[2] == 'e') || (s[0] == 'o' && s[1] == 'n' && s[3] == 'e'))
            cout << 1 << endl;
        else if ((s[0] == 't' && s[1] == 'w') || (s[0] == 't' && s[2] == 'o')|| (s[1] == 'w' && s[2] == 'o') || (s[0] == 't' && s[1] == 'w' && s[3] == 'o'))
            cout << 2 << endl;   
        else if ((s[0] == 't' && s[1] == 'h' && s[2] == 'r' && s[3] == 'e' && s[4] == 'e') || (s[0] == 't' && s[1] == 'h' && s[2] == 'r' && s[3] == 'e') || (s[0] == 't' && s[1] == 'h' && s[2] == 'r' && s[4] == 'e') || (s[0] == 't' && s[1] == 'h' && s[3] == 'e' && s[4] == 'e') || (s[0] == 't' && s[2] == 'r' && s[3] == 'e' && s[4] == 'e') || (s[1] == 'h' && s[2] == 'r' && s[3] == 'e' && s[4] == 'e'))
            cout << 3 << endl;
    }
    return 0;
}

