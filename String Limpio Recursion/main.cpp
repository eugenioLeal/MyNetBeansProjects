/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 24 de enero de 2017, 10:49
 */

#include <iostream>
#include <string>
//#include <vector>

using namespace std;

string s = "aabbbccccccddddddeeee";
string res;
int inicio = 0; 
int final = s.size();

string limpiaString(string s) {
    if((final - inicio) == 1) {
        //res.push_back(s[inicio]);
        return res;
    } else {
        if (s[inicio] != s[inicio+1])
            res.push_back(s[inicio]);
        inicio += 1;
        return limpiaString(s);
    }
}



int main(int argc, char** argv) {
    cout << limpiaString(s) << endl;
    return 0;
}

