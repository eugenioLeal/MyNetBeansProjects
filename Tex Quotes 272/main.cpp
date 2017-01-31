/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 23 de enero de 2017, 19:55
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    //string s = "\"To be or not to be,\" quoth the Bard, \"that is the question\". The programming contestant replied: \"I must disagree. To `C' or not to `C', that is The Question!\"";
    char ch;
    int charCount = 0;
    while (cin.get(ch)) {
        if (ch == '"'){
            charCount += 1;
            if ((charCount % 2) == 0)
            cout << "'" << endl;
        }
        else
            cout << ch;
    }
    return 0;
}

