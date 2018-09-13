/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 24 de enero de 2017, 13:50
 */

#include <iostream>
#include <string>

using namespace std;

string s = "iii";
string sub = "i";
int res = 0, inicio = 0;
int final = s.size();


//int cuantaSubstring(string s, string sub) {
//    if ((final - inicio) == 1)
//        return res;
//    else {
////        cout << "inicio: " << inicio << endl;
////        cout << sub[0] << " " << s[inicio] << endl;
////        cout << sub[1] << " " << s[inicio+1] << endl;
//        if (sub[0] == s[inicio] && sub[1] == s[inicio + 1]){
//            res += 1;
////            cout << "encontro" << res << endl;
//        }
//        inicio += 1;
//        
//        return cuantaSubstring(s,sub);
//    }
//}

int main(int argc, char** argv) {
//    cout << sub[0] << endl;
//    cout << sub[1] << endl;
    cout << cuantaSubstring(s,sub) << endl;
    return 0;
}






//esto es un intento fallido de implementacion para un substring de mas de dos characteres de largo
//int cuantaSubstring(string s, string sub) {
//    if ((s.size() - inicio) == 1)
//        return res;
//    else {
//        while (i < sub.size()){
//            if(sub[i] == s[inicio + i])
//                accum += 1; 
//        
//            //cout << "Si " << accum << " == " << sub.size() << endl;
//            if (accum == sub.size())
//                res += 1;
//            i += 1; 
//        }
//        inicio += 1;
//        return cuantaSubstring(s,sub);
//    }
//}