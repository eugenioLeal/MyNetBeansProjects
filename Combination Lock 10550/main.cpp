/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 21 de enero de 2017, 14:35
 */

#include <iostream>

using std::cin; using std::cout; using std::endl;

int comb(int i, int a, int b, int c) {
    int autoTurns = 720 + 360;
    return autoTurns + (((a>i?(40-a)+i:(i-a)) + (b<a?(40-a)+b:(b-a)) + (c>b?(40-c)+b:(b-c))))*9;
}
int main(int argc, char** argv) {
    int a,b,c,d;
    while(cin >> a >> b >> c >> d)
        if(a == 0 && b == 0 && c == 0 && d == 0)
            break;
        else 
            cout << comb(a,b,c,d) << endl;
    return 0;
}

