/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 30 de enero de 2017, 13:31
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
    int t, stores, pos, temp, min, max;
    cin >> t;
    while(t--){
        cin >> stores;
        min = 1000;
        max = 0;
        for(int i = 0; i < stores; i++) {
            
            scanf("%d", &temp);
            if (temp < min)
                min = temp;
            if (temp > max)
                max = temp;
        }
        printf("%d\n", (max - min) * 2);
    }
    
    return 0;
}

