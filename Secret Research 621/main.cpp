/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 25 de febrero de 2017, 6:48
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int n;
    string s;
    cin >> n;
    while(n--) {
        cin >> s;
        if (s[(s.size()) - 2] == '3' && s[s.size() - 1] == '5')
            cout << '-' << endl;
        else if (s[s.size() - 1] == '4' && s[0] == '9')
            cout << '*' << endl;
        else if(s[0] == '1' && s[1] == '9' && s[2] == '0')
            cout << '?' << endl;
        else if (s[0] == '1' || s[0] == '4' || (s[0] == '7' && s[1] == '8'))
            cout << '+' << endl;
        else
            cout << '+' << endl;
    }
    return 0;
}

