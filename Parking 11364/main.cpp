/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 30 de enero de 2017, 13:31
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    int t, nStores, pos;
    vector<int> posArr;
    cin >> t;
    
    
//    posArr.assign(4,0);
    posArr.resize(4);
    

    
    for(int i = 0; i < t; i++) {
        cin >> nStores;
        posArr.resize(nStores); 
        for(int i = 0; i < nStores; i++){
            cin >> pos;
            posArr[i] = pos;
        }
        
        for(int i = 0; i < posArr.size(); i++) {
            cout << posArr[i] << endl;
        }
        
//        for (auto const &element: posArr)
//            std::cout << element << ' ';
    }
    return 0;
}

